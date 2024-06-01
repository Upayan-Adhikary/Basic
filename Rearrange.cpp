#include <iostream>
#include <string>
#include <cctype>

using namespace std;
void main()
{
    string s1 = "Hello  world  @LL c e";
    string s2 = s1;
    char s = 'l';

            
            //Remove character, remove spaces, replace space with %
            for(auto &c : s1){
                if(c==s || isspace(c))
                c='\0';
                }

                for(auto &d : s2){
                    if(iswspace(d))
                    d='%';
                }
            cout<<s1<<'\n'<<s2<<endl;


                //Reverse string

                            string str1; char temp;
                            cout << "Enter string 1 : ";
                            getline(cin, str1);
                            auto j = str1.size()-1; // the (-1) is because every string literal ends with '\0' and we do not want to compute that in our reversal.
                            int i = 0;
                                for (i=0; i<j; i++)
                                {

                                    temp = str1[i];
                                    str1[i] = str1[j];
                                    str1[j] = temp;
                                    j--;
                                }
                                cout<<str1<<endl;

                                        //convert upper case to lower and vice versa
                                        for(auto &e : str1){
                                            if(isupper(e))
                                            e=tolower(e);
                                            else
                                            e=toupper(e);
                                        }

                                        str1 = toupper(i);

                                        cout<<str1<<endl;
                
}