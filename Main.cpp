#include"Family_from_region.h"


int main(){
    Family Griffins("Griffins", 4, 20000);
    Griffins.print();

    Region Moscow("Moscow", 4000, 5000);
    Moscow.print();


    Family_from_region Griffins_from_Moscow("Griffins", 4, 19000,"Moscow", 4000, 5000);
    std::cout << Griffins_from_Moscow.average_income() << '\n';
    std::cout << Griffins_from_Moscow.average_income() << '\n';
    std::cout << Griffins_from_Moscow.average_income() << '\n';
    std::cout << Griffins_from_Moscow.average_income() << '\n';
    Griffins_from_Moscow.print();



    return 0;
}
