/*Write a C++ program that takes two strings as input and concatenates them.
String concatenation in C++ is the process of combining multiple strings into a single string. 
It involves merging the characters or contents of two or more strings to create a new concatenated string.

For Example, first string = Hello; second string = World
Hello + World = Hello 
*/

// https://www.sanfoundry.com/cpp-program-illustrate-cstyle-string-functions/ 


#include <iostream>
#include <string>

using namespace std;
void main(){
    //MY first APPROACH!!

    string m = "Hello";
    string n = " World";

    cout<<n <<" "<<m<<endl; //Normal print using space
    string Lin = m+n; //Concatinate using + operator
    cout<<'\n'<<Lin<<endl;

                    //Other appraoches, time and space complexities can be found in the link mentioned above


                            //uses the append() function from the string class, which is a member function available in the <string> library.
                            //Append function cannot be used for character type array
                            //after append s1 contains the concatinated string and s2 remains same as input
                                
                                string s1, s2;
                                
                                getline(cin,s1);
                                getline(cin,s2);

                                s1.append(s2);  
                                cout<<s1<<endl;
                                cout<<'\n'<<s2<<endl;


                            //Uses the ‘strcat()‘, which is an inbuilt function under the library ‘string.h’, the two strings are concatenated.
                            //cannot use strcat function for string data type only constant character type inputted as array allows this function
                            //after strcat s3 contains the concatinated string and s4 remains same as input
                                char s3[30], s4[20];

                                cout<<"enter s3 ";
                                cin.getline(s3, sizeof(s3));

                                cout<<"enter s4 ";
                                cin.getline(s4, sizeof(s4));

                                // strcat(s3,s4);
                                // cout<<s3<<'\n'<<s4<<endl;
                                if(strcmp(s3,s4)==0){
                                        cout<<"equal";
                                }
                                else
                                cout<<"Not equal";
                                

}//end of main