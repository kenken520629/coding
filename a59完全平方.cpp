#include <iostream>
using namespace std;

int main (){
	int a , b , n , i , j;
		
	while(cin >> n){
		for(i = 1 ; i <= n ; i++ ){
			cin >> a >> b;
			int sum = 0; 
			for(j = 0 ; j < b ; j++){
				if( j*j >= a && j*j <= b ){
				sum = sum + j*j;
				}
			}
		cout << "Case" << " " << i << ": " << sum << endl;	
		}			
	}
	
	return 0;
} 
