#include <iostream>
using namespace std;

int main () {
	double a , b;
	int t;
	cout << "Enter the purchase amount: ";
	cin >> a;
	cout << "Enter the cash amount:"; 
	cin >> b;
	cout << "Change: \n";
	
	t = (b - a) * 100 + 0.5;	      //t = 1953 , t = 732
		cout << t / 100 << " " << "dollars\n";
	t = t % 100;     	  			  //t = 53   , t = 32
		cout << t / 25 << " " << "quarters\n";
	t = t % 25;     			      //t = 3    , t = 7
		cout << t / 10 << " " << "dimes\n";
	t = t % 10;     				  //t = 3    , t = 7
		cout << t / 5 << " " << "nickels\n";
	t = t % 5;	     				  //t = 3    , t = 2
		cout << t / 1 << " " << "pennies\n"; 	
		
	return 0;
}
