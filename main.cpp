#include "RoboticArm.h" 
#include <iostream>

using namespace std;

int main (int argc, char* argv[]){
	RoboticArm robo1 = RoboticArm(20,10,5);
	cout << "El robot esta en la coordenada: " << robo1.getX() << ", " << robo1.getZ() << ", " << robo1.getY() << "." << " Estado de la pinza: "<< (robo1.getpickStatus() ? "Abierto" : "Cerrado") << endl;
	robo1.move(10,5,0);
	cout << "El robot esta en la coordenada: " << robo1.getX() << ", " << robo1.getZ() << ", " << robo1.getY() << "." << " Estado de la pinza: "<< (robo1.getpickStatus() ? "Abierto" : "Cerrado") << endl;
	robo1.grab();
	cout << "El robot esta en la coordenada: " << robo1.getX() << ", " << robo1.getZ() << ", " << robo1.getY() << "." << " Estado de la pinza: "<< (robo1.getpickStatus() ? "Abierto" : "Cerrado") << endl;
	return 0;
}
