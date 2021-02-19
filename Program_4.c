//Write a program in C to find the sum of all elements of the array. 
//Input the number of elements to be stored in the array :3
//Input 3 elements in the array :
//2 5 8
//Expected Output:
//Sum of all elements stored in the array is : 15
#include <stdio.h>
int main()
{
  //Declare all the variables[N, array a(1D array), i, sum=0] used in the code
  //Read the Value of array size N using scanf statement
  //Read the array elements using for loop and scanf statment
  // DO the addition of array elements and store the final result in variable sum
  //Print the sum of array elements which is stored in variable sum using printf statement
  int a[100],i,n,sum=0;
  printf("Enter size of the array");
  scanf("%d",&n);
  printf("Enter elements of the array ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      sum+=a[i];
    }
    printf("Sum of the array is :%d",sum);
  return 0;
}
