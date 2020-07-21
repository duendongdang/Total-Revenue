#include <iostream>
#include <string>
using namespace std;
int main()
{
	string Name, Surname ;
	float Salary ;
	float Sale ;
	float Commission ;

	cout << "Enter name :" ;
	cin >> Name ;
	cout << "Enter Surname :" ;
	cin >> Surname ;
	cout << "Enter Salary :" ;
	cin >> Salary;
	cout << "Enter Sale :" ;	
	cin >> Sale;
	cout << "Enter Commission :" ;	
	cin >> Commission;
	//****output******
	cout << "Name : " << Name << "\t"<< Surname << endl;
	cout << "Total Revenue = " <<((Sale * Commission)/100 + Salary) << " Bath " << endl;
	

	system("pause");
	return(0);

}