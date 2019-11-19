#include <iostream>
//#include <conio.h>
#include <string>
#include <stdio.h>

using namespace std;

class Hotel
{
public:

	Hotel() {

	}
	void setCategory(string Ct) { Categorory = Ct; };
	string getCategory() { return Categorory; };
	void setServiceType(string Type) { ServiceType = Type; };
	string getServiceType(){ return ServiceType; };
	void setFoodName(string Food) { FoodName = Food; };
	string getFoodName() { return FoodName; };
	void setDrinkName(int Drink) { DrinkName = Drink; };
	string getDrinkName() { return DrinkName; };
	void setCost(float Cst) { Cost = Cst; };
	float getCost() { return Cost; };
	string result = result + "FEEDING:\n" +
		"\nCategory:\t" + Categorory +
		"\nService Type:\t" + ServiceType +
		"\nFood Name:\t" + FoodName +
		"\nDrink Name:\t" + DrinkName +
		"\nRoom Cost:\t" + to_string(Cost) +
		"\n<------------->\n";
private:

	string Categorory;
	string ServiceType;
	string FoodName;
	string DrinkName;
	float Cost;
};
