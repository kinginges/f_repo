#include <iostream>

class Cars
{
private:
    int year, month, day;

public:
    Cars() // making a default CONSTRUCTOR init for any new entry w/o date
    {
        year = 2000;
        month = 01;
        day = 01;
        std::cout << "Attention! Your new cars manuf. date has been set to default. To change that, use command \"set_date\". " << std::endl;
        get_date();
    };

    Cars(int date_year, int date_month, int date_day) // making an overload func for Cars CONSTRUCTOR to init any new entry WITH a manuf date
    {
        year = date_year;
        month = date_month;
        day = date_day;

        std::cout << "Your new cars manuf. date has been set: " << std::endl;
        get_date();
    }

    void test_msg()
    {
        std::cout << "Class is accesible! Use it to your hearts intent! " << std::endl;
    };
    void set_date(int date_year, int date_month, int date_day)
    {
        year = date_year;
        month = date_month;
        day = date_day;
    };
    void get_date()
    {
        std::cout << "The manufacturing date for this car is now " << year << " " << day << " " << month << std::endl;
    };

    ~Cars()
    {
        std::cout << "The class has destroyed itself! hahahahah " << std::endl;
    };
};

int main()
{
    Cars Audi;
    Audi.test_msg();
    Audi.set_date(2005, 11, 23);
    Audi.get_date();

    Cars Skoda;
    Skoda.get_date();

    Cars Mazda(2016, 9, 30);
    Mazda.get_date();

    std::cout << "Your code ran successfully! You did great!";
    return 0;
};