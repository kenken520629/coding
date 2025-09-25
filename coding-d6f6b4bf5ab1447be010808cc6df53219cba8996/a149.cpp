#include <iostream>
#include <vector>
using namespace std;

int main () {
	int n , x;
	vector<int> v;
	cin >> n;
	
	while(n--){
		int sum ;
		sum = 1; 
		cin >> x;
		if(x == 0){
			sum = 0;
			cout << sum << endl;
			continue;
		}	
		while(x > 0){
		
		v.push_back(x % 10);
		x /= 10;
		}
		for(int i = 0 ; i < v.size(); i++){
			sum *= v[i];
		}
		cout << sum << endl;
		v.clear();  
	}

	return 0;
} 
