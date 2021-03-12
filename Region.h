#ifndef Region_H
#define Region_H

class Region{
public:
    Region();
    Region(const std::string &NAME, const float &AMOUNT, const float &THRESHHOLD);
    void print();

protected:
    std::string name;
    float amount_of_payment_per_family = 0;
    float threshold = 0;


};


#endif
