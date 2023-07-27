//Write a Program of Two 1D Matrix Addition using Operator Overloading.
#include<iostream>
using namespace std;
class Matrix{
	public:
		int a[2][2],add[2][2];
		void getmatrix(){
			for(int i=0;i<2;i++){
				for(int j=0;j<2;j++){
					cin>>a[i][j];
				}
			}
		}
		void operator +(Matrix b){
			for(int i=0;i<2;i++){
				for(int j=0;j<2;j++){
					add[i][j]=a[i][j]+b.a[i][j];
					cout<<add[i][j];
					cout<<" ";
				}
				cout<<endl;
			}
		}
};
int main(){
	Matrix r,s;
	cout<<"Enter Four Elements of First Matrix"<<endl;
	r.getmatrix();
	cout<<"Enter Four Elements of Second Matrix"<<endl;
	s.getmatrix();
	cout<<"* * * * * * * * * * * * * * * * * * * *"<<endl;
	cout<<"Addition of Two Matrices"<<endl;
	r+s;
	return 0;
}
