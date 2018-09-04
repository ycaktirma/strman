#include <iostream>
#include "StringManipulation.h"

using namespace std;
using std::string;

int main()
{
    StringManipulation strman;

    string str = "Yarkin CAKTIRMA";
    cout<<"Original string : "+str+"\n";
    cout<<"Removed whitespaces : "+strman.RemoveWhitespaces(str)+"\n";
    cout<<"Replaced : "+strman.Replace(str,' ','#')+"\n";
    char* arr = strman.ToCharArray(str);
    cout<<"The string has converted to char array.And its 2. element is : " << arr[10]<<"\n";
    cout<<"Reversed : "<<strman.Reverse(str)<<"\n";
    cout<<"Removed 5. index(i) : "<<strman.Remove(str,5)<<"\n";
    cout<<"Removed all 'A' in string : "<<strman.Remove(str,'A');
    return 0;
}
