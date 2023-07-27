//Write a program to find the max number from given two numbers using friend function.
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
		friend void findmax(demo d);
};
void findmax(demo d){
	if (d.a>d.b){
		cout<<"A is Largest."<<endl;
	}
	else{
		cout<<"B is Largest."<<endl;
	}
}
int main(){
	demo s;
	s.getinfo();
	cout<<endl;
	findmax(s);
	return 0;
}
