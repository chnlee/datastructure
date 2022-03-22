CC=g++
SRCS = $(shell ls *.cpp)
OBJS = $(SRCS:.cpp=.o)
HDRS = $(shell ls *.h)

TARGET = reverse

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -lc -o $@

%.o: %.cpp
	$(CC) -c $<

$(OBJS): $(HDRS)

clean:
	rm -f $(OBJS) $(TARGET) 

