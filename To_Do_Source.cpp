//preprocessor directives

#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;



int main()
{
	ofstream out;
	int task_amt, i, n;
	cout << "This is a To-Do list generator \nPlease enter the tasks number of task for today: " << endl;
	cin >> task_amt;
	string* tasks = new string[task_amt];
	for (i = 0; i < task_amt; i++)
	{
		cout << "Enter task name :" << endl;
		cin >> tasks[i];
	}
	out.open("test.txt");
	for (i = 0; i < task_amt; i++)
	{
		cout << tasks[i] << endl;
		out << tasks[i] << endl;
	}
	out.close();
	return 0;
}
// commit test