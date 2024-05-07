#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
#include <iostream>

using namespace std;

int main ()
{
    //THis code simply prints if the Array has Duplicate elemetns in it or NAH

    
    int nums [10];

    //Input the length of the array
    int n ;
    cout<<"Input the length of the array ";
    cin>>n;
    
    //Input the array
    int i=1;
    while(i<=n){
        int t;
        cout<<"Input the array elements ";
        cin>>t;
        nums[i]=t;
        i++;
    }

         //Linear search for duplicate element in array, Print TRUE if duplicate is present, otherwise print FALSE

             for(i=1;i<=n;i++)
            {
                if(i+1<=n){
                    if(nums[i]==nums[i+1]){
                    cout<<"TRUE"<<"\n";
                    break;
                    }

                }
                 else
                 cout<<"FALSE ";
                
                
            }

            

}