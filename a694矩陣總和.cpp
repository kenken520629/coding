#include <iostream>
#include <vector>
using namespace std;
int main() {
	int i , j , n , m , sum; 
	int x1 , y1 , x2 , y2;
	
	while(cin >> n >> m){
		vector<vector<int> > a(n+1, vector<int>(n+1, 0));
		vector<vector<int> > pre(n+1, vector<int>(n+1, 0));
		for(i = 1 ; i <= n ; i++){
			for(j = 1 ; j <= n ; j++){
				cin >> a[i][j];
				pre[i][j] = pre[i-1][j] + pre[i][j-1] + a[i][j] - pre[i-1][j-1];
			}
		}	
				while(m--){
					cin >> x1 >> y1 >> x2 >> y2;
					sum = pre[x2][y2]  - pre[x1-1][y2] - pre[x2][y1-1] + pre[x1-1][y1-1];			
					cout << sum << "\n";
				}	
	}
		
	return 0;
}
