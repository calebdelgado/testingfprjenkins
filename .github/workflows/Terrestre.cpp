#include <iostream>
//#include <conio.h>
#include <string>
#include <stdio.h>

using namespace std;

class Terrestre
{
public:

	Terrestre() {

	}

	void setCategory(string Cat) { Category = Cat; };
	string getCategory() { return Category; };
	void setPlateNumber(string Plate) { PlateNumber = Plate; };
	string getPlateNumber() { return PlateNumber };
	void setDriverName(string Driver) { DriverName = Driver; };
	string getDriverName() { return DriverName; };
	string result = result + "TRANSPORTATION:\n" +
		"\nCategory:\t" + Category +
		"\nPlat Number:\t" + PlateNumber +
		"\nDriver Name:\t" + DriverName +
		"\n<------------->\n";
private:

	string Category;
	string PlateNumber;
	string DriverName;

};
