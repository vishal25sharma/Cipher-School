#include <iostream>
using namespace std;
int main() {
   int password;
   cout<<"Enter the password: "<<endl;
   cin>>password;
   while(password<999999){
       cout<<"this password doesn't meeet required condition,so try again"<<endl;
       cin>>password;
   }
cout<<"entered password os correct";
    return 0;
}

//example for infinite while loop
#include <iostream>
using namespace std;
int main() {
    int count=0;
while(1){
    cout<<"chocolate"<<" ";
    count++;
    if(count>100){
        break;
    }
}
    return 0;
}
