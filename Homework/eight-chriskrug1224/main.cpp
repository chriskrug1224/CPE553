#include <iostream>
#include <cstring>

using namespace std;

// -------------- Design your String class here ---------------
// -----------------------------------------------------------
// String class with private integer variable length of string and pointer to character str
// make the following functions
//  1. default constructor String (length, str) with length = zero and str pointer to nullptr
//  2. non-default constructor that take string length and character pointer
//     Use strlen() function to find the char length
//     Creat new dynamic array str with the new length
//     You will have to loop to assign each character
//  2. make deconstruct ~String that delete char pointer
//  3. Overload << operator to print out string.
//  4. Copy constructor String
//  5. Move constructor String
//  6. Assign operator = for copy constructor
//  7. Overload + operator to add/combine to String cat + dog => catdog
class String{
private:
    int varLength;
    char *str;
public:
    String(){
        varLength = 0;
        str = nullptr;
    }

    String(const char *point){
        varLength = strlen(point);
         str = new char(varLength);
        for (int i = 0; i < varLength; i++)
        {
            str[i] = point[i];
        }
    }

    ~String(){
        delete &str;
    }

    friend ostream &operator << (ostream &ostr, const String &c){
        ostr << c.str << endl;
        return ostr;
    }

    String(const String &s){

        varLength = s.varLength;
        str = new char(varLength);
        str = s.str;
        //could loop inside the s character
    }

    String( String &&s){
        varLength = s.varLength;
        str = new char(varLength);
        str = s.str;
        s.str = nullptr;
    }

    String &operator =(const String &inpt){
        varLength = inpt.varLength;
        str = inpt.str;
        return *this;
        //instead of this, make string ans inside object. then ans.velength = input.varlength;
        //return ans
    }

    String operator+(String& object){
        String result;
        strcat(this->str, object.str);
        result.varLength = strlen(this->str);
        result.str = new char(object.varLength);
        strcpy(result.str, this->str);
        return result;
    }

};








int main() {
    cout << "########" << endl;
    cout << "Main Problem" << endl;
    cout << "########" << endl;

    // Create String s = abc
    String s = "abc";
    // cout s
    cout << "s is: " << s << '\n';
    // Create String s = def
    String s2 = "def";
    // cout s2
    cout  << "s2 is: " << s2 << '\n';
    // create String s3 equal s2
    String s3 = s2; // copy constructor
    // cout s3
    cout << "s3 is: " << s3 << " copy constructor "<<'\n';
    //	Create String s4 that is assigned to s added to s2
    String s4 = s + s2;  // abcdef // copy constructor
    // cout s4
    cout << "s4 is: " << s4 << " copy constructor of s + s2"<< '\n';
    // Create s5 and move s4
    String s5 = move(s4); // move constructor
    // cout s5
    cout << "s5 is: " << s5 << '\n';
    cout << "cout s4 should give you error after move()" << endl;
    cout << s4 << '\n';
    cout << "====[ end ]====" << endl;
    cout << "               " << endl;

    return 0;
}