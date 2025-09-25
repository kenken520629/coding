#include <iostream>
#include <vector>
using namespace std;

int main (){
	int n , m;
	vector<int> v;
	
	while(cin >> n >> m){
		int sum = 0;
		v.push_back(n);
		if(sum == m){
			cout << 0;
			continue;
		}
		while(sum <= m){
			v.push_back(n + 1);
			n += 1;
			sum = 0;
			for(int i = 0 ; i < v.size() ; i++){ 
				sum += v[i];
			}	
			if(sum > m)
				cout << v.size() << endl;	
		}
		v.clear();	
	}
	
	return 0;
} 
