#include <iostream>
#include <string>
#include <sstream> 
using namespace std;

int main()
{
    string str, word, s = "";
    cout << "Enter text: ";
    getline(cin, str);

    stringstream words(str);
    while (words >> word)
    {
        s = word + " " + s;
    }
    s.pop_back();
    cout << "Result: ";
    cout << s << endl;

    system("pause");
    return 0;
}