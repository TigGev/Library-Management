# 📚 Library Management System

A simple C++ Library Management System for managing books with add, list, search, and delete functionalities.

## 🌟 Features

- Add books (title, author, ISBN, year)
- List all books
- Search by title, author, or ISBN
- Delete books by ISBN
- Modular C++ classes (`Book`, `Library`, `LibrarySystem`)
- Optional file storage (`data/books.txt`)

## 📂 Project Structure

```
Library-Management/
├── include/                # Headers
│   ├── book.h
│   ├── library.h
│   └── librarySystem.h
├── src/                    # Source files
│   ├── main.cpp
│   ├── book.cpp
│   ├── library.cpp
│   └── librarySystem.cpp
├── data/                   # Book data
│   └── books.txt
├── tests/                  # Unit tests (optional)
├── build/                  # Binaries (git-ignored)
├── Makefile                # Build instructions
├── README.md               # Documentation
├── LICENSE                 # MIT License
└── .gitignore
```

## ⚙️ Requirements

- C++20-compatible compiler (e.g., `g++`, `clang++`)
- Standard C++ Library
- Make

## 🛠️ Build & Run

### Build
```bash
git clone https://github.com/TigGev/Library-Management.git
cd Library-Management
make
```

### Run
```bash
./build/LibraryApp
```

## 🔍 Usage

1. Run the program.
2. Select from menu:
   - `1`: Add book
   - `2`: List books
   - `3`: Search book
   - `4`: Delete book
   - `5`: Exit (saves to `data/books.txt` if enabled)

## 💡 Future Improvements

- Book editing
- Case-insensitive search
- Input validation
- GUI support

## 📜 License

MIT License. See [LICENSE](LICENSE) for details.