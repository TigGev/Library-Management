CXX = g++
CXXFLAGS = -std=c++20 -Wall -Iinclude

SRC = src/book.cpp src/library.cpp src/librarySystem.cpp
OBJ = $(SRC:.cpp=.o)
MAIN = src/main.cpp
TARGET = build/LibraryApp
LIB = build/libmylib.a

all: $(TARGET)

$(TARGET): $(OBJ)
	@mkdir -p build
	ar rcs $(LIB) $(OBJ)
	$(CXX) $(CXXFLAGS) $(MAIN) -Lbuild -lmylib -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run:
	./$(TARGET)

clean:
	rm -f $(OBJ) $(TARGET) $(LIB)
