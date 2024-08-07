#include <iostream>
using namespace std;
class bird
{
public:
    void birds()
    {
        cout << "***** birds -> ( Flying Bird, Non Flying Bird ) *****" << endl << endl;
    }
};
class flyingbird : public bird
{
public:
    void flying_birds()
    {
        cout << "Flying Bird -> ";
    }
};
class sparrow : public flyingbird
{
public:
    void sparrows()
    {

        cout << "( Sparrow, ";
    }
};
class robin : public flyingbird
{
public:
    void robins()
    {
        cout << "Robin )" << endl << endl;
    }
};
class non_flying_birds : public bird
{
public:
    void non_flying_bird()
    {
        cout << "Non Flying Bird -> ";
    }
};
class kiwis : public non_flying_birds
{
public:
    void kiwi()
    {
        cout << "( Kiwi, ";
    }
};
class penguins : public non_flying_birds
{
public:
    void penguin()
    {
        cout << "Penguin )" << endl;
    }
};
int main()
{
    sparrow s;
    robin r;
    kiwis k;
    penguins p;
    r.birds();
    r.flying_birds();
    s.sparrows();
    r.robins();
    k.non_flying_bird();
    k.kiwi();
    p.penguin();

    return 0;
}