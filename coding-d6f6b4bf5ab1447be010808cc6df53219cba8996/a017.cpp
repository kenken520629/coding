#include <iostream>
using namespace std;
int main() {
	int t , s , i , j;
	while(cin >> t >> s){
	int a[t][s] = {} , b[s][t] = {};
	for(i = 0; i < t; i++){
		for(j = 0; j < s; j++){
			cin >> a[i][j]; 
			b[j][i] = a[i][j] ; 
		}	
	}
	for(i = 0; i < s; i++){
		cout << "\n";
		for(j = 0; j < t; j++){
			cout << b[i][j] << " "; 
		}	
	}
	}
	return 0;	
}

