# 🛒 Console Supermarket App in C++

**Simple logic. Real thinking.**

*Hi, I'm Penny — welcome to my simple C++ supermarket app.*

---

## 🧠 Project Overview

A small **console-based supermarket simulation** written in pure C++ basics (no classes, no STL).

**Features:**

* Choose from preset products (pork, beef, fish, vegetables, carrots)
* Input quantities with validation
* Auto price calculation
* 10% discount if total > \$50
* Print detailed invoice

---

## 🚀 How to Run

```bash
g++ -std=c++17 -O2 main.cpp -o supermarket
./supermarket
```

Or with CMake:

```bash
mkdir build && cd build
cmake ..
cmake --build .
./supermarket
```

---

## 💻 Code Structure

| File             | Purpose       |
| ---------------- | ------------- |
| `main.cpp`       | Program logic |
| `README.md`      | Documentation |
| `CMakeLists.txt` | Build config  |

---

## 🌾 Product Catalog

| Product    | Command   | Price (\$) |
| ---------- | --------- | ---------- |
| Pork       | `thitlon` | 15.0       |
| Beef       | `thitbo`  | 20.5       |
| Fish       | `ca`      | 12.5       |
| Vegetables | `rau`     | 10.0       |
| Carrots    | `carot`   | 11.7       |

---

## 📄 Example Session

```plaintext
> Name: thang

> Product: thitbo
Quantity: 2

> Product: carot
Quantity: 5

> ok
Print invoice? y

--- INVOICE ---
Beef x2 = $41.0
Carrots x5 = $58.5
Total: $99.5
Discount 10% ✅
Final: $89.55
```

---

## ✨ Author

👑 **DUONG VAN THANG** aka **Penny**

🛠️ Embedded Dev | PCB Designer | C/C++ Enthusiast
⚡ Industrial Automation & PLC (Siemens)

🔥 *"I may not write elegant code, but it works. Every damn time."*

[![GitHub](https://img.shields.io/badge/GitHub-tinybutpenny-black?style=for-the-badge\&logo=github)](https://github.com/tinybutpenny)
📧 Email: [duongthang090803@gmail.com](mailto:duongthang090803@gmail.com)

---

**⭐ If you find this project helpful, give it a star!**
