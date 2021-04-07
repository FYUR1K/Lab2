#include"Family_from_region.h"


Family_from_region::Family_from_region(): Family(), Region(){}

Family_from_region::Family_from_region(const std::string &SURNAME, const size_t &COUNT, const float &income,const std::string &NAME,
                                       const float &AMOUNT, const float &THRESHHOLD): Family(SURNAME,COUNT,income), Region(NAME,AMOUNT,THRESHHOLD){}

float Family_from_region::average_income(){
    if(((total_income[0] / count_of_people) < threshold) && total_income[1] !=1){
        total_income[0] += amount_of_payment_per_family;
        total_income.push_back(1);
        return Family::average_income();
    } else{
        return Family::average_income();
    }
}

void Family_from_region::print(){
    Family::print();
    Region::print();
}
