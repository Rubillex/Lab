#include <iostream>
using namespace std;

int main()
{

    char sym1, sym2;
    string Str;
    string StrokTemp;
    string StrokMax;
    int temp = 0;
    int maxlen;
    cout << "enter the string:" << '\n';
    getline(cin, Str);
    sym1 = ',';
    sym2 = ' ';
    for(size_t i=0; i<Str.size(); i++)
    {
      if(Str[i] != sym1) //между запятыми
      {
          if (Str[i] != sym2) // между пробелами
          {
            StrokTemp.insert(StrokTemp.begin()+ i++, Str[i]);
            //StrokMax.insert(StrokMax.begin()+ i++, Str[i]);
            temp++;
            //отладка
            cout << "StrokTemp = " <<StrokTemp << endl;
            cout << "temp = " << temp << endl;
          }
          else
          {
            if(temp>maxlen)
            {
              maxlen = temp;
              StrokMax = StrokTemp;
              StrokTemp.clear(); //очистка временной строки
              temp = 0;
            }
          }
      }
      else
      {
        cout<<StrokMax<< " ";
        maxlen = 0;
      }

    }

    return 0;
}
