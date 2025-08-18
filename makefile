CC     = gcc
CFLAGS = -std=c99 -O2 -Wall -Wextra

C_SRCS = $(wildcard src/*.c)
OBJS   = $(C_SRCS:.c=.o) run.o

TARGET = run

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

