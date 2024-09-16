#include <iostream>
using namespace std;
void checkpassword(string& password)
{int n = password.length();
bool hasLower = false, hasUpper = false, hasDigit = false;
for (int i = 0; i < n; i++)
 {if (islower(password[i]))
 hasLower = true;
 if (isupper(password[i]))
 hasUpper = true;
 if (isdigit(password[i]))
 hasDigit = true;
 }if ( hasUpper && hasDigit && hasLower && (n >= 6) &&(n<=16))
 cout << "valid";
 else
 cout << "invalid";
 }
 int main()
 {
cout << "Please enter a password (6-16 characters) which should contain:- " << endl;cout << " * at least one upper and lowercase letter\n";
cout << " * at least one special character \n";
cout << " * and also at least one digit\n";
string password;
cout <<"Enter password\n";
getline(cin,password);
checkpassword(password);
return 0;
}