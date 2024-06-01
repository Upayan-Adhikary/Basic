
#include<iostream>
#include<string>
#include<cctype>

using namespace std;

void main(){

    /*Count each word, vowels and punctuation in a string
     test cases---> No words, one character, 2 word, 2 words and a escape char in b/w
     "I ate a devil fruit named as AKUMA."  <---This sentence has 8 words including the single characters  */

    string s3= "Galahad madam";
    string s2= "A";
    string s= "";
    string s1= "  A Baboon \n kills "; /* OP--> A Baboon when escape sequence is \0 and OP-->A Baboon
                                                                                               kills when escape sequence is \n */
    //cout<<s3<<endl;
    int i; int count = 0; int vow = 0; int punct =0;
        for (i = 0; s3[i] != '\0';i++)
            {
                if (s3[i] == ' ')
                count++;    

                if (s3[i] == 'a' || s3[i] == 'e' || s3[i] == 'i' || s3[i] == 'o' || s3[i] == 'u' || s3[i] == 'A' || s3[i] == 'E' || s3[i] == 'I' || s3[i] == 'O' || s3[i] == 'U'){
                vow++; }
                
                if(ispunct(s3[i])){
                punct++;
                }


            }
                cout << "Number of words in the string are: " << count + 1<<endl;
                cout <<"Number of vowels: "<<vow<<endl;
                cout <<"Number of punctuation: "<<punct<<endl;



        //Count the frequency of each character in a string
            int j,k;
            for(j = 0; s3[j] != '\0'; j++){
                int temp = 1;

                if(s3[j] != ' '){
                    for(k = j+1; s3[k] != '\0'; k++){

                        if(s3[j]==s3[k]){
                            temp++;
                            s3[k]=' ';
                        }

                    }
                cout<<s3[j] <<" Frequency: " <<temp<<endl;
                }
            }

}