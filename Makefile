CC = gcc
CFLAGS = -g -Wall
LDFLAGS = -lm
OBJFILES = model.o main.o
TARGET = static

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(FLAGS) -o $(TARGET) $(OBJFILES)

clean:
	rm -f $(OBJFILES) $(TARGET)
