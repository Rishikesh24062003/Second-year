#include <stdio.h>

int main()
{
    int arr[4]={1,5,3,8};
    int i;  
    //    printf("\n\nRead and Print elements of an array:\n");	
  
    // printf("Input 10 elements in the array :\n");  
    // for(i=0; i<10; i++)  
    // {  
	//     printf("element - %d : ",i);
    //     scanf("%d", &arr[i]);  
    // }  
    int counter=1;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++){
            if(arr[j]<arr[i])
          {  int temp;
            temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]= temp;
          }
        }
    }
  for(i=0; i<4; i++)  
    {  
          printf("%d  ", arr[i]);
    } 
    printf("\n");	
return 0;
}