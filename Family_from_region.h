#include"Region.h"
#include"Family.h"

#ifndef Family_from_region_H
#define Family_from_region_H

class Family_from_region :public Family, public Region
{
public:
    Family_from_region();

    Family_from_region(const std::string &SURNAME, const size_t &COUNT, const float &income,const std::string &NAME,
                       const float &AMOUNT, const float &THRESHHOLD);

    float average_income();


    void print();
};


#endif
