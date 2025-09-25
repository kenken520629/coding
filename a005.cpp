#include <iostream>
using namespace std;
int main() {
    int a , b, c , d , i , s;
    cin >> i;
    cin >> a >> b >> c >> d;
    if(d-c==c-b && c-b==b-a){
        s=d+d-c;    
        cout << a << b << c << d  << s << endl;}
    return 0;
    }