#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int myarr = sizeof(arr)/ sizeof(arr[0]);
    int sum ;
    for (int i=0 ; i < myarr ; i++){
        sum +=arr[i] ;
    }
    printf("%d",sum);
    return 0;
}
