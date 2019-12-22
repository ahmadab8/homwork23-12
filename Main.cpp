
#include "WorkingStudent.h"

int main(){

Person **arr;
int size, age, average;
char institute[10], word[10];
float salary;
char typ, name[10];
long id;
cout << "enter the size of the arr" << endl;
cin >> size;
arr = new Person*[size];


for (int i = 0;i < size;i++)
{
	cout << "Person number : " << i + 1 << endl;
	cout << "for Person enter p ,for Employee enter e , for Student enter s , for WorkingStudint enter w" << endl;
	cin >> typ;
	while (typ != 'p'&&typ != 'e'&&typ != 's'&&typ != 'w')
	{
		cout << "error please try again!!!!" << endl;
		cin >> typ;
	}
	cout << "Enter name" << endl;
	cin >> name;
	cout << "Enter id" << endl;
	cin >> id;
	cout << "enter age" << endl;
	cin >> age;
	if (typ == 'p')
		arr[i] = new Person(name, id, age);

	if (typ == 'e') {
		cout << "enter salary" << endl;
		cin >> salary;
		arr[i] = new Employee(name, id, age, salary);

	}

	if (typ == 's') {
		cout << "enter average" << endl;
		cin >> average;
		cout << "enter institute" << endl;
		cin >> institute;
		arr[i] = new Student(name, id, age, average, institute);

	}

	if (typ == 'w') {
		cout << "enter salary" << endl;
		cin >> salary;
		cout << "enter average" << endl;
		cin >> average;
		cout << "enter institute" << endl;
		cin >> institute;
		cout << "enter yes if same_institute else any string " << endl;
		cin >> word;
		if (word == "yes")
			arr[i] = new WorkingStudent(name, id, age, average, institute, salary, true);
		else
			arr[i] = new WorkingStudent(name, id, age, average, institute, salary, false);


	}
}
	for (int i = 0;i <size;i++)
		cout <<"person number "<<i+1<< " is : "<<typeid(*arr[i]).name() << '\n';

	system("pause");
	return 0;

}