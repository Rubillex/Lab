#include <iostream>
#include <string>
using namespace std;

struct info
{
  char surname [10];
  char name_c [15];

  int quantity_a;
  int quantity_b;
  int quantity_c;
};

info person1 = {
  "Ivanov",
  "SOK",
  176,
  123,
  42
};

int main()
{
  int sa = 40;
  int sb = 70;
  int sc = 47;

  int summ1, summ2, summ3;

  summ1 = sa * person1.quantity_a;
  summ2 = sb * person1.quantity_b;
  summ3 = sb * person1.quantity_c;

  cout << "All cat. A: " << person1.quantity_a << "  oplata: " << summ1 <<'\n';
  cout << "All cat. B: " << person1.quantity_b << "  oplata: " << summ2 <<'\n';
  cout << "All cat. C: " << person1.quantity_c << "  oplata: " << summ3 <<'\n';


    return 0;
}
