//Pseudocode:
//for loop till second last element to replace with min
//inner for loop from ith element to last element to find min
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
   int tobesorted [5] = {1,3,2,4,5};
   int n= sizeof(tobesorted)/sizeof(tobesorted[0]);
   for(int i = 0; i<=n-2 ;i++)
   {
    int min = i;
    for(int j = i;j<=n-1;j++)
    {
        if(tobesorted[j]<tobesorted[min])
            min = j;
    
    }
    int temp = tobesorted[min];
    tobesorted[min] = tobesorted[i];
    tobesorted[i] = temp;
   }
   for(int k =0;k<n;k++){
    cout << tobesorted[k];
   }
   
    return 0;
}