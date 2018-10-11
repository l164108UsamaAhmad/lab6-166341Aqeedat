#include<iostream>
#include<string>
using namespace std;

struct person
{
	string firstname, lastname, address;

};
struct student
{
	string rollNo;
	double cgpa;
	person information;
};


student* inputStudentFromUser(student* arr, int size);//fun for taking info of students 
void print(student*arr, int size);//for printing info that is entered
int main()
{
	student *Array;//pointer array 
	int size;

	cout << "Enter the size of array  " << endl;
	cin >> size;

	Array = new student[size];//dynamic array 

	Array = inputStudentFromUser(Array, size);//calling funtion of inputing info 
	print(Array, size);//calling fun of print data
	
	delete[]Array;//deallocation
	Array = nullptr;//assigning to null

	system("pause");
	return 0;
}


student* inputStudentFromUser(student* array, int size)
{
	array = new student[size];
	int temp = 0;
	bool check = false;
	for (int i = 0; i < size; i++)
	{
		
		cout << "Enter FirstName of Student " << i + 1 << endl;
		cin >> array[i].information.firstname;

		cout << "Enter lastName of Student " << i + 1 << endl;
		cin >> array[i].information.lastname;

		cout << "Enter Address  of Student " << i + 1 << endl;
		cin >> array[i].information.address;

		cout << "Enter rollNo of Student " << i + 1 << endl;
		cin >> array[i].rollNo;

		cout << "Enter cgpa of Student : " << i + 1 << endl;
		cin >> array[i].cgpa;
	}

	return array;
}

void print(student*arr, int size)//funtion for displaying info as entered by user
{
	cout << "******************Students Informatiom ***************" << endl << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Inforamtaion of Student : " << i + 1 << endl;//info printed through loop 

		cout << "First Name  :  " << arr[i].information.firstname << endl;
		cout << "Last Name  :  " << arr[i].information.lastname << endl;
		cout << "Address :  " << arr[i].information.address << endl;
		cout << "Roll Number :  " << arr[i].rollNo << endl;
		cout << "CGPA  : " << arr[i].cgpa << endl;
		cout << endl;
	}
}