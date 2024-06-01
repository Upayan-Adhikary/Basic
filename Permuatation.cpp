 //Solution link https://www.sanfoundry.com/cpp-program-to-permute-all-letters-of-an-input-string/

#include<iostream>
#include<string.h>
 
using namespace std;
 
 
    // A function to print permutation using recursion technique.
    void Permute(char *a, int i, int n) 
    {
      int j; 
    
      if (i == n-1)
        cout<<"\n"<<a;
      else
      {
        for (j = i; j < n; j++)
        {
          // Swap the character at ith index with every other value to get all the possible permutations.
          swap(a[i], a[j]);
          Permute(a, i + 1, n);
          swap(a[i], a[j]);
        }
      }
    }
 
            int main()
            {
              char str[21];
              int len, count = 1;
            
              cout<<"\nEnter a string: ";
              cin>>str;
              len = strlen(str);
              int i;
            
              for (i = 0; i < len; i++)
              {
                count *= (i+1);
              }
            
              // Print the permutation's count.
              cout<<"\nThe number of permutations possible is: "<<count;
            
              // Call permute() function to print all the permutation.
              Permute(str, 0, len);
            
              return 0;
            }
            