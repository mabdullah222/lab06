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

bool testmovIn()
{
    int size;
    srand(time(0));
    vector<int> vec1;
    size=rand()%10000;
    for (int i=0;i<size;i++)
    {
        vec1.push_back(rand()%101);
    }
    sort(vec1.begin(),vec1.end());
    vec1.push_back(rand()%101);
    vector<int> out=vec1;
    sort(out.begin(),out.end());
    return movMin(vec1,out);
    
}