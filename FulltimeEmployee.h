#pragma once
#include<string>
#include"Employee.h"

class FulltimeEmployee: public Employee
{
    private:
        float bonus_percent;
    
    public:
        FulltimeEmployee(std::string name, float salary, float bonus_percent);

        float get_bonus_percent() const;

        float get_total_salary() const override;

        const FulltimeEmployee& increase_salary_and_return_this();
};