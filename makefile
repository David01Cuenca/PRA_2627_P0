.SUFFIXES: .cpp .h .o
all: app
.cpp.o:
	g++ -c $*.cpp
RoboticArm.o: RoboticArm.cpp RoboticArm.h

main.o: main.cpp RoboticArm.h

app: main.o RoboticArm.o
	g++ main.cpp RoboticArm.cpp -o app
	
clean:
	rm -f *.o app
test: all
	./app
