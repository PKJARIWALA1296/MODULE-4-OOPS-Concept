/*Assume that the test results of a batch of students are stored in three different classes.
Class Students are storing the roll number. Class Test stores the marks obtained in two subjects and 
class result contains the total marks obtained in the test.The class result can inherit the details of 
the marks obtained in the test and roll number of students. (Multilevel Inheritance)*/
#include <iostream>
using namespace std;
class Students{
	public:
		int rollnumber;
		string name;
		void getinfo(){
			cout<<"Enter Roll No. :"<<endl;
			cin>>rollnumber;
			cout<<"Enter the Student Name :"<<endl;
			cin>>name;
		}
		void displayinfo(){
			cout<<"Student Roll No. = "<<rollnumber<<endl;
			cout<<"Student Name = "<<name<<endl;
		}
};
class Test : public Students{
	public:
	int math,sci;
	void getmark(){
		cout<<"Enter Maths Mark (out of 100) :"<<endl;
		cin>>math;
		cout<<"Enter the Science Mark (out of 100) :"<<endl;
		cin>>sci;
	}
	void displaymark(){
		cout<<"Maths = "<<math<<endl;
		cout<<"Science = "<<sci<<endl;
	}	
}; 
class result : public Test{
	public:
		int total;
		void totalobtain(){
			total=math+sci;
		}
		void displayobtain(){
			cout<<"Total marks obtained in the test = "<<total<<endl;
		}
}; 
int main(){
	result obj;
	obj.getinfo();
	obj.getmark();
	obj.totalobtain();
	cout<<endl;
	cout<<"* * * * * * * * * * * * * * * * *"<<endl;
	cout<<endl;
	obj.displayinfo();
	obj.displaymark();
	obj.displayobtain();
	return 0;
}
