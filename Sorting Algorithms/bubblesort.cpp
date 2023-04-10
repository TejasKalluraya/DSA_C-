#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> num ={1,4,3,2,5};
    int n=num.size();
    for(int i =0; i<n; i++)
    {
        for(int j = i+1; j<n-1;j++)
        {
            if(num[i]> num[j])
            {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    for(int k=0;k<n;k++)
    {
        cout << num[k];
    }
    return 0;
}