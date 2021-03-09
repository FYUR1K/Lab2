#include"Family_from_region.h"

float Family_from_region::income_including_payments(const size_t &number_of_people, const float &total_income,
 const float &payments, const float &min_average_income){
     float AI = Family::average_income(const size_t &number_of_people,const float &total_income);
     if(AI < min_average_income ){

        return total_income + payments ;

     } else {
         return total_income;
     }

    
    Family::print_Family_param(std::string &surname, size_t &number_of_people, float &total_income ){
    std::cout << "Surname - " << surname << '/n';
    std::cout << "Number of people = " << number_of_people << '/n';
    std::cout << "Total income = " << income_including_payments() << '/n';   
}
    Region::print_Region_param(const std::string &name, const float &payments, const float &min_average_income ){
    std::cout << "Name - " << name << '/n';
    std::cout << "Payments = " << payments << '/n';
    std::cout << "Min_average_income = " << min_average_income << '/n';   
}
     

 }

