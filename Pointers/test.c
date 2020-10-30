#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void swap(int *pos1, int *pos2); //method declaration for swap method
void pointerIncrement(int **pointer);

int main(int argc, char **argv)
{
    //Case 1: Derefernce Pointer Same, Value Change

    /*    
    int arr[] = {3, 7, 5};
    int *p = arr;
    printf("%p", p); //mem addr of 3
    printf("\n");
    int y = (*p)++; // 3

    printf("%d", y);
    printf("\n");
    printf("%p", p);

    printf("\n");
    printf("%d", arr[0]); //4
    */

    //   Case 2 Post Increment, Pointer Change, Value stay

    /*
    //int arr[] = {3, 7, 5};
    //int *p = arr;

    printf("%p", p); //mem addr of 3
    printf("\n");
    int y = *p++; // increment address

    printf("%d", y); //3
    printf("\n");
    printf("%p", p);

    printf("\n");
    printf("%d", arr[0]); //3

    */

    //Case 3 Pre Increment

    /*
    int arr [] = {3,7,5};
    int *p = arr;
    
    printf("%p", p); //mem addr of 3
    printf("\n");
    int y = *(p + 1); // increment address

    printf("%d", y); //5
    printf("\n");
    printf("%p", p); //mem address of 5

    printf("\n");
    printf("%d", arr[0]); //5
*/

    //Case 4 Swap Method

    /*
    int arr1[] = {2, 3};
    printf("%d %d \n", arr1[0], arr1[1]); //prints 2, 3
    swap(arr1, (arr1 + 1));
    printf("%d %d \n", arr1[0], arr1[1]); //prints 3, 2
    */

    //Case 5 Increment Pointer through Double Pointer

    /*
    int arr2[] = {2, 5};
    int *arr2P = arr2;
    printf("%p %d \n", arr2P, *arr2P);
    pointerIncrement(&arr2P);
    printf("%p %d", arr2P, *arr2P);
    */
}

void swap(int *pos1, int *pos2)
{
    int temp = *pos1;
    *pos1 = *pos2;
    *pos2 = temp;
}
void pointerIncrement(int **pointer)
{
    *pointer = *pointer + 1;
}