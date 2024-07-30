//this lecture helps to understand call by value and call by reference concept with code
#include<iostream>
using namespace std;
void printHello(){
	cout<<"hi"<<endl;
	return;

}
int sum(int a,int b){
	int c;
	c=a+b;


	cout<<"the value of c is "<<c<<endl;
	return c;
}
void swapfunc(int &a,int &b){
	int c;
	c=a;
	a=b;
	b=c;
	cout<<a<<" "<<b<<endl;
	return;
}
void fun(int &a,int b){
	a=9999;
	b=9999;
	cout<<"the func return value of a and b "<<a<<" "<<b<<endl;
	return;
}
int main(){
	printHello();
	int a;
	int b;
	int c;
	a=4;
	b=6;
	swapfunc(a,b);
	fun(a,b);
	cout<<a<<" "<<b<<endl;
	// int d;
	// d=sum(a,b);
	// cout<<"the value sum function"<<c<<endl;

}
