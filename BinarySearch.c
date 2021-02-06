#include<stdio.h>

//function declaration for binary Search.
int binarySearch(int arr[], int l, int r, int val){
while(l<=r){
    int m = l + (r-l)/2;
    if(arr[m]==val)
        return m;
    if(arr[m] < val)
        l = m + 1;
    else
        r = m - 1;
}
  return -1;
}


int main(){
int array[] = {10,20,30,40,50,60,70,80,90}; //Declare the array for searching and array should be in sequentially arranged.
int size = sizeof(array)/sizeof(array[0]); //Find the size of an array.
int val = 30; //search value in an array.
int result = binarySearch(array,0,size-1,val); //This one is function expression because we assign the function to the variable at the calling time  and pass the real values.
(result == -1)?printf("The value was not found"):printf("The value is found at index %d",result);
return 0;
}