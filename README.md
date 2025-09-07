# Luminary TechVision Simple Calculator Tool光龙锐志简易计算器

## 📖 Project Overview

This project is a **simple calculator tool** built with the **Qt framework**.
It supports basic arithmetic operations and parentheses, using the **Shunting Yard Algorithm** to parse and evaluate mathematical expressions.
The interface is clean and intuitive, allowing real-time input and result display.

---

## ✨ Features

* ➕ ➖ ✖️ ➗ Basic arithmetic operations
* 🔢 Multi-digit numbers and decimal point input
* 🔄 Parentheses with proper operator precedence
* 🧮 Real-time display of input expressions and results
* ❌ Clear and backspace operations
* ⚠️ Division-by-zero protection (prevents crashes)
* 📝 Calculation results can be used as the initial value for the next operation (continuous calculation)

---

## 🖼️ UI Preview
<div align="center">
<img width="349" height="564" alt="image" src="https://github.com/user-attachments/assets/21d5466f-6959-4284-a24e-4473d8e4b2e9" />
</div>
---

## 🛠️ Implementation

* **Framework**: Qt 5 / Qt 6
* **Language**: C++
* **Core Components**:

  * `MainWindow`: Main window logic
  * `onButtonClicked()`: Generic slot for input buttons
  * `calculateExpression()`: Shunting Yard Algorithm implementation
  * `on_pushButtonEqual_clicked()`: Evaluate expression and display result
  * `on_pushButtonClear_clicked()`: Clear input
  * `on_pushButtonDelete_clicked()`: Backspace delete

---

## 🚀 How to Run

1. Clone the repository:

   ```bash
   git clone https://github.com/your-username/your-repo.git
   cd your-repo
   ```

2. Open the `.pro` project file with **Qt Creator**.

3. Build and run to start the calculator.

---

## 📂 Project Structure

```
.
├── mainwindow.h        # Main window header
├── mainwindow.cpp      # Main window implementation
├── main.cpp            # Application entry point
├── mainwindow.ui       # Qt Designer UI file
├── icon.ico            # Application icon
└── README.md           # Project documentation
```

---

## 📌 Future Improvements

* ✅ Support negative numbers (e.g., `-5+3`, `(-2)*3`)
* ✅ Improve floating-point precision display
* ⬜ Add advanced operations (square root, power, percentage)
* ⬜ Add memory functions (M+, M-, MR, MC)

---

## 🏷️ License

This project is developed by **Luminary TechVision** and is intended for **learning and research purposes only**.



# Luminary TechVision 简易计算器工具

## 📖 项目简介

本项目是一个基于 **Qt** 框架开发的简易计算器工具，支持基本的四则运算和括号运算，采用 **调度场算法 (Shunting Yard Algorithm)** 进行表达式解析与计算。界面简洁直观，支持实时输入和结果显示。

---

## ✨ 功能特性

* ➕ ➖ ✖️ ➗ 四则运算
* 🔢 多位数与小数点输入
* 🔄 括号优先级计算
* 🧮 实时显示输入表达式与运算结果
* ❌ 清除与退格操作
* ⚠️ 除零保护（防止程序崩溃）
* 📝 结果可作为下一次计算的初始值，实现连续计算

---

## 🖼️ 界面预览

<div align="center">
<img width="349" height="564" alt="image" src="https://github.com/user-attachments/assets/21d5466f-6959-4284-a24e-4473d8e4b2e9" />
</div>
---

## 🛠️ 技术实现

* **框架**: Qt 5 / Qt 6
* **语言**: C++
* **主要模块**:

  * `MainWindow`：主窗口逻辑
  * `onButtonClicked()`：通用按钮槽函数，拼接输入
  * `calculateExpression()`：调度场算法实现
  * `on_pushButtonEqual_clicked()`：解析表达式并计算
  * `on_pushButtonClear_clicked()`：清空输入
  * `on_pushButtonDelete_clicked()`：退格删除

---

## 🚀 使用方法

1. 克隆项目到本地：

   ```bash
   git clone https://github.com/你的用户名/你的仓库名.git
   cd 你的仓库名
   ```

2. 使用 Qt Creator 打开 `.pro` 工程文件。

3. 点击编译并运行，即可启动简易计算器。

---

## 📂 项目结构

```
.
├── mainwindow.h        # 主窗口头文件
├── mainwindow.cpp      # 主窗口实现
├── main.cpp            # 程序入口
├── mainwindow.ui       # Qt Designer 设计的界面文件
├── icon.ico            # 程序图标
└── README.md           # 项目说明文档
```

---

## 📌 待优化 & 扩展

* ✅ 支持负数解析（如 `-5+3`、`(-2)*3`）
* ✅ 优化浮点数显示精度
* ⬜ 支持高级运算（开方、乘方、百分比）
* ⬜ 增加存储功能（M+, M-, MR, MC）

---

## 🏷️ 版权声明

本项目由 **光龙锐志 Luminary TechVision** 开发，仅供学习与研究使用。

