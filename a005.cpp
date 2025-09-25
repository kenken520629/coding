#include <iostream>
using namespace std;
int main() {
    int n = 4 , i , d , s , t , g;
    int a[n] = {};
    
	cin >> t;
	for(g = 0 ; g < t; g++ ){
		for(i = 0; i < 4 ;i++)
    	cin >> a[i];
	
	if((a[1]-a[0]==a[2]-a[1]) && (a[3]-a[2]==a[2]-a[1])){
		d = a[3]*2 - a[2];
		cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << d << endl; 
	}
	else if((a[1]/a[0]==a[2]/a[1]) && (a[3]/a[2]==a[2]/a[1])){
		s = a[3]*a[3]/a[2];
		cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << s << endl;
	}
	}	
	return 0;
}
