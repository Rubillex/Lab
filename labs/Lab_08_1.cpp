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

int main()
{
    info person [3];
    for (int i = 0; i < 3; i++)
    {
      cout << "Surname :";
      cin >> person[i].surname;
      cout << "Name c.:";
      cin >> person[i].name_c;
      cout << "quantity A:";
      cin >> person[i].quantity_a;
      cout << "quantity B:";
      cin >> person[i].quantity_b;
      cout << "quantity C:";
      cin >> person[i].quantity_c;
    }
  int sa, sb, sc;
  sa = 10;
  sb = 19;
  sc = 43;
  int summ1[3], summ2[3], summ3[3], summ4[3], summ5[3];
  
  for (int i = 0; i < 3; i++)
  {
    summ1[i] = sa * person[i].quantity_a;
    summ2[i] = sb * person[i].quantity_b;
    summ3[i] = sc * person[i].quantity_c;
    summ4[i] = person[i].quantity_a + person[i].quantity_b + person[i].quantity_c;
    summ5[i] = summ1[i] + summ2[i] + summ3[i];
    cout << "Surname:" << person[i].surname << '\n';
    cout << "Name c:" << person[i].name_c << '\n';
    cout << "All cat. A: " << person[i].quantity_a << "  oplata: " << summ1[i] <<'\n';
    cout << "All cat. B: " << person[i].quantity_b << "  oplata: " << summ2[i] <<'\n';
    cout << "All cat. C: " << person[i].quantity_c << "  oplata: " << summ3[i] <<'\n';
    cout << "All cat.: " << summ4[i] << "  oplata: " << summ5[i] <<'\n';
    cout << " " << '\n';
      
  }

    return 0;
}
