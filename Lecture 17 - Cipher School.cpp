//this lecture gives idea about how paramters works and execution of function through main function
#include<iostream>
using namespace std;
void printHello(){
	cout<<"hi";
	return;

}
int sum(int a,int b){
	int c;
	c=a+b;


	cout<<"the value of c is "<<c<<endl;
	return c;
}
int main(){
	printHello();
	int a;
	int b;
	int c;
	a=4;
	b=6;

	int d;
	d=sum(a,b);
	cout<<"the value sum function"<<c<<endl;

}
