# 📚 Library Management System

A simple **Library Management System** written in C++.  
This program allows managing books in a library, including adding, listing, searching, and deleting books.  

---

## 🚀 Features

- Add new books (title, author, ISBN, etc.)  
- List all books in the library  
- Search books by title, author, or ISBN  
- Delete books  
- Modular design using C++ classes (`Book`, `Library`, `LibrarySystem`)  

---

## 📂 Project Structure

Library-Management/
│
├── include/ # Header files
│ ├── book.h
│ ├── library.h
│ └── librarySystem.h
│
├── src/ # Source files
│ ├── main.cpp # Entry point (was libraryMain.cpp)
│ ├── book.cpp
│ ├── library.cpp
│ └── librarySystem.cpp
│
├── build/ # Compiled binaries (ignored in git)
├── data/ # Optional: store persistent book data
│ └── books.txt
├── tests/ # Optional: unit tests
│
├── Makefile # Build instructions
├── README.md # Project documentation
├── LICENSE # MIT License
└── .gitignore # Ignore build artifacts


---

## ⚙️ Requirements

- C++ compiler (supporting C++20)  
- Standard C++ library  

---

## 🛠️ Build & Run

### Build
```bash
make

Run
    ./build/LibraryApp

🔍 Usage

1. Run the program

2. Use the menu to choose operations:

    1 → Add book

    2 → List books

    3 → Search book

    4 → Delete book

    5 → Exit / Save (if persistence implemented)

3. Books can optionally be saved to a file in the data/ folder.

💡 Future Improvements

 - Add book editing/updating

 - Save books to a file automatically (persistent storage)

 - Advanced search (partial match, case-insensitive)

 - User-friendly interface (better prompts, input validation)

---

## 📜 License

This project is licensed under the MIT License — see LICENSE
 for details.
