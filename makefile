COMPILER = g++
FLAGS = -std=c++20 -stdlib=libc++
SRC = librarySystem.cpp library.cpp book.cpp
TARGET = libraryApp
MAIN = libraryMain.cpp
OBJ = $(SRC:.cpp=.o)
LIB = mylib.a


all: $(TARGET)


$(TARGET) : $(OBJ)

	ar rsc $(LIB) $(OBJ)
	$(COMPILER) $(FLAGS) $(MAIN) -L. $(LIB) -o $(TARGET)

%.o : %.cpp
	$(COMPILER) $(FLAGS) -c $(SRC)



run:
	./$(TARGET)

clean:
	rm -f $(OBJ) $(TARGET) $(LIB)