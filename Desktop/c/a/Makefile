CC = g++
CFLAGS = -Wall -g
OBJECTS = main.o PowerTeam.o PressureTeam.o
EXECUTABLE = cubeblock

cubeblock: $(OBJECTS)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OBJECTS)
main.o: main.cpp PowerTeam.o
	$(CC) $(CFLAGS) -c main.cpp -o main.o
PowerTeam.o: PowerTeam.cpp PowerTeam.h
	$(CC) $(CFLAGS) -c PowerTeam.cpp -o PowerTeam.o
PressureTeam.o: PressureTeam.cpp PressureTeam.h
	$(CC) $(CFLAGS) -c PressureTeam.cpp -o PressureTeam.o
clean:
	rm $(OBJECTS) $(EXECUTABLE)