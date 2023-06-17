import cv2

# Kamera açma
cap = cv2.VideoCapture("http://"ip adress" /video")#we have to get camera's ip adress

while True:
    # Görüntüyü yakalama
    ret, frame = cap.read()

    # Görüntüyü gösterme
    cv2.imshow('IP Kamera', frame)

    # Çıkış için q tuşuna basma kontrolü
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# Kaynakları serbest bırakma
cap.release()
cv2.destroyAllWindows()
