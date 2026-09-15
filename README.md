# Operator Overloading Using Constructors

## 📌 Practical Title
Write a program on operator overloading using default and parameterized constructors.

## 🎯 Objective
- To understand operator overloading in C++.
- To understand default and parameterized constructors.
- To overload the `+` operator for class objects.

## 📝 Description
This program demonstrates operator overloading using a `Book` class.

The program uses:
- A **default constructor** to initialize an empty book.
- A **parameterized constructor** to initialize book name and price.
- The **`+` operator** to add the prices and combine the names of two books.

## 🛠️ Technologies Used
- C++
- iostream
- string

## ⚙️ Working
Two book objects are created using the parameterized constructor:

- C++ → ₹500
- Python → ₹300

The overloaded `+` operator combines both books.

```cpp
b1 = b2 + b3;
