#include <iostream>  
using namespace std;  
class publication
{
    private:
    int code;
    string book, author;
    float price;
    public:
    void getInfo(int a, float b)
    {
        code = a;
        price = b;
        cout << "Enter the book name and author name: ";
        cin >> book >> author;
    }
    void show()
    {
        cout << "\nCode:  " << code;
        cout << "\nBook:  " << book;
        cout << "\nAuthor:  " << author;
        cout << "\nPrice:  " << price;
    }
};
int main()
{
    const int size = 2;
    publication *p = new publication[size];
    publication *a = p;
    int c;
    float v;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter code and price of the book: ";
        cin >> c >> v;
        (*p).getInfo(c,v);
        cout << "fhfhf\n";
        p++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "\nBook published: "<< (i+1) << endl;
        a->show();
        a++;
    }
    
    return 0;
}