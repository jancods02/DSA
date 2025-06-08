#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

// a simple program which does selection sort on a vector with minimum swaps required
vector<int> SelectionSort(vector<int> num)
{
    int length =num.size();
    int swap;
    for(int i = 0; i<length;i++)
    {
        int min = i;
        int temp = num[i];
        for(int j = i+1 ; j<length; j++)
        {
            if(num[j] < num[min])
            {
                min = j;
            }
        }
        num[i] = num[min];
        num[min] = temp;
        swap++;
        
    }
    return num;
}
