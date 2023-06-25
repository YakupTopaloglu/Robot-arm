import cv2

# Kamera açma
cap = cv2.VideoCapture("http://192.168.0.19:8080/video")

while True:
    # Görüntüyü yakalama
    ret, frame = cap.read()

    # Izgara oluşturma
    height, width, _ = frame.shape
    grid_size = 50  # Izgara hücre boyutu
    for x in range(0, width, grid_size):
        cv2.line(frame, (x, 0), (x, height), (0, 255, 0), 1)  # Dikey çizgiler
    for y in range(0, height, grid_size):
        cv2.line(frame, (0, y), (width, y), (0, 255, 0), 1)  # Yatay çizgiler

    # Görüntüyü gösterme
    timer=cv2.getTickCount()
    fps=cv2.getTickFrequency()/(cv2.getTickCount()-timer)
    cv2.putText(frame,str(int(fps)),(75,50),cv2.FONT_HERSHEY_SIMPLEX,0.7,(0,0,255),2)
    cv2.imshow('Tracking', frame)

    # Çıkış için q tuşuna basma kontrolü
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# Kaynakları serbest bırakma
cap.release()
cv2.destroyAllWindows()
