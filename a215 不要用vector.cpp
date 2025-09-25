#include <iostream>
using namespace std;

int main (){
	int n , m;
	while(cin >> n >> m){
		int g = 0 , sum = 0;
		while(true){ 
			sum += n;
			n++;
			g++; 	
			if(sum > m){
				cout << g << endl;
				break;
	 		}
		}
	} 
	return 0;
} 
