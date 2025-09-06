#include <iostream>
using namespace std;
int main(){
    int m,d,s;
    cin>>m>>d;
    s=(m*2+d)%3;
    if(s==0)
        cout<<"普通"<<endl;
    if(s==1)
        cout<<"吉"<<endl;
    if(s==2)
        cout<<"大吉"<<endl;
    return 0;
}
