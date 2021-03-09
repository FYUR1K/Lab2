#include "Family.h"

float Family::average_income(const size_t &number_of_people,const float &total_income ){
    return total_income / number_of_people;
}


void Family::print_Family_param( const std::string &surname, const size_t &number_of_people, const float &total_income ){
    std::cout << "Surname - " << surname << '/n';
    std::cout << "Number of people = " << number_of_people << '/n';
   std::cout << "Total income = " << total_income << '/n';   
}

