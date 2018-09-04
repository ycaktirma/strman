#include "StringManipulation.h"
#include <string.h>
#include <iostream>

using std::string;
using namespace std;


StringManipulation::StringManipulation()
{
    //ctor
}

StringManipulation::~StringManipulation()
{
    //dtor
}

string StringManipulation::RemoveWhitespaces(string str)
{
    int length = str.length();
    string manipulated="";
    for(int i=0 ; i<length ; i++){
       if(str.at(i)!=' ' && str.at(i) != '\0'){
            manipulated+=str.at(i);
       }

    }
    return manipulated;
}

string StringManipulation::Replace(string str ,char target , char character)
{
    char letters[str.length()];
    strcpy(letters , str.c_str());

    int length = str.length();
    for(int i=0 ; i<length ; i++){
        if(letters[i]==target){
            letters[i]=character;
        }
    }
    return letters;
}

char* StringManipulation::ToCharArray(string str)
{
    char* letters;
    strcpy(letters , str.c_str());

    return letters;
}

string StringManipulation::Reverse(string str)
{
    string reversed="";
    int length = str.length();

    for(int i =0 ; i<length ; i++){
        reversed += (str.at((length-1)-i));
    }

    return reversed;
}

string StringManipulation::Remove(string str,int index)
{
    string tmp="";
    for(int i =0 ; i<str.length() ; i++){
        if(i != index-1){
            tmp += str.at(i);
        }
    }

    return tmp;
}

string StringManipulation::Remove(string str , char target)
{
    string tmp="";
    for(int i =0 ; i<str.length() ; i++){
        if(str.at(i) != target){
            tmp += str.at(i);
        }
    }

    return tmp;
}





