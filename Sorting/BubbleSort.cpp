#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

// a simple program to do bubble sorting

vector<int> BubbleSort(vector<int> num)
{
    int swaps = 0;
    for(int i = 0; i<num.size();i++)
    {
        for(int j =0 ; j<num.size(); j++)
        {
            if(num[j+1] < num[j])
            {
                num[j] = num[j+1]+num[j];
                num[j+1] = num[j]-num[j+1];
                num[j] = num[j] -num[j+1];
                swaps++;
            }
        }
    }
    return num;
}
