#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string Str; //исходная строка
   // string TempWord; //текущее слово
    char TempWord [20];
    string MaxWord;//максим. слово
    MaxWord [0] = '\0';
    char ClearStr;
    ClearStr = ' ';
    int temp = 0;
    int maxlen = 0;
    int j=0;
    int word = 0;
    int k; // переменная для отладочной информации
    cout << "enter the string:" << '\n';
    getline(cin, Str); //ввод строки
    for (size_t i=0; i<Str.size(); i++) //цикл по всей строке
    {


        if (Str[i] == ',') // если запятая, то
        {


            if(temp>maxlen) // если длина текущего слова больше максимальной длины, то
            {
                maxlen = temp; // обновление максимальной длины
                MaxWord = TempWord; // обновление буфера максимальных слов
               // cout << "MaxWord:" << MaxWord << '\n';
            }


            cout << MaxWord << " "; // вывод текущего макс.слова
            MaxWord.clear(); //очистка буфера максим.слов
            memset(TempWord, 0, sizeof(TempWord)); // очистка буфера текущего слова
            //cout << "Temp clear" << '\n';
            temp = 0;
            k++;
            j=0;
            maxlen = 0;
        }



        if (Str[i] != ' ' && Str[i] != ',') // если это не пробел и не запятая, то
        {
            if (k>0)
            {
            //    cout << "Im here" << '\n';
                k = 0;
            }
            temp++; // кол-во букв в слове +1
            TempWord [j] = Str [i]; // запись символа в буфер слов
            //cout << "TempWord: " << TempWord << '\n';
            j++;
            if (Str[i+1]==' ' || Str[i+1]==',') {
              word++;
            }
        }



        if (Str[i] == ' ') // если это пробел, то
        {
            if(temp>maxlen) // если длина текущего слова больше максимальной длины, то
            {
                maxlen = temp; // обновление максимальной длины
                MaxWord = TempWord; // обновление буфера максимальных слов
               // cout << "MaxWord:" << MaxWord << '\n';
            }
        memset(TempWord, 0, sizeof(TempWord));
        //cout << "Temp clear" << '\n';
        temp = 0;
        k++;
        j=0;
        }

    }
    if(temp>maxlen) // если длина текущего слова больше максимальной длины, то
            {
                maxlen = temp; // обновление максимальной длины
                MaxWord = TempWord; // обновление буфера максимальных слов
                //cout << "MaxWord:" << MaxWord << '\n';
            }


            cout << MaxWord << " "; // вывод текущего макс.слова
            MaxWord.clear(); //очистка буфера максим.слов
            memset(TempWord, 0, sizeof(TempWord)); // очистка буфера текущего слова
            //cout << "Temp clear" << '\n';
            temp = 0;
            k++;
            j=0;
            maxlen = 0;

            word++;
            cout << " " << '\n';
            cout << "Word= " << word << '\n';

    return 0;
}
