#include <iostream>
using namespace std;
int main (){
	int a , b , t=0 , i , j , k;
	cin >> j >> a >> b;
	
	for(k = 0;k < j;k++){
		for(i = 0; i <= 100; i++){
			if(i*i > a && b >> i*i){
			t += i*i;
			cout << t;
			}
			else if(i*i > b && a >> i*i){
			t += i*i;
			cout << t;
			}
		}
	}
	return 0;
	}
