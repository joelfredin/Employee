#include<iostream>
#include<memory>
#include"Employee.h"
#include"FulltimeEmployee.h"
#include"ContractEmployee.h"
#include"EngineeringEmployee.h"

using std::cout;
using std::endl;
using std::unique_ptr;


void display_total_salary(const Employee& emp_ref)
{
    cout << emp_ref.get_total_salary() << endl;
    cout << "------------------------------" << endl;
}


int main()
{
    Employee emp_joam{"parttime", "Joan", 20000};
    FulltimeEmployee emp_janice{"Janice", 50000, 5.5};
    FulltimeEmployee emp_sara{"Sara", 2300, 6.5};
    ContractEmployee emp_terence{"Terence", 60000, 10, 200};
    ContractEmployee emp_tosse{"Tosse", 3489, 13, 120};
    EngineeringEmployee emp_nina{"Nina", 70000, 10, 30, 500};
    EngineeringEmployee emp_joel{"Joel", 50056, 15, 20, 600};

    //Employee& joam_ref{emp_joam};
    //Employee& janice_ref{emp_janice};
    //Employee& terence_ref{emp_terence};

    Employee* emp_joan = new FulltimeEmployee{"Joan", 80000, 7};

    unique_ptr<Employee> emp_jasmine = std::make_unique<FulltimeEmployee>("Jasmine", 90000, 3.5);

    Employee* emp_jacob = new EngineeringEmployee{"Jacob", 2.2, 3.2, 4, 1};

    unique_ptr<Employee> emp_lily = std::make_unique<EngineeringEmployee>("Lily", 5.1, 2.5, 6, 7.2);

    cout << "------ Employee -----" << endl;
    display_total_salary(emp_joam);
    
    cout << "------ FulltimeEmployee -----" << endl;
    display_total_salary(emp_janice);

    cout << "------ FulltimeEmployee -----" << endl;
    display_total_salary(emp_sara);

    cout << "------ ContractEmployee -----" << endl;
    display_total_salary(emp_terence);

    cout << "------ ContractEmployee -----" << endl;
    display_total_salary(emp_tosse);

    cout << "------ EngineeringEmployee -----" << endl;
    display_total_salary(emp_nina);

    cout << "------ EngineeringEmployee -----" << endl;
    display_total_salary(emp_joel);

    cout << "------------ TEST CASES WITH POINTERS ------------" << endl;

    cout << "------ FulltimeEmployee -----" << endl;
    display_total_salary(*emp_joan);

    cout << "------ FulltimeEmployee -----" << endl;
    display_total_salary(*emp_jasmine);

    cout << "------ EngineeringEmployee -----" << endl;
    display_total_salary(*emp_jacob);

    cout << "------ EngineeringEmployee -----" << endl;
    display_total_salary(*emp_lily);

    delete emp_joan;
    emp_joan = nullptr;

    delete emp_jacob;
    emp_jacob = nullptr;

    return 0;
}
