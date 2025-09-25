#include <iostream>
using namespace std;

int main () {
	double F = 0 , C;
	
	cout << "Enter the temperature in Celsius: "; 
	cin >> C;
	F = (9.0 / 5) * C + 32;
	cout << C << " " << "Celsius\n";
	cout << F << " "<< "Fahrenheit";
	
	return 0;
}
 
