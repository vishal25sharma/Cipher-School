#include <iostream>
using namespace std;
int main() {
    int a,b,c,d;
    cout<<"Input four integers a,b,c and d: "<<endl;
    cin>>a>>b>>c>>d;
    // cout<<(a>b && c>d);
    
    cout<<(a>b || c>d);
    return 0;
    // C++ interprets true as 1
    // C++ interprets false as 0
}