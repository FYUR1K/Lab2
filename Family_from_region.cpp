#include"Family_from_region.h"

float Family_from_region::average_income(){
    if((total_income / count_of_people) < threshold){
        total_income += amount_of_payment_per_family;
        return total_income/count_of_people;
    } else{
        return total_income / count_of_people;
    }
}

void Family_from_region::print(){
    Family::print();
    Region::print();
}

void Family_from_region::setr1(const std::string &SURNAME, const size_t &COUNT, const float &income,const std::string &NAME,
                               const float &AMOUNT, const float &THRESHHOLD){
    surname = SURNAME;
    count_of_people = COUNT;
    total_income = income;
    name = NAME;
    amount_of_payment_per_family = AMOUNT;
    threshold = THRESHHOLD;
}




