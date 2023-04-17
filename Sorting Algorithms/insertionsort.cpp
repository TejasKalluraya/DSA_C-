#include<iostream>
using namespace std;
#include<vector>

int main()
{
    int num[6] = {1,3,2,7,4,6};
    for(int i = 0;i<6;i++)
    {
        int j = i ;
        if(j>0 && num[j-1] > num[j])// as long as pointer is > 0  and the numbers are not in order
        {
            int temp = num[j-1];
            num[j-1]= num[j];
            num[j] = temp;
            j--;
        }
    }
    for(int i =0;i<6;i++)
    {
        cout << num[i];
    }
    return 0;
}