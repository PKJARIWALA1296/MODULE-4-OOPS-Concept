/*Write a program to calculate the area of circle, rectangle and triangle using Function Overloading.*/
#include<iostream>
using namespace std;
class shape{
	public:
		void area(double radius){
			float cirarea;
			cout<<"Enter the value of Radius ="<<endl;
			cin>>radius;
			cirarea=(float)3.14*radius*radius;
			cout<<"Area of Circle ="<<cirarea;
		}
		void area(int base, double height){
			float rectarea;
			cout<<"Enter the value of base and height ="<<endl;
			cin>>base>>height;
			rectarea =base*height;
			cout<<"Area of Rectangle ="<<rectarea;
		}
		void area(double height,int base){
			float triarea;
			cout<<"Enter the value of height and base ="<<endl;
			cin>>height>>base;
			triarea=(float)0.5*base*height;
			cout<<"Area of Traingle ="<<triarea;
		}
};
int main(){
	int base;
	double radius,height;
	shape s1;
	s1.area(radius);
	cout<<endl;
	s1.area(base,height);
	cout<<endl;
	s1.area(height,base);
	return 0;
}
