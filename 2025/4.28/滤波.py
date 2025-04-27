import cv2
import numpy as np
img=cv2.imread("lena.jpg")
r1=cv2.blur(img,(5,5))#均值滤波
r2=cv2.GaussianBlur(img,(5,5),0,0)#高斯滤波
r3=cv2.medianBlur(img,3)#中值滤波
kernel= np.ones((9,9),np.float32)/81#2d卷积
r4 = cv2.filter2D(img,-1,kernel)#2d卷积
cv2.imshow("img",img)
cv2.imshow("blur",r1)
cv2.imshow("GaussianBlur",r2)
cv2.imshow("medianBlur",r3)
cv2.imshow("filter2D",r4)
cv2.waitKey()
cv2.destroyAllWindows()