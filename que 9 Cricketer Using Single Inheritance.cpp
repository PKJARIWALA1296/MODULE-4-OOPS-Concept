/*Assume a class cricketer is declared. Declare a derived class batsman from cricketer.
 Data member of batsman. Total runs, Average runs and best performance. 
 Member functions input data, calculate average runs, Display data. (Single Inheritance)*/
 #include<iostream>
 using namespace std;
 class cricketer{
 	public:
 	string name;
 	int best;
 	void data(){
 		cout<<"Enter Cricketer Name :"<<endl;
 		cin>>name;
 		cout<<"Enter Cricker Best Score :"<<endl;
 		cin>>best;	
	}
	void displaydata(){
		cout<<"Cricketer Name = "<<name<<endl;
		cout<<"Cricketer's Best Score ="<<best<<endl;
	}
 };
 class batsman : public cricketer{
 	public :
 	int innings,totalrun;
 	float avg;
 	void getdata(){
 		cout<<"innings :"<<endl;
 		cin>>innings;
 		cout<<"totalrun :"<<endl;
 		cin>>totalrun;
 		avg=(float)totalrun/innings;
	 }
	 void displayruns(){
	 	cout<<"Cricketer's Total inning Played = "<<innings<<endl;
	 	cout<<"Cricketer's career Total Score = "<<totalrun<<endl;
	 	cout<<"Cricketer's Average ="<<avg<<endl;
	 }
 }; 
 int main(){
 	batsman obj;
 	obj.data();
 	obj.getdata();
 	cout<<endl;
 	cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
 	cout<<endl;
 	obj.displaydata();
 	obj.displayruns();
 	return 0;
 }
  
