#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
label:
    if(n == 1)
        goto end;
    else if(n % 2 ==1)
        n = 3 * n + 1;
    else
        n = n / 2;
    cout << n << endl;
        goto label;
end:
    
        return 0;
}