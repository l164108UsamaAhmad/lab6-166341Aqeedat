#include<iostream>
#include<string>
using namespace std;

struct student{   //struct type
	string firstName;
	string lastName;
	string RollNo;
	double  cgpa;
};
void info(student &name1,student &name2); //function for inputing data
bool Comparison(student name1, student name2); //function for comnparing two students 
int main()
{

student name1; 
student name2;

info(name1,name2);
bool find=Comparison(name1,name2);
if(find=true) //check for true condition 
{
	cout<<"first and seond  students are same "<<endl;
}
else
{
	cout<<"first and seond  students are not same "<<endl;
}


system("pause");
}

void info(student &name1,student &name2)
{

	cout<<"************SECOND STUDENT ***************"<<endl<<endl;
cout<<"Enter first name of the first student  "<<endl;
getline(cin,name1.firstName);

cout<<"Enter second name of the first student  "<<endl;
getline(cin,name1.lastName);

cout<<"Enter roll number of first student"<<endl;
getline(cin,name1.RollNo);


cout<<"Enter cgpa of first student"<<endl;
cin>>name1.cgpa;
cin.ignore();

cout<<endl<<"************SECOND STUDENT ***************"<<endl;
cout<<"Enter first name of the second student  "<<endl;
getline(cin,name2.firstName);

cout<<"Enter second name of the second  student  "<<endl;
getline(cin,name2.lastName);

cout<<"Enter roll number of second  student"<<endl;
getline(cin,name2.RollNo);


cout<<"Enter cgpa of second  student"<<endl;
cin>>name1.cgpa;

cin.ignore();
}
bool Comparison(student name1, student name2)//function for comparing stdents
{
	if(name1.firstName==name2.firstName && name1.lastName==name2.lastName && name1.RollNo==name2.RollNo && name1.cgpa==name2.cgpa)//camparing students info
	{
		return true;
	}

	else

	{
		return false;
	}
}

