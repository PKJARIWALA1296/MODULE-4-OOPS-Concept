/*Create a class person having members name and age. Derive a class student having member percentage.
 Derive another class teacher having member salary.Write necessary member function to initialize, 
 read and write data. Write also Main function (Multiple Inheritance)*/
 #include<iostream>
 using namespace std;
 class student {
 	 public:
 	 	int math,sci,eng,total;
 	 	float percent;
 	 	void getmark(){
			cout<<"Enter the Maths Mark (out of 100) :"<<endl;
			cin>>math;
			cout<<"Enter the Science Mark (out of 100) :"<<endl;
			cin>>sci;
			cout<<"Enter the English Mark (out of 100) :"<<endl;
			cin>>eng;
			total =math+sci+eng;
			percent=(float)total/3;
		}
		void displaymark(){
			cout<<"Maths    = "<<math<<endl;
			cout<<"Science  = "<<sci<<endl;
			cout<<"English  = "<<eng<<endl;
			cout<<"Total Mark Obtain Out of 300 = "<<total<<endl;
			cout<<"Percentage = "<<percent;
		}
 };
 class teacher{
 	public:
 		int salary;
 		void getsalary(){
 			cout<<"Enter the Teacher Salary :"<<endl;
 			cin>>salary;
		 }
		void displaysalary(){
			cout<<"Teacher Salary ="<<salary<<endl;
		}
 };
 class person : public student,public teacher{
 	public:
 		string name;
 		int age;
 		void getinfo(){
 			cout<<"Enter the name :"<<endl;
 			cin>>name;
 			cout<<"Enter the age :"<<endl;
 			cin>>age;
		 }
		void displayinfo(){
			cout<<"Student/Teacher Name = "<<name<<endl;
			cout<<"Student/Teacher Age = "<<age<<endl;	
		}
 };
 int main(){
 	person obj;
 	cout<<"* * * * * For Student * * * * *"<<endl;
 	obj.getinfo();
 	obj.getmark();
 	cout<<"* * * * * Display Student Detail * * * * *"<<endl;
 	obj.displayinfo();
 	obj.displaymark();
 	cout<<endl;
 	cout<<endl;
 	cout<<"* * * * * For Teacher * * * * *"<<endl;
 	obj.getinfo();
 	obj.getsalary();
 	cout<<endl;
 	cout<<endl;
 	cout<<"* * * * * Display Teacher Detail * * * * *"<<endl;
 	obj.displayinfo();
 	obj.displaysalary();
 	return 0;
 }
