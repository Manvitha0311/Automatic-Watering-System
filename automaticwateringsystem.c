#include <stdio.h>  
#include<time.h> 
void delay(int x)
{ 
    clock_t start = clock();  
    while ((float)(clock() - start) / CLOCKS_PER_SEC < x); 
    return;  
} 
int main ()
{ 
    int water, time;  
    printf("Enter amount of water to be sprayed: \n");  
    scanf("%d", &water);  
    printf("Enter amount of time between sprays in seconds: \n");  
    scanf("%d", &time);  
    printf("Do you want to run infinitely if Yes Enter 1 otherwise Enter 0: \n");  
    int ch;  
    scanf("%d", &ch);  
    if (ch == 0)
    {  
	   int n; 
       printf("Enter number of times do you want to spray: \n");  
       scanf("%d", &n); 
       while (n--)
	   {  
	       delay(time); 
           printf("Watered: %d \n", water);  
       } 
    }  
	else
    {
       while (true)
	   {  
	      delay(time);  
          printf("Watered: %d \n", water);  
       }
    } 
return 0; 
} 

