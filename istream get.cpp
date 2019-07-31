      /// istream::get (Aysha)
/*#include<iostream>  /// std cin,cout
#include<fstream>
using namespace std;
int main()
{
    char s[256];
    cin.get(s,256);  ///get c-string
    ifstream is(s);  ///open file
    char c;
    while(is.get(c))  ///loop getting single characters
        cout<<c;
    is.close();   ///close file
    return 0;
}*/
   ///istream::getline
/*#include<iostream>
using namespace std;
int main()
{
    char name[256],title[256];
    cin.getline(name,256);
    cin.getline(title,256);
    cout<<name<<" "<<title;
    return 0;
}*/
   ///getline extract to string
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    cout<<s;
    return 0;
}*/
   ///:istream::operator>>
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>hex>>n;  ///Enter a hexadecimal number
    cout<<n;  ///Its decimal equivalent
    return 0;
}*/
  ///operator>> (string)
/*#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    cout<<s;
    return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
    char first,last;
    first=cin.get();
    cin.ignore(256,' ');
    last=cin.get();
    cout<<first<<" "<<last;
    return 0;
}

