//Here are the different types of input methods defined for a string in C/C++


#include<iostream>
#include<string>

using namespace std;
void main()
{
    //Method - 1  (whitespaces are ignored)
    //(I/P):- hello senorita (O/P):- hello
        string s; 
        cin >> s; 
        cout << s <<'\n' << s.size() << endl; 

            //Method -2 Getline (whitespaces not ignored)
            //(I/P):- correct two  space   SPAVES   (O/P):- correct two  space   SPAVES
                string word;
                while (getline(cin,word)) //read until end-of-file "CTRL+C"
                cout << word << '\n' << word.size() <<endl; //write each word followed by a new line, counts the space as well

                            // Method - 3 Getline for character array

                            char s3[30], s4[20];

                            cout<<"enter s3 ";
                            cin.getline(s3, sizeof(s3));

                            cout<<"enter s4 ";
                            cin.getline(s4, sizeof(s4));

                                    //Method - 4 Getline for variables of data type string
                                                                    
                                            string s1, s2;
                                            
                                            cout<<"enter s1 ";
                                            getline(cin,s1);

                                            cout<<"enter s2 ";
                                            getline(cin,s2);

                                            cout<<s1<<' '<<s2<<endl; //original value

                                            swap(s1,s2); //swaps s1 with s2 and s2 with s1.
                                            cout<<s1<<' '<<s2<<endl; //swaped value


}//end of main