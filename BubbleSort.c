#include<stdio.h>

void display(int arr[], int size){
    int i;
    for(i = 0; i <= size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}



int main(){
    int array[] = {5,3,1,9,8,2,4,7};
    int size = sizeof(array)/sizeof(array[0]);
    display(array,size);
    int i, j, temp;
    for(i=0; i<size-1;i++) //This loop for passess.
    {
        for(j=0;j<size-i-1;j++) //This loop is for iteration.
        {
            if(array[j]>array[j+1])
            {
            temp = array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
            }
        }
    }
    display(array,size);
    return 0;
}
