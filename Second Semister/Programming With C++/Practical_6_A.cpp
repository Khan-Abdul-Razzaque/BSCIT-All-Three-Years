#include <iostream>
using namespace std;

class maths
{
   int a;

public:
   int b, ans;
   void accept()
   {
      cout << "Enter a and b respectively: ";
      cin >> a >> b;
   }
   void message()
   {
      cout << "******* Let's calculate (a + b)^2 = a^2 + 2*a*b + b^2 *******" << endl << endl;
   }
   void operation()
   {
      int a2, ab, b2;
      a2 = a * a;
      ab = 2 * a * b;
      b2 = b * b;
      ans = a2 + ab + b2;
   }
   void show()
   {
      cout << endl << "a = " << a << endl << "b = " << b << endl << endl;
      cout << "We predict the answer for (a + b)^2 = a^2 + 2ab + b^2 = " << ans << endl;
   }
};
class property : public maths
{
public:
   void call()
   {
      accept();
      operation();
      show();
   }
};

int main()
{
   property p;
   p.message();
   p.call();
   return 0;
}