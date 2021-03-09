#include"Region.h"

Region::Region(const std::string &name_, const float &payments_, const float &min_average_income_){
    name = name_;
    payments = payments_;
    min_average_income = min_average_income_;
}

void Region::print_Region_param(const std::string &name, const float &payments, const float &min_average_income ){
    std::cout << "Name - " << name << '/n';
    std::cout << "Payments = " << payments << '/n';
    std::cout << "Min_average_income = " << min_average_income << '/n';   
}
