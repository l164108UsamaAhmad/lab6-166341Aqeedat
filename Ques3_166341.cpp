# include<iostream>
#include<string>

using namespace std;

struct student
{
	string firstname;
	char arr[200];                         //struct student
	string lastname;
	double cgpa;
	string roll;
	void printinfo()               //print function
	{
		cout << firstname << endl;
		cout << lastname << endl;
		cout << roll << endl;
		cout << cgpa << endl;
	}

};

void inputStudentFromUser(student* arr, int size);

void avgCgpa(student* arr, int size);
//function for searching students by roll number 
void searchStudent(student* arr, int size, string Roll);

//function for finding min cgpa amounf=g the entered ones
student minCgpa(student* arr, int size);


//function for finding min cgpa amounf=g the entered ones
student maxCgpa(student* arr, int size);

int main()
{
	student str, str1;
	student *array = nullptr;
	array = new student[20];//dynamic array 
	int size;
	cout << " enter size of an array  : ";
	cin >> size;

	inputStudentFromUser(array, size);                //inputing data fun

	avgCgpa(array, size);                            //finding average cgpa
	for (int i = 0; i < size; i++)
	{
		cout << "    " << "student info of   " << i + 1 << "  student" << endl;
		array[i].printinfo();
		cout << endl;                            //print info of students
	}
	string R_num;

	cout << " enter roll num to find information   : ";

	cin.ignore();

	getline(cin, R_num);                        //enter roll for searcing data
	searchStudent(array, size, R_num);


	student t = minCgpa(array, size);                  //function of min 

	cout << " minimum cgpa among all students = " << endl;

	t.printinfo();
	student ma = maxCgpa(array, size);          // function of max 

	cout << " maximum cgpa among all students = " << endl;


	ma.printinfo();                          //print data 
	system("pause");
	return 0;
}


void inputStudentFromUser(student* arr, int size)
{
	//first taking 1 input outside a loop 
	cout << " enter first elements of student : " << endl;
	cout << " enter first name : " << endl;
	cin >> arr[0].firstname;
	cout << " enter last name  of student :" << endl;
	cin >> arr[0].lastname;
	cout << " enter roll no  of student :" << endl;
	cin >> arr[0].roll;
	cout << " enter cgpa  of student : " << endl;
	cin >> arr[0].cgpa;

	for (int i = 1; i < size; i++)
	{
		int temp = i;
		cout << " enter " << i + 1 << " elements = " << endl;              //input other elements
		cout << " enter first name  of student : " << endl;
		cin >> arr[i].firstname;
		cout << " enter last name  of student :" << endl;
		cin >> arr[i].lastname;
		cout << " enter roll no  of student :" << endl;
		cin >> arr[i].roll;
		cout << " enter cgpa  of student : " << endl;
		cin >> arr[i].cgpa;

	}



}
//fun for calculationg avg cgpa
void avgCgpa(student* arr, int size)
{
	double avg = 0;
	double	sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + arr[i].cgpa;
	}
	avg = sum / size;
	cout << " average of  cgpa of entered students :  ";
	cout << avg << endl;
}
//function for searching students by roll number 
void searchStudent(student* arr, int size, string Roll)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i].roll == Roll)
		{
			cout << "  data of required Rollnumber " << endl << endl;
			arr[i].printinfo();//fun for printing info of the entered roll num student 
		}

	}
}
//function for finding min cgpa amounf=g the entered ones
student minCgpa(student* arr, int size)
{
	int min = 0;
	int pos = 0;
	for (int i = 0; i < size; i++)
	{
		if (min < arr[i].cgpa)//finding min cgpa
		{
			pos = i;
		}
	}
	return arr[pos];
}

//function for finding min cgpa amounf=g the entered ones
student maxCgpa(student* arr, int size)
{
	int max = 0;
	int pos = 0;
	for (int i = 0; i < size; i++)
	{
		if (max > arr[i].cgpa)//finding max cgpa
		{
			pos = i;
		}
	}
	return arr[pos];


}