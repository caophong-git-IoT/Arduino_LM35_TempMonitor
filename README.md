# Arduino LM35 Temperature Monitor

Dự án đọc nhiệt độ từ cảm biến LM35 sử dụng Arduino UNO, xuất dữ liệu qua Serial dạng JSON và CSV, hỗ trợ hiển thị đồ thị thời gian thực trên PC. Dự án được phát triển theo mô hình nhóm sử dụng Git/GitHub để quản lý phiên bản.

## Tính năng

- Đọc nhiệt độ từ 3 cảm biến LM35 (chân A0, A1, A2)
- Xuất dữ liệu dạng JSON qua Serial
- Xuất dữ liệu dạng CSV qua Serial
- Hỗ trợ hiển thị đồ thị thời gian thực trên PC (C# WinForms + ZedGraph)
- Quản lý phiên bản với Git/GitHub
- Làm việc nhóm với branch, pull request, xử lý conflict

## Phần cứng yêu cầu

| Thành phần | Số lượng | Ghi chú |
|------------|----------|---------|
| Arduino UNO | 1 | Hoặc board tương thích |
| Cảm biến LM35 | 3 | Cảm biến nhiệt độ analog |
| Breadboard | 1 | Để kết nối |
| Dây cắm (jumper) | 5 | Kết nối breadboard-arduino |

## Sơ đồ kết nối

| Chân LM35 | Kết nối Arduino |
|-----------|------------------|
| VCC (chân 1) | 5V |
| OUT (chân 2) | A0, A1, A2 |
| GND (chân 3) | GND |

## Hướng dẫn sử dụng

1. Kết nối 3 cảm biến LM35 với Arduino theo sơ đồ trên
2. Mở file `firmware/LM35_TempReader/LM35_TempReader.ino` bằng Arduino IDE
3. Chọn board: **Tools → Board → Arduino UNO**
4. Chọn cổng: **Tools → Port → (chọn cổng COM đúng)**
5. Nhấn **Upload** để nạp code lên Arduino
6. Mở **Serial Monitor** (Tools → Serial Monitor) với baudrate **9600**
7. Quan sát nhiệt độ hiển thị

**Ví dụ output JSON:**
```json
{"temp1":25,"temp2":30,"temp3":28}
Arduino_LM35_TempMonitor/
├── firmware/
│   └── LM35_TempReader/
│       └── LM35_TempReader.ino   # Code Arduino chính
├── pc_app/                        # Ứng dụng PC (C# WinForms)
├── docs/                          # Tài liệu dự án
├── libs/                          # Thư viện hỗ trợ
├── simulation/                    # File mô phỏng Proteus
└── README.md                      # Tài liệu hướng dẫn

nhiệt độ = (giá_trị_ADC × 500.0) / 1023.0

Thành viên nhóm
Họ tên	MSSV	Vai trò
Cao Phong	N23DCCI058	Phát triển firmware, tạo branch, merge
Lê Trung Bình	N23DCCI007	Xử lý conflict, định dạng JSON

---

### Các bước thực hiện:

```bash
# 1. Mở file README.md
cd ~/Arduino_LM35_TempMonitor
code README.md

# 2. Xóa hết nội dung cũ, dán nội dung mới vào, lưu file

# 3. Commit và push
git add README.md
git commit -m "docs: cap nhat README day du"
git push origin main
---

## 👤 Tác giả

**Cao Phong**  
🌐 Portfolio: https://caophong-git-IoT.github.io  
💻 GitHub: https://github.com/caophong-git-IoT  
📧 Email: caophong2025@gmail.com5