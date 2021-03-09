#ifndef Region_H
#define Region_H

class Region(){
public:
Region(const std::string &name_, const float &payments_, const float &min_average_income_);


void print_Region_param(const std::string &name, const float &payments, const float &min_average_income );
protected:
    std::string name;
    float payments = 0;
    float min_average_income = 0;
};


#endif
