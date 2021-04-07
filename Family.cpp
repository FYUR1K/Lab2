#include "Family.h"

Family::Family(): surname(""),count_of_people(0),
 total_income(){
}

Family::Family(const std::string &SURNAME, const size_t &COUNT, const float &income):surname(SURNAME),
    count_of_people(COUNT)

{total_income.push_back(income);}

float Family::average_income() {
    return total_income[0] / count_of_people;
}


void Family::print(){
    std::cout << "Фамилия: " << surname << '\n';
    std::cout << "Число человек: " << count_of_people << '\n';
    std::cout << "Сумарный доход семьи в месяц: " << total_income[0] << '\n' << '\n';
}

