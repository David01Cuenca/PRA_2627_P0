#include <iostream>
#include "RoboticArm.h"

RoboticArm::RoboticArm(double x, double y, double z){
	this->x = x;
	this->y = y;
	this->z= z;
	this->pickStatus = false;
}
double RoboticArm::getX(){
	return x;
}

double RoboticArm::getY(){
	return y;
}	
double RoboticArm::getZ(){
	return z;
}	
bool RoboticArm::getpickStatus(){
	return pickStatus;
}
void RoboticArm::grab(){
	pickStatus=true;
}
void RoboticArm::release(){
	pickStatus=false;
}
void RoboticArm::move(double x, double y, double z){
	this->x=x;
	this->y=y;
	this->z=z;
}


