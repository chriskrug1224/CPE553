#include <iostream>
#include <string>
using namespace std;

int main() {
	char s[] = "abcd"; // \0  (control ^@)  ASCII NUL
	for (int i = 0; s[i] != '\0'; i++)
	  cout << s[i] << endl;
	cout << "*****" << '\n';
	cout << s << '\n';

	string a = "abc";
	cout << a << '\n';
	a += a; // + used to concatenate two strings abc + abc = abcabc
	cout << a.size() << '\n';
	cout << a.substr(2, 2) << "\n"; // ca // substr function looks for a string number 2 (count starts from 2) for 2
	cout << a.substr(2, 1) << "\n";

	cout << a.substr(2) << "\n"; // cabc //from string #2 till the end
	cout << a.substr() << "\n"; // abcabc // all the string

	string b,d1; // this is a test
 	cin >> b;
 	cout << "b=" << b << "\n";
 	cout << "****" << endl;
 	getline(cin >> ws,  d1); // read in everything until the new line . first arg is the stream input cin and second param is the variable that will carry the line
	cout << "d is " << d1 << endl;
}
// function called swap - sway two strings
// ws: Discards leading whitespace from an input stream.
