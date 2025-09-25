#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a , b , c , x1 , x2 , t , s;
	cin >> a >> b >> c; 
	t = b*b-4*a*c;
	s = pow(t,0.5);
	x1 = (-b+s)/(2*a);
	x2 = (-b-s)/(2*a);
	if(b*b - 4 * a * c > 0) 
		cout << "Two different roots" << "\t" << "x1= " << x1 << ", " << "x2=" << x2;
	else if(b*b - 4 * a * c == 0)
		cout << "Two same roots" << "\t" << "x=" << x1;
	else if(b*b - 4 * a * c < 0)
		cout << "No real root";
	return 0;
} 
