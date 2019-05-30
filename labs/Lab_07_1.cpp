#include <iostream>
#include <string>
using namespace std;

int main()
{
    char sym;
    string Str;
    cout << "enter the string:" << '\n';
    getline(cin, Str);
    cout << "enter character: ";
    cin >> sym;
    for(size_t i=0; i<Str.size(); i++)
    {
        if(Str[i] == sym)
        {
            Str.insert(Str.begin()+ i++, ',');
        }
    }
    cout<<Str<<'\n';
    return 0;
}
