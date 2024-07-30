this code gives idea about implementation of functions 
#include <iostream>
using namespace std;
 int compare(int a){
     if(a==5){
         return 1000;
     }
     return 0;
 } 
int main() {
    int a;
    int result;
    cin>>a;
result=compare(a);
cout<<result;
    return 0;
}
