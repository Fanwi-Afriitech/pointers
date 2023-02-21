#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class students{
	private:
	int schid;
	string sname;
	public:
	void insert(){
	cout<<"\nenter your name ";
	cin>>sname;
	cout<<"\nenter your school id ";
	cin>>schid;
		
	}
	
	void display(){
		cout<<sname<<"\t";
		cout<<schid;
	}
};
int main() {
	students s1;
	s1.insert();
	s1.display();
	
	students *s3=new students();
	s3->insert();
	s3->display();
}
/*int main() {
	string x="a,b,c";
	string *y=&x;
	
	cout<<"\nthe content of x is "<<x<< "\n";
	cout<<"the content of *y is "<<*y;
}*/