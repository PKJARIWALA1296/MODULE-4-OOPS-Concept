//Write a program of Addition, Subtraction, Division, Multiplication using constructor.
#include<iostream>
using namespace std;
class calculalator{
	private:
		int a,b;
	public:
		calculalator(int x,int y){
			a=x;
			b=y;	
		}
		void add(){
			int sum;
			sum = a+b;
			cout<<"Addition = "<<sum;
			cout<<endl;
		}
		void sub(){
			int sub;
			sub=a-b;
			cout<<"Subtraction = "<<sub;
			cout<<endl;
		}
		void div(){
			int div;
			div=a/b;
			cout<<"Division = "<<div;
			cout<<endl;
		}
		void mul(){
			int mul;
			mul=a*b;
			cout<<"Multiplication = "<<mul;
		}
};
int main(){
	calculalator obj(12,5);
	obj.add();
	obj.sub();
	obj.div();
	obj.mul();
	return 0;
}
