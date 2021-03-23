#include"Region.h"
Region::Region(){
}

Region::Region(const std::string &NAME, const float &AMOUNT, const float &THRESHHOLD):
name(NAME),amount_of_payment_per_family(AMOUNT), threshold(THRESHHOLD) {
}

void Region::print(){
    std::cout << "Название: " << name << '\n';
    std::cout << "Размер выплаты на семью: " << amount_of_payment_per_family << '\n';
    std::cout << "Пороговое значение среднедушевого дохода: " << threshold << '\n'<< '\n';
}


