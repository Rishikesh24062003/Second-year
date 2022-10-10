# include<stdio.h>
#include<conio.h>

void main()
{
int arr[50],n,i,item;
printf("How many elements you want to enter in the array : ");
scanf("%d",&n);

for(i=0; i < n; i++)
{
printf("\nEnter element %d : ",i+1);
scanf("%d", &arr[i]);
}
printf("\nEnter the element to be searched : ");
scanf("%d",&item);

for( i=0; i < n; i++)
{
if(item == arr[i])
{
printf("\n%d found at position %d\n",item,i+1);
break;
}
}
if(i == n)
printf("\nItem %d not found in array\n",item);
}