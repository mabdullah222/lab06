#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <time.h>
using namespace std;

vector<int> BubbleSort(vector <int> &v)
{  
    int value;
    int index;
    int count;
    for (int i=0;i<v.size();i++)
    {
        count=0;
        for (int j=i+1;j<v.size();j++)
        {
            if (v.at(i)>v.at(j))
            {
                index=j;
                value=v.at(j);
                count++;
            }
        }
        if (count!=0)
        {
            v.at(index)=v.at(i);
            v.at(i)=value;
        }
    }
    return v;
}


bool movMin(vector<int> in,vector <int> out)
{
    BubbleSort(in);
    bool msg;
    for (int i=0;i<in.size();i++)
    {
        
        if (in.at(i)==out.at(i))
        {
            msg=true;
        }
        else
        {
            msg=false;
            break;
        }
    }
    return msg;
}

