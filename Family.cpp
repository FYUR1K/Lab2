#include "Family.h"

float Family::average_income() {
    return total_income / count_of_people;
}

void Family::setr(const std::string &SURNAME, const size_t &COUNT, const float &income ){
    surname = SURNAME;
    count_of_people = COUNT;
    total_income = income;
}
void Family::print(){
    std::cout << "Фамилия: " << surname << '\n';
    std::cout << "Число человек: " << count_of_people << '\n';
    std::cout << "Сумарный доход семьи в месяц: " << total_income << '\n' << '\n';
}

