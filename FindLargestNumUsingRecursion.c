#include <stdio.h>

int maximum (int list[], int n)
{
    int largest = list[n];

    for (int i = 1; i < n; i++)
    {
        if (list[i] > largest)
            largest = list[i];
    }
    return largest;
}
 
int main (){
  
int n;
n=10;
int list[n];

printf ("Enter length of array: ");
scanf ("%d", &n);
for (int i = 0; i < n; i++){
    printf ("Enter an integer: ");
    scanf ("%d", &list[i]);
} 
printf ("The maximum is %d\n", maximum (list, n));
return 0;
}
