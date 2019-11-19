#include <iostream>
//#include <conio.h>
#include <string>
#include <stdio.h>

using namespace std;

class Turista {

public:
        /*CONSTRUCTOR CLASS*/
	Turista() {
	
		cout << "This is the Tourist Class" << endl;

	}

	/*DATA ENCAPSULATION METHODS*/
	void setName(string TouristName) { Name = TouristName;  };
	string getName() { return Name; };
	void setPassport(string PassportN) { PassportNumber = PassportN; };
	string getPassport() { return PassportNumber;  };
	void setNacionality(string Nation) { Nacionality = Nation; };
	string GetNationality() { return Nacionality; };
        string result = "TOURIST:\n" + "\nName:\t" + Name + "\nPassportN:\t" + PassportNumber + "\nNacionality:\t" + Nacionality;

private:

	string Name;
	string PassportNumber;
	string Nacionality;

};
