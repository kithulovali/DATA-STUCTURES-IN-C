#include <stdio.h>
int main()
{
    int arr[] = {1 ,33,45,67,89,90,23,67};
    int myarr = sizeof(arr)/ sizeof(arr[0]);
    int largest = arr[0], lowest = arr[0];


    for(int i = 1; i < myarr; i++){
        if (arr[i] > largest){
             largest= arr[i]  ;
        }
        if (arr[i] < lowest ){
            lowest = arr[i] ;
        }
    }
    printf("Largest = %d\n", largest);
    printf("Lowest = %d\n", lowest);

 return 0 ;
}
