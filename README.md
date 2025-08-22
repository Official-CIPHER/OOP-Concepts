![OOP Concepts Banner](https://develux.com/wp-content/uploads/2023/05/2-4.png)
# OOP Concepts in C++

This repository explains the **core concepts of Object-Oriented Programming (OOP)** in C++ with examples.  
Each concept has its own folder with example code that you can open and run.

---

## 📌 Table of Contents
1. [Class and Objects](#1-class-and-objects)  
2. [Constructor and Destructor](#2-constructor-and-destructor)  
3. [Encapsulation and Abstraction](#3-encapsulation-and-abstraction)  
4. [Inheritance](#4-inheritance)  
5. [Types of Inheritance](#5-types-of-inheritance)  
6. [Polymorphism](#6-polymorphism)  
7. [Exception Handling](#7-exception-handling)  
8. [File Handling](#8-file-handling)  

---

## 📝 Concepts Explained

### 1. Class and Objects
- **Class** → A blueprint that defines attributes (data) and behaviors (functions).  
- **Object** → An instance of a class that represents a real-world entity.  
- Example analogy: `Class = Car design`, `Object = Your personal car`.  

➡️ Example: **Open Folder Class and Objects**

---

### 2. Constructor and Destructor
- **Constructor** → Special function called automatically when an object is created. Used for initialization.  
- **Destructor** → Called automatically when the object goes out of scope. Used for cleanup (like closing files, freeing memory).  
- Types of constructors:
  - Default constructor  
  - Parameterized constructor  
  - Copy constructor  

➡️ Example: **Open Folder Contructor and Destructor**

---

### 3. Encapsulation and Abstraction
- **Encapsulation** → Wrapping data and methods inside a class + restricting access using access specifiers (`private`, `public`, `protected`).  
- **Abstraction** → Hiding the complex implementation and showing only the essential details.  
- Together they make code **secure, modular, and easy to maintain**.  

️ Example: **Open Folder Encapsulation and Abstraction**

---

### 4. Inheritance
- **Inheritance** → A way to reuse code by deriving new classes from existing ones.  
- Child (derived) class inherits attributes and methods from Parent (base) class.  
- Benefits: **code reusability, extensibility, clean design**.  
- Example analogy: `Vehicle` → base class, `Car` and `Bike` → derived classes.  

️ Example: **Open Folder Inheritance**

---

### 5. Types of Inheritance
- **Single Inheritance** → One base, one derived.  
- **Multilevel Inheritance** → Derived class becomes base for another.  
- **Multiple Inheritance** → Derived class inherits from more than one base class.  
- **Hierarchical Inheritance** → One base class, many derived classes.  
- **Hybrid Inheritance** → Combination of multiple inheritance types.  

️ Example: **Open Folder Types of Inheritance**

---

### 6. Polymorphism
- **Polymorphism** = "Many forms".  
- **Compile-time polymorphism** → Function overloading, Operator overloading.  
- **Run-time polymorphism** → Function overriding using **virtual functions**.  
- Example analogy: Function `speak()` → behaves differently for `Dog`, `Cat`, and `Human`.  

️ Example: **Open Folder V_Polymorphism**

---

### 7. Exception Handling
- **Exception Handling** allows the program to deal with errors gracefully without crashing.  
- C++ uses `try`, `catch`, and `throw` keywords.  
- Common examples: division by zero, invalid input, file not found.  
- Improves **stability** and **user experience**.  

️ Example: **Open Folder V2_Exception_handling**

---

### 8. File Handling
- **File Handling** = Reading from and writing to files for permanent data storage.  
- C++ provides `<fstream>` library with three main classes:
  - `ifstream` → input (read from file)  
  - `ofstream` → output (write to file)  
  - `fstream` → both input and output  
- Useful functions: `open()`, `close()`, `getline()`, `seekp()`, `tellp()`.  

️ Example: **Open Folder W_File_handling**

---

## 🚀 How to Run
Navigate to any folder and compile the `.cpp` file:

```bash
g++ example.cpp -o output
./output
