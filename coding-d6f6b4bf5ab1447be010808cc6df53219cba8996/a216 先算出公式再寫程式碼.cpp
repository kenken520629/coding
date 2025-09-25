#include <iostream>
using namespace std;

int main (){
	int n;
	while(cin >> n){
		int f = 0;
		long long g = 0;
		f = n*(n+1)/2;
		for(int i = 1 ; i <= n; i++){
			g += i*(i+1)/2;   	
		}
		cout << f << " " << g << endl; 	
	}			
	return 0;
}
