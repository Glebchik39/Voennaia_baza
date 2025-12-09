#pragma once
class Vecihle 
{
protected:
	double petrol_amount;
	double tank_volume;
public:
	Vecihle() {};
	Vecihle(double p, double t);
	double getTankVolume();
	double getPetrolAmount();
	virtual void arrive() = 0;
	virtual bool leave() = 0;
	virtual void Init();
	virtual void Print();
};

