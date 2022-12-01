#include <iostream>
using namespace std;

//Function
void insertionSort(int array[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = array[i];
        int j = i - 1;
        while(j>= 0 && array[j]> key)
        {
            array[j+1] = array[j];
            j = j - 1;

        }
        array[j+1] = key;
    }
}
// Display on Screen
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
// Driver code
int main()
{
    int arr[] = { 24, 78, 09, 11, 90, 1,45 };
    int N = sizeof(arr) / sizeof(arr[0]);
    // We can't use .length() as it is not available in C++;
// Function Call
    insertionSort(arr, N);
    printArray(arr, N);
 
    return 0;
}