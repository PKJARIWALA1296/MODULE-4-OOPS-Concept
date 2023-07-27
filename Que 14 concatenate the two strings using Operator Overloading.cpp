//WAP to concatenate the two strings using Operator Overloading.
#include<iostream>
using namespace std;
class demo{
	public:
		string str1,constr;
		void getstring(){
			cin>>str1;			
		}
		void operator +(demo b){
			constr = str1 + b.str1;
			cout<<constr;
		}
};
int main(){
	demo p,q;
	cout<<"Enter First String : "<<endl;
	p.getstring();
	cout<<"Enter Second String : "<<endl;
	q.getstring();
	cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
	cout<<"Concatenate the two strings = ";
	p+q;
	return 0;
}

