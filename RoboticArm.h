RoboticArm::RoboticArm(double x, double, y, double z){
	this->x = x;
	this->y = y;
	this->z= z;
}
RoboticArm::double getX(){
	return x;
}

RoboticArm::double getY(){
	return y;
}	
RoboticArm::double getZ(){
	return z;
}	
RoboticArm::bool getpickStatus(){
	return pickStatus;
}
RoboticArm::void grab(){
	pickStatus=true;
}
RoboticArm::void release(){
	pickStatus=false;
}
RoboticArm::void move(double x, double y, double z){
	this->x=x;
	this->y=y;
	this->z=z;
}
