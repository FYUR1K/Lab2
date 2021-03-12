#ifndef Family_H
#define Family_H

class Family{
public:
    float average_income();
    void setr(const std::string &SURNAME, const size_t &COUNT, const float &income);
    void print();
protected:
    std::string surname;
    size_t count_of_people = 0;
    float total_income = 0;
};


#endif
