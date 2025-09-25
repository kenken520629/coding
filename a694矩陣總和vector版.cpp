#include <iostream>
#include <vector> 
using namespace std;
int main() {
	int n , i , j , t , m , sum; 
	int x1 , y1 , x2 , y2; 
	int a[n][n] = {} , pre[n][n];
	
	for(i = 0 ; i < n;i++)
		pre[i][0] = 0;
	for(j = 0 ; j < n;j++)
		pre[0][j] = 0;
	
	while(cin >> n >> m){
		for(i = 1 ; i <= n ; i++){
			for(j = 1 ; j <= n ; j++){
				cin >> a[i][j];	
				pre[i][j] = pre[i-1][j] + pre[i][j-1] + a[i][j] - pre[i-1][i-1];
				cin >> x1 >> y1 >> x2 >> y2;
				sum = pre[x2][y2]-pre[x1-1][y2]-pre[x2][y1-1]+pre[1][1];
				cout << sum;
			}
		}	
	}
		
	return 0;
}
