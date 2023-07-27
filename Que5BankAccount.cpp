#include<iostream>
#include<string.h>
using namespace std;
class BankAccount{
	public:
	char Dname[500],Tacc[50];
	int AccNum,balance,damt,Wamt;
	void getData(){
		cout<<"\n Enter the Name of Depositor:";
		cin>>Dname;
		cout<<"\n Enter the Depositor's Account No.:";
		cin>>AccNum;
		cout<<"\n Enter the Type of Account - Saving Account Or Current Account :";
		cin>>Tacc;
		cout<<"\n Enter the Balance Amount :";
		cin>>balance;
	}
	void showData(){
		cout<<"\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * *";
		cout<<"\n Name of Depositor="<<Dname<<"\t Account No.="<<AccNum;
		cout<<endl;
		cout<<"\n Type of Account="<<Tacc<<"\t         Balance Amount="<<balance;
		cout<<"\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * *";
	}
	void member(){
		cout<<endl;
		cout<<"\n Enter Deposit Amount=";
		cin>>damt;
		cout<<"\n Account Balance Amount="<<balance+damt;
		cout<<endl;
		cout<<"\n Enter Withdrawal Amount after Showing Account Balance=";
		cin>>Wamt;
		cout<<endl;
		cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *";
		cout<<"\n Name of Account Holder => "<<Dname<<"\t  Account Balance => "<<(balance+damt)-Wamt;
	}
};
main(){
	BankAccount b1;
	b1.getData();
	b1.showData();
	b1.damt;
	b1.Wamt;
	b1.member();	
}
