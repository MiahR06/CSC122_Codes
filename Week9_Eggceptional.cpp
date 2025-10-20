#include <iostream>
#include <string>
#include <vector>
#include <exception>
using namespace std;

class Egg{
protected:
    const string size;
    const string flavor;
public:
    Egg(const string size, const string flavor);
    virtual void eat_egg() const = 0;
};

class DevilledEgg : public Egg{
public:
    DevilledEgg(const string size, const string flavor);
    void eat_egg() const override{
        cout << "You ate a " << size << " egg that tasted " << flavor << endl;
    }
};

class FriedEgg : public Egg{
public:
    FriedEgg(const string size, const string flavor);
    void eat_egg() const override{
        cout << "You ate a " << size << " egg that tasted " << flavor << endl;
    }
};

class bad_egg : public exception{
public:

};

class RottenEgg : public Egg{
public:
    void eat_egg() const override{
        throw bad_egg();
    }
};



int main(){



    return 0;
}