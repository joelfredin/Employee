#pragma once
#include<string>
#include"FulltimeEmployee.h"

class EngineeringEmployee final: public FulltimeEmployee
{
    private:
        int num_stock_awards;
        float stock_price;

    public:
        EngineeringEmployee(std::string name, float salary, float bonus_percent, int num_stock_awards, float stock_price);

        float get_total_salary() const override;

        ~EngineeringEmployee();
};