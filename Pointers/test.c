#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char **argv)
{
    int arr[] = {3, 7, 5};
    int *p = arr;

    /*      Case 1: Derefernce Pointer Same, Value Change   
    
    printf("%p", p); //mem addr of 3
    printf("\n");
    int y = (*p)++; // 3

    printf("%d", y);
    printf("\n");
    printf("%p", p);

    printf("\n");
    printf("%d", arr[0]); //4
*/

    /*
    //   Case 2 Post Increment, Pointer Change, Value stay

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
}
*/

    //Case 3 Pre Increment,
    // int arr [] = {3,7,5};
    // int *p = arr;
    /*
    printf("%p", p); //mem addr of 3
    printf("\n");
    int y = *(p + 1); // increment address

    printf("%d", y); //5
    printf("\n");
    printf("%p", p); //mem address of 5

    printf("\n");
    printf("%d", arr[0]); //5
*/
    char greeting[] = "hi";
    printf("%s", greeting);
}