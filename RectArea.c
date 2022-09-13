/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int len;
int wid;
int area;
int rectArea(int len, int wid){
// Returns the multiple of the two integers
    area=len*wid;
}

int main() {
    
    printf("Enter the rectangle's length: ");
    scanf("%d", &len);
    printf("Enter the rectangle's width: ");
    scanf("%d", &wid);
    
    printf("The rectangle's area is %d\n", rectArea(len,wid));
    return 0;
    
}
    
    
