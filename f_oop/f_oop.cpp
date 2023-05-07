#include <iostream>

class cars
{       // three access levels, public - private - protected
public: // accessible everywhere
    int value = 10;

private: // only visible to cars class
    int valu = 11;

protected: // visible to daughter and inheriting classes
    int val = 12;
};

class my_class
{
private:
    int year, month, day;

public:
    void message()
    {
        std::cout << "Program is working! " << std::endl;
    };
    void set_date(int date_year, int date_month, int date_day)
    {
        year = date_year;
        month = date_month;
        day = date_day;
    };
    void get_date()
    {
        std::cout << "The date for this element is " << year << day << month << std::endl;
    };
};

int main()
{
    my_class element_in_class;
    element_in_class.message();
    element_in_class.set_date(2005, 11, 23);
    element_in_class.get_date();

    my_class element_in_clas;
    element_in_clas.get_date();

    std::cout << "Your code ran successfully! You did great!";
    return 0;
};