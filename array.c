// #include<stdio.h>
// int main()
// {
//     int n,r,l;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("enter the rotation");
//     scanf("%d",&r);
//     for(int i=1;i<=r;i++)
//     {
//         l=arr[n-1];
//         for(int i=n-1;i>0;i--)
//         {
//             arr[i]=arr[i-1];
//         }
//         arr[0]=l;
//     }
//      for(int i=0;i<n;i++)
//     {
//         printf("%d",arr[i]);
//     }
// }
#include<stdio.h>
int main()
{
    int n1,n2;
    scanf("%d",&n1);
    int arr1[n1];
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int arr2[n2];
    int mer[n1+n2];
    scanf("%d",&n2);
    for (int i = 0; i < n2; i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n1;i++)
    {
        mer[i]=arr1[i];
    }
     for(int i=0;i<n1+n2;i++)
    {
        mer[n1+i]=arr2[i];
    }
     for(int i=0;i<n1+n2;i++)
    {
        printf("%d",mer[i]);
    }

}