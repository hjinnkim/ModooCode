CC = g++
CFLAGS = -Wall -O2
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)

# TARGET = main.out
TARGET = $(OBJS:.o=.out)

all : $(TARGET)

# $(OBJS) : $(SRCS)
# 	$(CC) $(CFLAGS) -c $^ -o $@

# $(TARGET) : $(OBJS)
# 	$(CC) $(CFLAGS) $^ -o $@

%.out : %.o
	$(CC) $(CFLAGS) $< -o $@

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean echo

clean:
	@echo Delete $(OBJS) $(TARGET)
	rm -f $(OBJS) $(TARGET)

echo:
	@echo SRCS		: $(SRCS)
	@echo OBJS		: $(OBJS)
	@echo TARGET	: $(TARGET)