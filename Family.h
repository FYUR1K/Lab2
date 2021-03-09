#ifndef Family_H
#define Family_H

class Family(){
protected:
    std::string surname;
    size_t number_of_people = 0;
    float total_income = 0;
public:
    float average_income(const size_t &number_of_people,const float &total_income );

    void print_Family_param( const std::string &surname, const size_t &number_of_people, const float &total_income );

};


#endif
