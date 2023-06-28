#include<string>
#include<iostream>

#include"Employee.h"

using std::string;
using std::cout;
using std::endl;

Employee::Employee(string employee_type, string name, float salary) : employee_type(employee_type), name(name), salary(salary) {}

string Employee::get_employee_type() const
{
    return employee_type;
}

string Employee::get_name() const
{
    return name;
}

float Employee::get_salary() const
{
    return salary;
}

float Employee::get_total_salary() const
{
    cout << "Employee: get_total_salary() " << name << endl;
    return salary;
}

const Employee& Employee::increase_salary_and_return_this()
{
    salary = salary + 10000;

    return *this;
}