/*
 C++ Program to Concatenate Two Strings using for Loop
 */
 
    #include <iostream>
    #include <cstring>
    using namespace std;
 
        int main()
        {
            char str1[100], str2[50];    
            cout << "Enter string 1 : ";
            cin.getline(str1, sizeof(str1));
            cout << "Enter string 2 : ";
            cin.getline(str2, sizeof(str2));
            int len1 = strlen(str1);
            int len2 = strlen(str2);
 
                // Concatenate the string using a for loop
                for (int i = 0; i < len2; i++)
                {
                    str1[len1 + i] = str2[i];
                }

            str1[len1 + len2] = '\0';
            cout << "Concatenated String : " << str1;
            return 0;
        }