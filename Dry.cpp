//All experimental dry-run to be carried out in files with name (Dry)

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <cctype>

int i = 40; //Global declaration

using namespace std;
void main(){
    std::cout << "a really, really long string literal""\12that spans two lines\n" << endl ; //prints the two strings in a different line \12 respresents Newline '\n'
    std::cout << "Hi \x4dO\115!\n"; // prints Hi MOM! followed by a newline
    std::cout << '\115' << '\n'; // prints M followed by a newline

        int j = 0;
        int i = j;
        printf("%d",::i); //Global scope operator used to fetch the global value otherwise it gets the value as per block defination for i.


            string s1 = "@Hello, World !!";
            auto len = s1.size(); //Use auto when using size function to avoid problems in cases of signed value comparision
            cout<<'\n'<<len<<endl;

                //string s5 = "ola" + ","; //No varaible with string data typr on left hand side that is appended to '+'
                string s6 = s1 + ", " + "world";

                    /* Here the string s2 is bigger than s1 as per the rule "if a character differs at any position in the string comparision then the 
                    result for the comparision is as per size of the first character at which the string differs" */
                    string s2 = "Hiya"; // i is bigger than e
                    if(s2>s1)
                    cout<<s1<<endl;


                            for (auto c : s1){ // for every char in s1
                            cout << c << endl;} // print the current character followed by a newline


                                    int punct_cnt = 0;
                                    // count the number of punctuation characters in s
                                    for (auto c : s1){ 
                                    if (ispunct(c)) // if the character is punctuation
                                    ++punct_cnt;} 
                                    cout << punct_cnt
                                    << " punctuation characters in " << s1 << endl;


                                        //ASCII value print
                                        string M = "Ola"; //Output should be (l = 108, a = 97, O = 79)
                                        int sum = 0;
                                        for(auto &c: M) //works for both with and without reference c
                                        {
                                            int k = c;
                                            cout << c << " Ascii value: " <<k <<endl;

                                            sum = sum + k;
                                        }cout << "Sum of those ascii values is: " <<sum<<endl;



}