#include <iostream>

class Human;
class Dog;

class Dog
{
    friend class Human;

private:
    int health = 400;
};

class Human
{
public:
    void damage(Dog &d) // adding ampersand to refer to the actual int health and save the changed done in this scope, instead of simply copying the class element w/o saving changed later
    {
        d.health -= 20;
        std::cout << "The health of the animal is: " << d.health << std::endl;
    }

    void kill(Dog &d)
    {
        d.health = 0;
        std::cout << "The health of the animal is now " << d.health << std::endl;
    }

    void heal(Dog &d)
    {
        d.health += 50;
        std::cout << "The animal has been healed, current health: " << d.health << std::endl;
    }
};

int main()
{
    Dog Scooby;
    Human John;
    John.damage(Scooby);
    John.kill(Scooby);
    John.damage(Scooby);
    John.heal(Scooby);

    Dog Husky;
    John.damage(Husky);
};