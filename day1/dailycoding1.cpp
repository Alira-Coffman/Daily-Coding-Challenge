#include <stdlib.h>
#include <iomanip> 
#include <string>
#include <iostream>
#include <sstream>
#include <algorithm>   
using namespace std;


void addToK(int arr[20], int size, int k);
int main()
{
    string line;
    int arr[20];
    int k, i =0;
    //prompt user for list of numbers
    cout << "Please enter a list of numbers: ";
    //read in list of numbers
    getline(cin, line);
    stringstream ss(line);
    //prompt for k
    cout << "Please enter a value to check: ";
    //read in k
    cin >> k;

    while(ss.good())
    {
        ss >> arr[i];
        i++;
    }
   //any of the numbers add to k?
    addToK(arr, i,k);
    return 0;   

}
void addToK(int arr[20], int size, int k)
{
    int temp;
    for(int i=0; i < size; i++)
    {
        //find value looking for
        int temp = k  - arr[i];
        //does it exist in the array
        for(int l =i+1; l < size; l++)
        {
            if(arr[l] == temp)
                cout << "Values in list that add to  " << k << " are " << arr[i] << " and " << arr[l]<<endl;
        }

    }
    
  
}
