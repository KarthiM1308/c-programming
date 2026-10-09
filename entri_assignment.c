
//Odd Or Even Number

//#include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     if(n%2==0){
//         printf("Even");
//     }
//     else{
//         printf("Odd");
//     }
// }


//Prime Number

// #include<stdio.h>
// int main(){
//     int n,f=0;
//     scanf("%d",&n);
//     if(n<2){
//         printf("Not Prime");
//     }
//     else{
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             f=1;
//             break;
//         }
//     }
//     if(f==0){
//         printf("Prime");
//     }
//     else{
//         printf("Not Prime");
//     }
// }     
// }


// Factorial
// #include<stdio.h>
// int main(){
//    int n;
//    scanf("%d",&n);
//    int f=1;
//     for(int i=1;i<=n;i++){
//         f=f*i;
//     }
    
// printf("%d",f);
// }


// Fibonacci Series
// #include<stdio.h>
// int main(){
// int n,a=0,b=1,c=0;
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
// printf("%d",c);
// a=b;b=c;
// c=a+b;
// }
// }


// perfect Number

// #include<stdio.h>
// int pf(int n){
//     int sum=0;
//     for(int i=1;i<n;i++){
//         if(n%i==0){
//             sum+=i;
//         }
//     }
//     return sum;
// }
// int main(){
//     int n,sum;
//     scanf("%d",&n);
//     sum=pf(n);
//     if(n==sum){
//         printf("Perfect Number");
//     }
//     else{
//         printf("Not Perfect Number");
//     }


// }

//Gcd


// #include <stdio.h>

// int gcd(int a, int b)
// {
//     if (b == 0)
//     {
//         return a;
//     }

//     return gcd(b, a % b);
// }

// int main()
// {
//     int a, b;


//     scanf("%d %d", &a, &b);

//     printf("GCD = %d", gcd(a, b));

//     return 0;
// }


// 

// Frequency of Digits in a Number

// #include <stdio.h>

// void countFrequency(int n, int freq[])
// {
//     if (n == 0)
//     {
//         freq[0]++;
//         return;
//     }

//     while (n > 0)
//     {
//         int digit = n % 10;
//         freq[digit]++;
//         n = n / 10;
//     }
// }

// int main()
// {
//     int n;
//     int freq[10] = {0};

//     printf("Enter an integer: ");
//     scanf("%d", &n);

//     countFrequency(n, freq);

//     printf("Digit Frequency:\n");

//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d = %d\n", i, freq[i]);
//     }

//     return 0;
// }



