#include <stdlib.h>
#include <iomanip> 
#include <string>
#include <iostream>
#include <sstream>
#include <algorithm> 

using namespace std;

void BubbleSort(int sortMe[], int n);
int findInt(int sortedArray[], int n);
int main()
{
    int arr[20], i =0;
    string line;
    //read in an array of integers
    cout << "Please enter a list of integers: ";
    getline(cin, line);
    stringstream ss(line);
    while(ss.good())
    {
        ss >> arr[i];
        i++;
    }
    //bubble sort
    BubbleSort(arr, i);
    //find first missing pos integers
    cout << "The missing integer is " << findInt(arr, i)<< endl;
    return 0;
}
void BubbleSort(int sortMe[], int n)
{
    int temp;
    for(int a =0; a < n; a++)
    {
        for(int b = 0; b < n-a-1; b++)
        {
            if(sortMe[b] > sortMe[b+1])
            {
                //swap :D
                temp = sortMe[b];
                sortMe[b] = sortMe[b+1];
                sortMe[b+1] = temp;
            }
        }
    }

    // for(int i = 0; i < n; i++)
    // {
    //     cout << sortMe[i] << " ";
    // }
    // cout << endl;

}
int findInt(int sortedArray[], int n)
{
    for(int i =0; i < n; i++)
    {
        if((sortedArray[i+1] - sortedArray[i]) > 1 )
        {
            return sortedArray[i] +1;
        }

    }
}
