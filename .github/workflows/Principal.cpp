#include "TuristaBasico.cpp"
#include <iostream>
//#include <conio.h>
#include <string>
#include <stdio.h>

using namespace std;

int main() 
{
	TuristaBasico TuristaBasico;
	TuristaBasico.setName("Pedro");
	cout << endl;
	cout << TuristaBasico.getName();
	return 0;
}
