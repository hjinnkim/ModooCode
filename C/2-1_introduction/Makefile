CC = gcc
CFLAGS = -Wall -O2
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

TARGET = main.out

all : $(TARGET)

$(OBJS) : $(SRCS)
	$(CC) $(CFLAGS) -c $< -o $@
	
$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

.PHONY: test clean

clean:
	@echo Delete $(OBJS) $(TARGET)
	rm -f $(OBJS) $(TARGET)

test:
	@echo SRCS : $(SRCS)
	@echo OBJS : $(OBJS)