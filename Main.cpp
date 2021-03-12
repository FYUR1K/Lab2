#include<iostream>
#include"Family.cpp"
#include"Region.cpp"
#include"Family_from_region.cpp"

int main(){
Family Griffins;
    Griffins.setr("Griffins", 4, 20000);
    Griffins.print();

Region Moscow("Moscow", 4000, 5000);
    Moscow.print();


Family_from_region Griffins_from_Moscow;
    Griffins_from_Moscow.setr1("Griffins", 4, 19000,"Moscow", 4000, 5000);
    std::cout << Griffins_from_Moscow.average_income() << '\n';
    Griffins_from_Moscow.print();

return 0;
}
