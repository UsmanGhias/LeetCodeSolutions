#include<iostream>
using namespace std;
//Swap Function
void swapping(int &obj1, int &obj2)
 {
    //swap the content of a and b
   int temp;
   temp = obj1;
   obj1 = obj2;
   obj2 = temp;
}
// Display using pointer array
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
// Merge Sort 
void MergeSort(int *array, int left, int mid, int right) {
   int i, j, k, nleft, nright;

   //size of left and right sub-arrays
   nleft = m-l+1;
   nright = r-m;
   int larr[nleft], rarr[nright];
   
   for(i = 0; i<nleft; i++)
      larr[i] = array[l+i];
   for(j = 0; j<nright; j++)
      rarr[j] = array[m+1+j];
   i = 0; j = 0; k = l;
   //marge temp arrays to real array

   while(i < nleft && j<nright) {
      if(larr[i] <= rarr[j]) {
         array[k] = larr[i];
         i++;
      }else{
         array[k] = rarr[j];
         j++;
      }
      k++;
   }
   while(i<nleft) {       //extra element in left array
      array[k] = larr[i];
      i++; k++;
   }
   while(j<nright) {     //extra element in right array
      array[k] = rarr[j];
      j++; k++;
   }
}
void mergeSortImplementation(int *array, int left, int right) {
   int m;
   if(left < right) {
      int m = left+(right-l)/2;

      // Sort first and second arrays
      mergeSortImplementation(array, l, m);
      mergeSortImplementation(array, m+1, r);
      MergeSort(array, left, m, right);
   }
}
//Driver Code
int main() {
   int n;
   cout << "Enter Index Number: ";
   cin >> n;
   int arr[n];     //create an array with given number of elements
   cout << "Enter Elements: " << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   mergeSort(arr, 0, n-1);     //(n-1) for last index
   cout << "Array after Sorting: ";
   display(arr, n);
}