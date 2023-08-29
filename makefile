TARGET = Quadratic_Project.exe
CC = g++
FLAGS = -Wshadow -Winit-self -Wredundant-decls -Wcast-align -Wundef -Wfloat-equal \
        -Winline -Wunreachable-code -Wmissing-declarations -Wmissing-include-dirs \
        -Wswitch-enum -Wswitch-default -Weffc++ -Wmain -Wextra -Wall -g -pipe -fexceptions \
        -Wcast-qual -Wconversion -Wctor-dtor-privacy -Wempty-body -Wformat-security -Wformat=2 \
        -Wignored-qualifiers -Wlogical-op -Wno-missing-field-initializers -Wnon-virtual-dtor \
        -Woverloaded-virtual -Wpointer-arith -Wsign-promo -Wstack-usage=8192 -Wstrict-aliasing \
        -Wstrict-null-sentinel -Wtype-limits -Wwrite-strings -Werror=vla -D_DEBUG -D_EJUDGE_CLIENT_SIDE

$(TARGET): quadro_eq.o math_functions.o input.o output.o TestMode.o
	$(CC) $(FLAGS) quadro_eq.o math_functions.o input.o output.o TestMode.o -o $(TARGET)

quadro_eq.o: quadro_eq.cpp input.h output.h TestMode.h math_functions.h
	$(CC) $(FLAGS) -c quadro_eq.cpp -o quadro_eq.o

math_functions.o: math_functions.cpp
	$(CC) $(FLAGS) -c math_functions.cpp -o math_functions.o

input.o: input.cpp
	$(CC) $(FLAGS) -c input.cpp -o input.o

output.o: output.cpp
	$(CC) $(FLAGS) -c output.cpp -o output.o

TestMode.o: TestMode.cpp math_functions.h
	$(CC) $(FLAGS) -c TestMode.cpp -o TestMode.o

clean:
	rm $(TARGET) *.o
