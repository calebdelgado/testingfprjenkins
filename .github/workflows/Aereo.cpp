#include <iostream>
//#include <conio.h>
#include <string>
#include <stdio.h>

using namespace std;

class Aereo {

public:

	/*CONSTRUCTOR CLASS*/
	Aereo() {



	}

	/*DATA ENCAPSULATION METHODS*/
	void setFlightType(string Flight) { FlightType = Flight; };
	string getFlightType() { return FlightType; };
	void setTicketType(string Ticket) { TicketType = Ticket; };
	string getTicketType() { return TicketType; };
	void setTicketCost(float Cost) { TicketCost = Cost; };
	float GetTicketCost() { return TicketCost; };
	string result = result + "FLIGHT:\n" +
		"\nFlight Type:\t" + FlightType +
		"\nTicket Type:\t" + TicketType +
		"\nTicket Cost:\t" + to_string(TicketCost) +
		"\n<------------->\n";
private:
	
	string FlightType;
	string TicketType;
	float TicketCost;

};
