//Write a program to swap the two numbers using friend function without using third variable.
#include<iostream>
using namespace std;
class demo{
	private:
		int a,b;
		public:
			void getinfo(){
				cout<<"Enter the two value A and B :"<<endl;
				cin>>a>>b;	
			}
		friend void swapping(demo d);
};
void swapping(demo d){
	d.a=d.a+d.b;
	d.b=d.a-d.b;
	d.a=d.a-d.b;
	cout<<"After Swapping Value A = "<<d.a;cout<<"  B = "<<d.b;
}
int main(){
	demo w;
	w.getinfo();
	cout<<endl;
	swapping(w);
	return 0;
}
