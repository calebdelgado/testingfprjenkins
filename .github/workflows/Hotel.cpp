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

	void setName(string Nam) { Name = Nam; };
	string getName() { return Name; };
	void setCategory(int Cat) { Category = Cat; };
	int getCategory() { return Category; };
	void setRoom(string Room) { RoomNumber = Room; };
	string getRoom() { return RoomNumber; };
	string result = result + "HOTEL:\n" +
		"\nName:\t" + Name +
		"\nCategory:\t" + to_string(Category)+"\tStars" +
		"\nRoom Number:\t" + RoomNumber +
		"\n<------------->\n";
private:

	string Name;
	int Category;
	string RoomNumber;

};
