//Write a program to find the multiplication values and the cubic values using inline function.
#include<iostream>
using namespace std;
inline void multiplication(){
	int a,mul;
	cout<<"Enter the value of a :"<<endl;
	cin>>a;
	mul=a*a;
	cout<<"Multiplication(Square) of Given Number = "<<mul;
	cout<<endl;
	cout<<endl;
	cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
}
inline void cube(){
	int b,cube;
	cout<<"Enter the Value of b :"<<endl;
	cin>>b;
	cube=b*b*b;
	cout<<"Cube of the Given Number = "<<cube;
}
int main(){
	multiplication();
	cube();
	return 0;
}
