#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int doll=0, quart=0, dime=0, nick=0, pen=0;
	double total, pays, changeDue;


	cout << "Custumor owes: ";
	cin >> total;
	cout << "Customer pays: ";
	cin >> pays;

	changeDue = pays - total;
	cout << "Change due is $" << fixed<<setprecision(2)<<changeDue<<endl;

	//if greater than 1.
	if (changeDue >= 1)
	{
		doll = changeDue / 1;
		cout << "\n"<<doll << " dollars";
	}
	changeDue = changeDue - doll+.000005;

	if (changeDue < 1 && changeDue>0)
	{
		if (changeDue >= .25) 
		{
			quart = changeDue / .25;
			cout << "\n"<<quart << " quarters";
		}
		changeDue = changeDue - (.25*quart)+.0000005;
		
		if (changeDue >= .10 && changeDue < .25)
		{
			dime = changeDue / .10;
			cout<<"\n" << dime << " dimes";
		}
		changeDue = changeDue - (.10*dime)+.000000005;
		
		if (changeDue > .05 && changeDue < .10)
		{
			nick = changeDue / .05;
			cout<<"\n" << nick << " nickels";
		}
		changeDue = changeDue - (0.05 * nick)+.000000005;
		
		if (changeDue > .01 && changeDue < .05)
		{
			pen = changeDue / 0.01;
			cout <<"\n" << pen << " pennies";
		}
	}


	return 0;
}