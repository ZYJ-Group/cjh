# R2OFT网络

## 1. 网络整体流程概述

R2OFT（Radar to Optical Feature Transform）网络是一个基于循环生成对抗网络（CycleGAN）的跨域特征转换系统，主要用于将ISAR图像转换为具有完整特征的光学图像。

## 2. 核心GAN架构组件

### 2.1 生成器-判别器对

网络包含两对生成器-判别器：

- **生成器G**：ISAR → 光学图像转换
- **生成器F**：光学 → ISAR图像转换
- **判别器D₁**：判别光学图像真伪
- **判别器D₂**：判别ISAR图像真伪

### 2.2 网络输入输出流程

正向循环：x(ISAR) → G(x) → F(G(x)) ≈ x
反向循环：y(光学) → F(y) → G(F(y)) ≈ y

![1](https://github.com/ZYJ-Group/cjh/blob/main/2025/10.22/1.png)

## 3. 详细训练流程

### 3.1 特征生成流程

#### 步骤1：特征编码

特征编码器：该模块由三个下采样注意力残差卷积块组成，每一个块均使用残差结构。卷积层均是由两个 3 * 3 卷积核的卷积层，一个 3 * 3 卷积核的下采样层，三个实例标准化（Instance Normalization）层，三个 ReLU 激活层以及一个卷积注意力模块（Convolutional Block Attention Module，CBAM）组成。

![2](https://github.com/ZYJ-Group/cjh/blob/main/2025/10.22/2.png)

#### 步骤2：特征转换

特征转换器：特征转换器是特征生成网络的核心，负责接收编码器的特征图，用于特征域映射函数，将光学特征图或 ISAR 特征图翻译为对方域的特征图。该模块由 7 个注意力残差卷积块组成，每一个块也均使用残差结构。每个残差块由两个填充层，两个卷积核大小为 3 ∗ 3的卷积层，两个 IN 层，一个 ReLU 激活层，以及一个归一化注意力模块（Normalization-based Attention Module，NAM）。

![3](https://github.com/ZYJ-Group/cjh/blob/main/2025/10.22/3.png)

CBAM注意力机制提出了通道与空间双层注意力机制，它会赋予模型区分显著特征与非显著特征的能力，并使模型在训练时更加关注显著特征。但是，CBAM 缺乏对网络权重惩罚项（重要性参数）的应用，而这个惩罚项可以起到额外抑制不显著的特征的作用。针对这一问题，在本章中对 CBAM 注意力机制进行了改进，并称其为归一化注意力模块，其结构如图 3-5 所示。该模块与 CBAM 的区别在于，仅存在通道注意力子模块，在关注通道显著特征的同时会使用惩罚项抑制稀疏权重。这个惩罚项来自 IN，IN 如公式（3-7）所示，该惩罚项会计算通道的方差并表征他们的重要性。

![4](https://github.com/ZYJ-Group/cjh/blob/main/2025/10.22/4.png)

![5](https://github.com/ZYJ-Group/cjh/blob/main/2025/10.22/5.png)

![12](https://github.com/ZYJ-Group/cjh/blob/main/2025/10.22/12.png)

#### 步骤3：特征解码

特征解码器：特征解码器的作用是从特征转换器中接收转换后的特征图，并利用多次上采样操作，将特征图解码为图像，解码后的数据就是特征转换后的图像（从 ISAR 到光学图像或从光学图像到 ISAR 图像）。该模块由三个上采样注意力残差卷积块组成，与下采样注意力残差块相似，每个卷积块都由两个卷积核大小为 3 * 3 的卷积层，一个 3 * 3 卷积核的上采样层，三个 IN 层，三个 ReLU 激活层以及一个 CBAM 块组成，其结构如图 3-6 所示。

![6](https://github.com/ZYJ-Group/cjh/blob/main/2025/10.22/6.png)

#### 步骤4：特征判别

特征判别网络的作用主要是区分生成器生成的图像与真实图像之间的差别。该模块结构相对简单，由五个卷积层组成，前四个卷积层由一个卷积核大小为 3 ∗ 3的卷积层、一个下采样层、一个 BN 层以及一个 ReLU 激活层组成，最后一个卷积层只有卷积核大小为 3∗33∗3 的卷积层。由于判别器卷积层数不深，没有必要使用残差结构，也没有使用注意力模块。

![8](https://github.com/ZYJ-Group/cjh/blob/main/2025/10.22/8.png)

## 3. 损失函数

![9](https://github.com/ZYJ-Group/cjh/blob/main/2025/10.22/9.png)

![10](https://github.com/ZYJ-Group/cjh/blob/main/2025/10.22/10.png)


![11](https://github.com/ZYJ-Group/cjh/blob/main/2025/10.22/11.png)

