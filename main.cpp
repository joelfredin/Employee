#include<iostream>
#include"Employee.h"
#include"FulltimeEmployee.h"
#include"ContractEmployee.h"
#include"EngineeringEmployee.h"

using std::cout;
using std::endl;


void display_total_salary(const Employee& emp_ref)
{
    cout << emp_ref.get_total_salary() << endl;
    cout << "------------------------------" << endl;
}


int main()
{
    Employee emp_joam{"parttime", "Joan", 20000};
    FulltimeEmployee emp_janice{"Janice", 50000, 5.5};
    ContractEmployee emp_terence{"Terence", 60000, 10, 200};
    EngineeringEmployee emp_nina{"Nina", 70000, 10, 30, 500};

    //Employee& joam_ref{emp_joam};
    //Employee& janice_ref{emp_janice};
    //Employee& terence_ref{emp_terence};

    cout << "------ Employee -----" << endl;
    display_total_salary(emp_joam);
    
    cout << "------ FulltimeEmployee -----" << endl;
    display_total_salary(emp_janice);

    cout << "------ ContractEmployee -----" << endl;
    display_total_salary(emp_terence);

    cout << "------ EngineeringEmployee -----" << endl;
    display_total_salary(emp_nina);

    return 0;
}
