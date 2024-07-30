//it is about functions topic majorly void function without return type
#include <iostream>
using namespace std;
void comparestuff(){
    cout<<"print the result";
}
int main() {
    comparestuff();

    return 0;
}

//this code about functions with return type
#include <iostream>
using namespace std;
int sum(int a,int b){
    int c;
    c=a+b;
    return c;
}
int main() {
    int a,b;
    int add_sum;
    a=5;
    b=3;
    add_sum=sum( a, b);
    cout<<add_sum;

    return 0;
}
