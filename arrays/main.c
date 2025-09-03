#include <stdio.h>
int main(){
// automated accessing
// exercise number 2
int myarray[] = {1,2,3,4,5}; // my array
int arr = sizeof(myarray)/ sizeof(myarray[0]); // accessing all at once
for (int i=0 ; i< arr; i++){ // looping to access them
    printf("%d\t", myarray[i]);

}
printf("\n"); // space between the automatic  and the manual
separator();
second();
return 0;


}
// manual accessing
// exercise number 1
void second(){
int myarray[] = {1,2,3,4,5};
printf("\n");
 // declaring a array
printf("%d\n",myarray[0]);
printf("%d\n",myarray[1]);
printf("%d\n",myarray[2]);
printf("%d\n",myarray[3]);
printf("%d\n",myarray[4]);
}

void separator(){
printf("accessing in a menuall way");

}
