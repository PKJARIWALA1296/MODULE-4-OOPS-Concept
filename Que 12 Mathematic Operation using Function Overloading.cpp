/*Write a program to Mathematic operation like Addition, Subtraction, Multiplication, 
  Division Of two number using different parameters and Function Overloading.*/
  #include <iostream>
  using namespace std;
  class Mathematic{
  	public:
  		void operation(int a,int b){
  			int add;
  			add=a+b;
  			cout<<"Addition of Two Number = "<<add<<endl;
		  }
		void operation(double a,int b){
			int sub;
			sub=a-b;
  			cout<<"Subtraction of Two Number = "<<sub<<endl;
		}
		void operation(int a,double b){
			float mul;
			mul=(float)a*b;
  			cout<<"Multiplication of Two Number = "<<mul<<endl;
		} 
		void operation(double a, double b){
			float div;
			div=(float)a/b;
  			cout<<"Division of Two Number = "<<div<<endl;
		}
  };
  int main(){
  	int a,b;
  	Mathematic obj;
  	obj.operation(30,40);
  	cout<<"* * * * * * * * * * * * * * * * * * * * * * * * "<<endl;
  	obj.operation(45.0,15);
  	cout<<"* * * * * * * * * * * * * * * * * * * * * * * * "<<endl;
  	obj.operation(12,5.0);
  	cout<<"* * * * * * * * * * * * * * * * * * * * * * * * "<<endl;
  	obj.operation(85.0,7.0);
  	return 0;
  } 
