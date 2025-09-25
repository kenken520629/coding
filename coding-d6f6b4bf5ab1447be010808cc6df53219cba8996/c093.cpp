#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main() {
    int i , j , t;
    cin >> i >> j;
    t = abs(i - j);
    vector<int> v(t + 1);
    vector<int> l(t + 1);
	cout << i << " " << j << " ";

	for(int n = 0;n < j - i;n++){
		v[n] = t + n;
label:
   		if(v[n] == 1)
        	goto end;
    	else if(v[n] % 2 ==1)
    		v[n] = 3 * v[n] + 1;
  	 	else
  	 		v[n] = v[n] / 2;
    	   
		l[n] += 1;
      	goto label;}
end:
		
	int max = *max_element(l.begin(), l.end());
	cout << max+1;
	
        return 0;
}
