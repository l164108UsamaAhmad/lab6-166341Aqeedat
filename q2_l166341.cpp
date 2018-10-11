#include<iostream>
#include<string>
using namespace std;

struct student{   //struct type
	string firstName;
	string lastName;
	string RollNo;
	double  cgpa;
};
bool exists(student* arr, int size, string RollNo);
void inputStudentFromUser(student* arr, int size);

int main()
{

student name1; 
student name2;




student *arr=new student[3];
inputStudentFromUser(arr,3);

     system("pause");
}



void inputStudentFromUser(student* arr, int size)
{
	
	for(int i=0;i<size;i++)
	{
		cout<<"Enter first name of the student  "<<i+1<<endl;
        getline(cin,arr[i].firstName);

       cout<<"Enter second name of the  student  "<<i+1<<endl;
       getline(cin,arr[i].lastName);


       cout<<"Enter roll number of  student"<<i+1<<endl;
       getline(cin,arr[i].RollNo);

	  bool check;
	check=exists(arr,i,arr[i].RollNo);
	int temp = i;
	if(check==true)
	{
		 string num;
		 num = arr[i].RollNo;
		 
		 while(arr[1].RollNo!=num ||arr[2].RollNo!=num || arr[3].RollNo!=num || arr[4].RollNo!=num || arr[5].RollNo!=num|| arr[6].RollNo!=num || arr[7].RollNo!=num ||  arr[8].RollNo!=num || arr[9].RollNo!=num || arr[10].RollNo!=num)
		 {
		cout<<"This  RollNo  already exists"<<endl<<" Please enter the correct Roll No again"<<endl;
		 getline(cin,arr[i].RollNo);
		
		i=i-1;
		 }

	   
     
       cin.ignore();
	}

	}
}
bool exists(student* arr, int size, string RollNo)
{

	for(int i=0;i<size;i++)
	{
		if(arr[i].RollNo==RollNo)
		{
			
			return true;
		}
		else
		{
			return false;
		}
	
		}

}






