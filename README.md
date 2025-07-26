# 🛒 Console Supermarket App in C++

**Simple logic. Real thinking.**

*Hi, I'm Penny — I build logic step by step, just like laying bricks with C++.*

*Welcome to this humble app — where `cin`, `cout`, and real-life logic meet.*


---

## 🧠 Project Overview

### 🇺🇸 
This project is a **console-based supermarket simulation**, coded in **pure C++** (no classes, no STL, just raw basics).

**What you can do:**
- Choose from preset products (pork, beef, fish, vegetables, carrots)
- Input quantities with validation
- Automatically calculate prices
- Get 10% discount if total exceeds $50
- View a detailed invoice

🔰 **Built to sharpen beginner-level C++ logic using only:**
- Variables
- Conditionals (`if`, `else`)
- Loops (`while`, `do-while`)
- Functions
- Basic string handling

### 🇻🇳 
Dự án mô phỏng một siêu thị mini trên **giao diện dòng lệnh (Console)**, viết bằng **C++ cơ bản** nhất (không hướng đối tượng, không thư viện ngoài).

**Tính năng:**
- Chọn sản phẩm có sẵn: thịt lợn, thịt bò, cá, rau, cà rốt
- Nhập số lượng với kiểm tra dữ liệu
- Tính tiền tự động
- Giảm 10% nếu tổng tiền > $50
- In hóa đơn chi tiết

✅ **Phù hợp để luyện tư duy lập trình C++ từ gốc rễ.**

---

## 🧪 Features Overview

| Function | Description |
|----------|-------------|
| 🏷️ **Product Selection** | Input product names (e.g. `thitbo`, `carot`) |
| 🔢 **Quantity Input** | Integer input with validation |
| 💰 **Price Lookup** | Automatic price calculation based on product |
| 💸 **Discount Logic** | 10% off if total > $50 |
| 🧾 **Invoice Printing** | Final breakdown of items and total price |

---

## 🚀 How to Run

```bash
# Create build directory
mkdir build && cd build

# Generate Makefiles
cmake ..

# Build the executable
cmake --build . --config Release

# Run the app
./supermarket.exe
📍 Requirements: CMake and a C++ compiler (like g++ or clang++)

---

## 💻 Code Structure

| File | Purpose |
|------|---------|
| `main.cpp` | Full source code — logic-driven design |
| `README.md` | You're reading it now 😎 |

---

## 🌾 Product Catalog

| Product (VN) | Input Command (EN) | Price ($) |
|--------------|-------------------|-----------|
| 🐷 Thịt lợn | `thitlon` | $15.0 |
| 🐄 Thịt bò | `thitbo` | $20.5 |
| 🐟 Cá | `ca` | $12.5 |
| 🥬 Rau | `rau` | $10.0 |
| 🥕 Cà rốt | `carot` | $11.7 |

> 🗒️ **Note:** Input is case-insensitive — `THITBO`, `ThItBo`, or `thitbo` all work the same.

---

## 📄 Example Session

```plaintext
> Vui lòng nhập tên của bạn
Dương van thang

> Bạn muốn mua gì
thitbo
> Vui lòng chọn số lượng
2

> Mời bạn tiếp tục sản phẩm ấn ok để thoát
carot
> Vui lòng chọn số lượng
5

> ok
> Bạn có muốn in hóa đơn không y/n
y

--- HOÁ ĐƠN ---
Thịt bò số lượng: 2
Đơn giá: 20.5$
Số tiền: 41.0$

Cà rốt số lượng: 5
Đơn giá: 11.7$
Số tiền: 58.5$

Tổng cộng: 99.5$
Giảm giá 10%: ✅
Bạn cần thanh toán: 89.55$
```

---

## 🔍 Why This Project?

*Sometimes, the best way to learn isn't from books — it's from building real logic.*


**What you WON'T find here:**
- ❌ No arrays
- ❌ No pointers
- ❌ No classes
- ❌ No clever tricks

**What you WILL find:**
- ✅ Just brute-force flow control
- ✅ Pure clarity over cleverness
- ✅ Real-world problem solving
- ✅ Beginner-friendly logic

> 📌 **Philosophy:** You won't find elegant code — you'll find brute clarity.

---

## ✨ Author


### 👑 **DUONG VAN THANG** aka **Penny**

🛠️ **Embedded Dev** | **PCB Designer** | **C/C++ Enthusiast**

⚡ *"I may not write elegant code, but it works. Every damn time."*

---

### 🔗 Contact

[![GitHub](https://img.shields.io/badge/GitHub-tinybutpenny-black?style=for-the-badge&logo=github)](https://github.com/tinybutpenny)

📧 **Email:** duongthang090803@gmail.com

---

*Measure twice. Type once.*

**Thanks for stopping by!** 🛠️🔥



---


**⭐ If you find this project helpful, consider giving it a star!**

*Built with ❤️ and pure C++ logic*
