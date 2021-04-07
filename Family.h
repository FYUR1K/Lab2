#include<iostream>
#include<vector>
#ifndef Family_H
#define Family_H

class Family{
public:
    Family();
    Family(const std::string &SURNAME, const size_t &COUNT, const float &income);
    float average_income();
    void print();
protected:
    std::string surname; //фамилия
    size_t count_of_people; //кол-во людей
    std::vector<float> total_income;//{сумарный доход в месяц, флажок добавления выплаты}
};


#endif
