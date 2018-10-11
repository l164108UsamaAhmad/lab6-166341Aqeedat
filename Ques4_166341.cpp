#include<iostream>
#include<string>
using namespace std;

struct student
{
	string firstName;
	string lastName;
	string rollNo;
	double cgpa;
	string subjects[5]; //addittion of this string arr
	void printStudent()
	{
		cout << "First Name : " << firstName << endl;
		cout << "Last Name:  " << lastName << endl;
		cout << "Roll Number:  " << rollNo << endl;
		cout << "CGPA:  " << cgpa << endl << endl;

	}
};

//Functions
void getinput(student& info);
bool ComparisonWithArrays(student st1, student st2);
int main()
{
	student s1, s2;
	cout << "Student1 information :  ";
	getinput(s1);
	cout << "Student2 information  :   ";
	getinput(s2);

	if (ComparisonWithArrays(s1, s2) == true)//check for comparing students 
	{
		cout << "SAME STUDENTS    ";
	}
	else
	{
		cout << "DIFFERENT STUDENTS    ";

	}
	system("pause");
}


void getinput(student& info)
{
	cout << "Enter First Name:  ";
	getline(cin, info.firstName);

	cout << "Enter Last Name:  ";
	getline(cin, info.lastName);

	cout << "Enter Roll Number:  ";
	getline(cin, info.rollNo);

	cout << "Enter CGPA   ";
	cin >> info.cgpa;

	cout << "Enter subject names : ";
	cin.ignore();
	for (int i = 0; i < 5; i++)
	{
		cout << "SUBJECT #" << i + 1 << ":  ";
		cin.ignore();
		getline(cin, info.subjects[i]);//subject input in an array 
	}
	cin.ignore();
	cout << endl;

}
bool ComparisonWithArrays(student st1, student st2)//fun for comparing  informations of students 
{
	int count = 0;
	if (st1.firstName == st2.firstName && st1.lastName == st2.lastName && st1.rollNo == st2.rollNo && st1.cgpa == st2.cgpa)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (st1.subjects[i] == st2.subjects[j])//all enteries of s1 is equal to s2
				{
					count++;
					break;
				}
			}
		}
		if (count == 5)
		{
			return true;//if yes 
		}
		else
		{
			return false;
		}
	}
	else
		return false;
}


