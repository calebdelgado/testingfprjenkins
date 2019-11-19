#include "RentACar.h"

class RentACar
{
public:

	RentACar() {

	}
	void setCarType(string Ct) { CarType = Ct; };
	string getCarType() { return CarType; };
	void setPlateNumber(string pn) { PlateNumber = pn; };
	string getPlateNumber() { return PlateNumber; };
	void setMileage(float Ml) { Mileage = Ml; };
	float getMileage() { return Mileage; };
	void setRentDays(int Rd) { RentDays = Rd; };
	int getRentDays() { return RentDays; };
	void setCostPerDay(float Cst) { CostPerDay = Cst; };
	float getCostPerDay() { return CostPerDay; };
	float GetTotalCosto() { return TotalCost; };
	string result = result + "FEEDING:\n" +
		"\nCar Type:\t" + CarType +
		"\nPlate Number:\t" + PlateNumber +
		"\nMileage:\t" + to_string( Mileage) +
		"\nRent Days:\t" + to_string(RentDays) +
		"\nost Per Day:\t" + to_string(CostPerDay) +
		"\nTotal Cost:\t"  + to_string(TotalCost)+
		"\n<------------->\n";
private:

	string CarType;
	string PlateNumber;
	float Mileage;
	int RentDays;
	float CostPerDay;
	float TotalCost = RentDays * CostPerDay;
};


