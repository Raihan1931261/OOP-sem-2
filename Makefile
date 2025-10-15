CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -O2

OBJS := main.o Player.o BattleGame.o GameInterface.o

all: game

game: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJS) game
