#include <iostream>
using namespace std;
class Calculator{
	public:
	int A,B;
	float div; 
	void getData(){
		cout<<"\n Enter the value of A and B :";
		cin>>A>>B;
	}
	void shwData(){
		cout<<"\n Addition = "<<A+B;
		cout<<"\n Substration = "<<A-B;
		cout<<"\n Multiplication = "<<A*B;
		cout<<"\n Division = "<<A/B;
		cout<<"\n Modulo(Reminder) = "<<A%B;
	}
};
main(){
	Calculator p1;
	p1.getData();
	p1.shwData();
}
