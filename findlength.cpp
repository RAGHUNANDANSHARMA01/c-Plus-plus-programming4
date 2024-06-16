#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char*name;
    cout<<"enter your name:\n";
    cin.getline(name,20);
    for(int i=0; i<strlen(name); i++)
    {
        if(islower(*(name+i)))
        *(name+i)=toupper(*(name+1));
        else
        *(name+i)=tolower(*(name+i));
    }
        cout<<"the conversion is:\n";
        cout<<name<<endl;
}