#include"Region.h"
#include"Family.h"

#ifndef Family_from_region_H
#define Family_from_region_H

class Family_from_region():public Family, public Region
{
public:
    float income_including_payments(const size_t &number_of_people, const float &total_income , const float &payments_, const float &min_average_income_);


    void print_Family_from_region ();
}

#endif
