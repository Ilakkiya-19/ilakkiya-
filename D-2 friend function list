#include <windows.h>
#include <iostream>

using namespace std;

class employee
{
	int   emp_number;
	char  emp_name[20];
	char emp_dept[10];
	char emp_desg[20];
	
	

	public:

		void get_emp_details();
		
		void show_emp_details();
};

void employee :: get_emp_details()
{
	cout<<"\nEnter employee number: ";
	cin>>emp_number;
	cout<<"\nEnter employee name: ";
	cin>>emp_name;
	cout<<"\nEnter employee department: ";
	cin>>emp_dept;
	cout<<"\nEnter employee designation: ";
	cin>>emp_desg;
	
}



void employee :: show_emp_details()
{
    cout<<"\nEmployee number    :  "<<emp_number;
	cout<<"\nEmployee Name      :  "<<emp_name;
	cout<<"\nDepartment       :  "<<emp_dept;
	cout<<"\nDesignation       :  "<<emp_desg;
}


int main()
{
    employee emp;
    
    emp.get_emp_details();
    emp.show_emp_details();

    return 0;
}
