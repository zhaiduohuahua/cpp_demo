CXX = g++
CXXFLAGS = -std=c++17 -O2 -Wall

TARGET = stats_demo
SRC = src/main.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $^ -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)