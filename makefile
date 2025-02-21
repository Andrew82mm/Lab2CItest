CXX = g++
CXXFLAGS = -std=c++17 -Wall -g
SRC = main.cpp Character.cpp Weapon.cpp Spell.cpp 
OBJ = $(SRC:.cpp=.o)
EXEC = game
$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(EXEC)
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ) $(EXEC)
all: $(EXEC)

