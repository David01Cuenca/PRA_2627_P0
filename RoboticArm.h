class RoboticArm{
	private:
		double x,y,z;
		bool pickStatus;
	public:
		RoboticArm(double x, double y, double z);
		double getX();
		double getY();
		double getZ();
		bool getpickStatus();
		void grab();
		void release();
		void move(double x, double y, double z);
};
