#ifndef STRINGMANIPULATION_H
#define STRINGMANIPULATION_H
#include <string>

using std::string;

class StringManipulation
{

    public:
        StringManipulation();
        virtual ~StringManipulation();
        //Removes all whitespaces in string you pass
        string RemoveWhitespaces(string str);
        //Replaces characters between characters you enter and targets
        string Replace(string str ,char target , char character);
        //TO CHAR ARRAY
        char* ToCharArray(string str);//You can use this like : char* myArray.
        //REVERSE
        string Reverse(string str);
        //REMOVE IN STRING (INDEX)
        string Remove(string str ,int index);
        //REMOVE IN STRING (CHAR)
        string Remove(string str , char target);
        //TRIM
        //SPLIT
        //LEFT SHIFT
        //RIGHT SHIFT
    protected:

    private:

};

#endif // STRINGMANIPULATION_H
