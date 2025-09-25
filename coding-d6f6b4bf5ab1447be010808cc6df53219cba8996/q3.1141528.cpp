#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	float a , total , x , s[3] = {};

	cout << "Enter check value: ";
	cin >> a;
	total = a * (1 + 0.095 + 0.2);
	x = total / 9.0;
	cout << "Total check after tax and tip: " << fixed << setprecision(2) << total << endl;
	s[0] = x * (2 + 0.75 * 2);
	s[1] = x * (2 + 0.75);
	s[2] = x * (2 + 0.75);	
		for(int i = 0;i < 3;i++){		
			cout << "Family" << " " << i+1 << " " << "pays: " << s[i] << endl;
		}
		
	return 0;
}
 
