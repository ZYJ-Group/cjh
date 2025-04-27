import cv2
img = cv2.imread("lena.jpg")
grat_img=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)#彩色转黑白
t,rst = cv2.threshold(grat_img,127,255,cv2.THRESH_BINARY)#阈值处理
cv2.imshow("img",img)
cv2.imshow("rst",rst)
cv2.waitKey()
cv2.destroyAllWindows()