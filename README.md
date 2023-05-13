# ***2048 2.0***

## **Giới thiệu**

+ Họ và tên: Phùng Đức Anh - K67 CA-CLC-4 - CN8 - UET - VNU

+ Mã sinh viên: 22028063

+ Bài tập lớn:  **2048 2.0**  /INT2215 22 (N3) - Lập trình nâng cao

## **Mô tả dự án**

### *Mô tả game và hướng dẫn chơi*

- Ý tưởng xây dựng **2048 2.0** bắt nguồn từ tựa game **2048** từng được rất nhiều thế hệ 9x yêu thích nhưng có sự cải tiến khi mình đã bổ sung thêm chế độ 2 người chơi và thay đổi tông màu sang xanh nhằm nâng cao trải nghiệm chơi giải trí với bạn bè.

- Với chế độ 1 người chơi:
  + Điều khiển các ô số 2,4 được phát sinh ngẫu nhiên bằng phím A, W, S, D để ghép các ô giống nhau lại thành số to hơn.
  + Xếp đến khi đạt đến ô 2048 là chiến thắng.
  + Nếu không còn khoảng trống để xếp ô thì thua.
- Với chế độ 2 người chơi: luật giống chế độ 1 người và người thứ 2 sẽ di chuyễn bằng nút ⬅️⬆️⬇️➡️ (ai nhiều điểm hơn sẽ thắng người còn lại) 

- Xếp thành 1 ô bất kỳ thì điểm tính bằng số của ô đó. Ví dụ:

    ![](2048_beta/2048_Data/4.png) : 4 điểm       ![](2048_beta/2048_Data/8.png)  : 8 điểm           ![](2048_beta/2048_Data/16.png)   : 16 điểm


- Trò chơi có đủ tích hợp các chức năng hỗ trợ người chơi: bật/tắt âm thanh game, ghi nhận điểm cao, tạm dừng game khi đang chơi (esc key), đổi màu ô, lưu game,...

### *Preview*

![](textures/preview/menu.png)
![](textures/preview/ingame.png)
![](textures/preview/endgame.png)

## **Hướng dẫn cài đặt game**

- *Nếu gặp khó khăn trong quá trình cài đặt hay chơi game, hãy liên lạc qua email phungducanh2511@gmail.com.*

### *Các kỹ thuật sử dụng trong game*

- Thư viện SDL2.0

- Kĩ thuật tách file.

- Sử dụng và quản lí mảng, xử lí đồ họa.

- Tạo, sử dụng và quản lí class nhiều đối tượng: cá, điểm ,hình ảnh, âm thanh,...

- Xử lí hình ảnh, thời gian, sự kiện SDL, bật/tắt âm thanh, tạo ma trận, xử lí ma trận, tính toán tọa độ,....

### *Các nguồn tham khảo*

- Cách sử dụng, cài đặt SDL2: https://lazyfoo.net/tutorials/SDL/index.php
- Cách triển khai ý tưởng: https://www.youtube.com/watch?v=tGWhk47ZIm4
- Hình ảnh: Tự tạo bằng canva và photoshop.
- Âm thanh: freesound.org.

## **Tổng kết**

### *Điều tâm đắc*

- Em đã dành rất nhiều thời gian cho project này với mục tiêu hướng tới sự chỉnh chu hết sức có thể. Em tin rằng đây là game có ý tưởng khá mới so với các game 2048 trước và nhìn chung là khá hoàn chỉnh.

- Cải thiện nhiều kĩ năng lập trình, sử dụng và quản lí file, chương trình.

- Học được cách design hình ảnh, sử dụng photoshop, edit âm thanh,..

### *Điểm hạn chế*

- Xử lý ma trận còn hạn chế
- Dùng mô hình hướng đối tượng chưa thực sự tốt

### *Hướng phát triển tiếp theo*

- Phát triển con bot có khả năng chơi game với người.
- Tạo chế độ chơi với cửa sổ full màn hình.
- Tăng kích thước bản chơi lên 16x16, 32x32,...
- Cập nhật bảng xếp hạng high scores, lấy top điểm cao.
- Cải thiện chất lượng animation trong game.
