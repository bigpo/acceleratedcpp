#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Please enter your name " << endl;
    string name1;
    string name2;
    string name3;
    cin >> name1 >> name2 >> name3;;
    cout << "hello, " + name1 << endl;
    cout << "Hello, " << name2 << endl;
    cout << "Hello, " << name3 << endl;

    
    const string hello = "Hello";
    const string message = hello + "world" + "!";
    
    const string exclam = "!";
    const string message2 =  exclam + "Hello" + ", world!";

    {
        const string s = "a string";
        cout << s << endl;
        {
            const string s = "another string";
            cout << s << endl;
        };
    }


    return 0;
}
