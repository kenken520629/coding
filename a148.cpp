#include <iostream>
#include <vector>
using namespace std;
int main (){
	
	int i , n;
	
	while(cin >> n){
		double sum = 0;
		vector<int> v(n);
		for(i = 0 ; i < n ; i++){
		cin >> v[i] ;
		sum += v[i];
		}
		if(sum / n <= 59) 
			cout << "yes\n";
		else
			cout << "no\n";
	}		
		
	return 0;
} 
