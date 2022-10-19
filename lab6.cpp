#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <time.h>
using namespace std;

int main()
{
    int size;
    cout<<"No. of dice rolls: ";
    cin>>size;
    srand(time(0));
    vector<int> vec1(size);
    int value;
    for (int i=0;i<size;i++)
    {
        value=rand()%7;
        if (value==0)
        {
            i--;
        }
        else
        {
            vec1.push_back(value);
        }
    }
}