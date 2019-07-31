  ///strlen(s) ,strcpy(s2,s1),strcat(s1,s2),strcmp(s1,s2),strlwr(s),strupr(s),strrev(s)
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
 char s1[20],s2[20],i;
 //clrscr();
 cout<<"Enter the string to find the length:";
 cin>>s1;
 cout<<"\nLength of the string is..."<<strlen(s1);

 strcpy(s2,s1);
 cout<<"\n\nCopied string is..."<<s2;

 cout<<"\n\nEnter 2 strings to be concatenated:";
 cin>>s1>>s2;
 strcat(s1,s2);
 cout<<"\nConcatenated string is..."<<s1<<endl;

 cout<<endl<<"\nEnter 2 strings to be compared:";
 cin>>s1>>s2;
 i=strcmp(s1,s2);
 if(i==0)
  cout<<"\nBoth strings are equal\n";
 else if(i<0)
  cout<<s1<<" is less than "<<s2<<endl;
 else
  cout<<s1<<" is greater than "<<s2;

 cout<<"\n\nEnter the string to change into lower case:";
 cin>>s1;
 cout<<"\nLower case of the given string is..."<<strlwr(s1);

 cout<<"\n\nEnter the string to change into upper case:";
 cin>>s1;
 cout<<"\nUpper case of the given string is..."<<strupr(s1);

 cout<<"\n\nEnter the string to be reversed:";
 cin>>s1;
 cout<<"\nThe reversed string is..."<<strrev(s1);
// getch();
 return 0;
}
*/
// optADSus im

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///String concatenation(s1+s2),String Comparisons(s1==s2),str.length(),str.find("s",pos),str.substr(i,f)
         /// str.erase(i,ln),
    string  s1,s2,s3;
    cin>>s1;
   // s3=s1+s2;

    if(s1==s2)  cout<<"matching\n";

    int ln=s1.length() ;

    for(int i=s1.find("cat",0);  i != string::npos; i=s1.find("cat",i)) i++;

    /*for(int i=0;s1[i]; i++){
        if(s1[i]==s2[0]){
        string s=s1.substr(i,s2.size());
        if(s==s2){
           s1.replace(i,s2.size(),s3);
            s1.erase(i,s2.size());
            s1.insert(i,s3);
          }
        }
    }*/
    // int pos=s1.index("cat");
     //s1.delete(3,5);
     cout<<s1<<endl;

    return 0;
}
