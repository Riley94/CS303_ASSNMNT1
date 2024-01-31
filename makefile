CXX = g++
CXXFLAGS = -Wall -g
TARGET = main
OBJS = main.o MyVector.o
all: $(TARGET)

# Link the target with object files
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp MyVector.h
	$(CXX) $(CXXFLAGS) -c main.cpp

MyVector.o: MyVector.cpp MyVector.h
	$(CXX) $(CXXFLAGS) -c MyVector.cpp

clean:
	rm -f $(OBJS) $(TARGET)
	