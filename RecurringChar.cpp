
#include <iostream>
#include<string.h>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

int firstRecurringCharacter(string input)
{
    unordered_map <char,int> hmap;
    for(int i = 0; i<input.size(); i++){
        auto it = hmap.find(input[i]);
        if(it == hmap.end())
        {
            hmap[input[i]] = i;
        }
        else{
            return hmap[input[i]];
        }
    }
    return -1;
}
