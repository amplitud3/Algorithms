// finding how many times a character present in the string

#include<iostream>
#include<string>
using namespace std;

int main()
{

    string str;
    char ch;
    int flag=0;

    cout<<"Enter the string : ";
    getline(cin,str);

    cout<<"Enter the character : ";
    cin>>ch;

    for(int i=0;i<str.length();i++)
    {
        if(str[i]==ch)
        {
            flag++;
        }
    }

    cout<<"the character is "<<flag<<" times present in the string\n";
}