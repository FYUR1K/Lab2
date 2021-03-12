#include"Region.h"
#include"Family.h"

#ifndef Family_from_region_H
#define Family_from_region_H

class Family_from_region :public Family, public Region
{
public:
    float average_income();
    void setr1(const std::string &SURNAME, const size_t &COUNT, const float &income,const std::string &NAME, const float &AMOUNT, const float &THRESHHOLD);
    void print();
};


#endif
