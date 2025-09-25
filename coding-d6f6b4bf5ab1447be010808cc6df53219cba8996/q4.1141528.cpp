#include <iostream>
#include <iomanip>
using namespace std;
 int main (){
 	int a , b , c;
	double t;
	cout << "How many TVs were sold? ";
 	cin >> a;
 	cout << "How many DVDs were sold? ";
 	cin >> b;
 	cout << "How many remote controllers were sold? ";
 	cin >> c;
 	cout << "Quantity\t" << "Description\t" << "Unit Price\t" << "Total Price" << "\n"; 
 	cout << a << "\t" << "\tTV\t"  << "\t1400.00\t" << "\t" << a * 1400.00 << endl;
 	cout << b << "\t" << "\tDVD\t" << "\t220.00\t"	<< "\t" << b * 220.00 << endl;
	cout << c << "\t" << "\tRemote\t" << "\t35.20\t" << "\t" << c * 35.20 << endl;
 	t = a * 1400 + b * 220 + c * 35.20;
	cout << "Total before tax: \t\t\t\t" << fixed << setprecision(2) << t << endl;
	cout << "Tax: \t\t\t\t\t\t" << fixed << setprecision(2) << t * 0.0825 << endl;
	cout << "Total: \t\t\t\t\t\t" << fixed << setprecision(2) << t * (1 + 0.0825) << endl;
 	return 0;
}