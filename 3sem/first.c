// int main(){
// # include<stdio.h>
//     printf("enter s:");
//     scanf("%d",&s);
//     float m;
//     int s;
//     printf("enter the m :");
//     scanf("%f",&m);
//    if(s>6&m>50.5){
//         printf("eligible");
//     }
//     else if(s>6&m<50.5){
//         printf("try again");
//     }
//     else{
//         printf("not");
//     }
// to swap
// # include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     int b;
//     scanf("%d",&b);
//     printf("%d",a,b);
//     a=a-b;
//     b=a+b;
//     a=b-a;
//     printf("%d",a,b);
//     return 0;
// }


// You are using GCC
// # include<stdio.h>
// int main(){
//     int a;
//     int b;
//     char c;
//     printf("enter the values of a:");
//     scanf("%d",&a);
//     printf("\nenter the value of b:");
//     scanf("%d",&b);
//     printf("\nenter operation to perform:");
//     scanf("%c",&c);
//     switch(c){
//         case '+':
//         printf("%d",a+b);
//         break;
//         case '*':
//         printf("%d",a*b);
//         break;
//         case '%':
//         printf("%d",a%b);
//         break;
//         case '-':
//         int d;
//         d=a-b;
//         printf("%d",d);
//         break;
//         case '/':
//         printf("%d",a/b);
//         break;
    
//     }
// return 0;
// }
// You are using GCC
// # include<stdio.h>
// int main(){
//     int num1,num2;
//     char charc;
//     scanf("%d %d %c",&num1,&num2,&charc);
//     // scanf("%c",&charc);
//     switch(charc){
//         case'+':
//         printf("%d",num1+num2);
//         break;
//         case'-':
//         printf("%d",num1-num2);
//         break;
//         case'*':
//         printf("%d",num1*num2);
//         break;
//         default:
//         printf("INVALID");
//     }
//     return 0;
// }
// # include<stdio.h>
// int main(){
//     int n;
//     printf("enter the value of n ");
//     scanf("%d",&n);
//     int i=0;
//     while(n!=i){
//         i=i+1;
//         printf("%d",i);
        
//     }
//     return 0;
    
// }
// # include<stdio.h>
// int main(){
    // int n1;
    // int n2;
    // printf("enter the value of n1 and n2");
    // scanf("%d",&n1);
    // scanf("%d",&n2);
    // int i=1;
    // while(i<=n2){
    //     n1=n1+i;
    //     i=i+1;
    
        
    // }
    // printf("%d",n1);
    // int i=1


// factorial of a number;
// # include<stdio.h>
// # include<math.h>
// int main(){
    // int num;
    // printf("enter the value:");
    // scanf("%d",&num);
    // int q=0;
    // int rem;
    // int temp=0;
    // int og;
    // og=num;
    // while(og>0){
        // rem=og%10;
        // temp=temp+1;
        // og=og/10;
    // }
    // og=num;
    // while(og>0){
        // rem=og%10;
        // q=q+pow(rem,temp);
        // q=q+(rem**temp);
        // og=og/10;
    // }
    // if(num==q){
        // printf("true");
    // }
    // sum=sum+q;
    // 
    // printf("%d",q);
    // return 0;
// }
// You are using GCC
// # include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int check;
//     int rem=0;
//     int q;
//     int og;
//     og=n;
//     while(og>0){
//         check=og%10;
//         rem=rem*10+check;
//         og=og/10;
        
        
//     }
//     if(n==rem){
//         printf("Palindrome");
//     }
//     else{
//         printf("Not a Palindrome");
//     }
// }
// FIBONACCI SERIESS
// # include<stdio.h>
// int main(){
    
//     int n,n1=0,n2=1,n3;
//     scanf("%d",&n);
//     while(n1<n){
//         printf("%d",n1);
//         n3=n1+n2;
//         n1=n2;
//         n2=n3;
//     }   
//     return 0;
// }
// You are using GCC
// # include<stdio.h>
// int main(){
//     int n;
//     printf("enter the value of :");
//     scanf("%d",&n);
//     int i=0;
//     int sum=0;
//     do{
//         i++;
//         sum=sum+i;
//         // i++;
        
//     }while(i<n);
//     printf("%d",sum);
//     return 0;
// }
// # include<stdio.h>
// int main(){
//     int i=5,x,sum=0;
//     printf("enterr the value of x:");
//     scanf("%d",&x);
//     do{
//         if(i%5==0){
//             sum=sum+i;
//         }
//         i++;
        
//     }while(i<=x);
//     printf("%d",sum);
//     return 0;
// }
// # include<stdio.h.>
// int main(){
//     long long int n;
//     int factorial=1;
//     printf("enter the value of n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         factorial=factorial*i;
        
//     }
//     printf("%d",factorial);
//     return 0;
// }
// check the number is prime or not
// # include<stdio.h>
// int main(){
// int n=10,status=0;
// for(int i=2;i<=n/2;i++){
    // if(n%i==0){
        // status=1;
        // break;
// 
    // }
// }
// if(status==0){
    // printf("prime");
// }
// else{
    // printf("not prime");
// }
    // return 0;
// }


// }
// # include<stdio.h>
// int main(){
//     int a,b;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     int sum=0;
//     for(int i;i{
//         if(a%2!=0){
//             sum=sum+a;
//             a++;
//             continue;
     
//         // a++;
//         } 
//     }
//     printf("%d",sum);
//     return 0;    

    
// }
// # include<stdio.h>
// int main(){
//     int i=1,n,t1=-1,t2=1,nextterm;
//     scanf("%d",&n);
//     while(i<=n){
//         nextterm=t1+t2;
//         printf("%d ",nextterm);
//         t1=t2;
//         t2=nextterm;
//         i++;
//     }
//     return 0;
// }
// # include<stdio.h>
// int main(){
//     int n=50,status=0;
//     for(int i=2;i<=n/2;i++){
//         if(n%i==0){
//             status=1;
//             break;
//         }
//     if(status==0){
//         printf("prime");
//     }
//     else{
//         printf("not prime");
//     }
        
//     }
//     return 0;
// }
// You are using GCC
// # include<stdio.h>
// int main(){
    // long long int n;
    // scanf("%lld",&n);
    // int rem;
    // int q;
    // int check;
    // int og;
    // int fact;
    // int sum=0;
    // int i;
    // og=n;
    // while(og)
    // while(og!=0){
        // rem=og%10;
        // fact=1;
        // i=1;
        // while(i<=rem){
            // fact=rem;
            // fact=fact*i;
            // i++;
        // }
        // sum=sum+fact;
        // og=og/10;
            // 
            // 
        // }
        // if(sum==n){
            // printf("Strong number");
            // 
        // }
        // else{
            // printf("Not a strong number");
        // }
        // 
    // 
    // return 0;
// }
// perfect number
// # include<stdio.h>
// int main(){
//     int a;  
//     scanf("%d",&a);
//     int sum=0;
//     for(int i=1;i<a;i++){
//         if(a%i==0){
//             sum=sum+i;
//         }

//     }
// if(sum==a){
//     printf("perfect");
// }
// else{
//     printf("not");
// }

//     return 0;
// }
// #include<stdio.h>

// int main() {
//     int a;
//     scanf("%d", &a);
//     int sum = 0;

//     for (int i = 1; i < a; i++) {
//         if (a % i == 0) {
//             sum += i;
//         }
//     }

//     if (sum == a) {
//         printf("perfect");
//     } else {
//         printf("not");
//     }

//     return 0;
// }


// // }
// # include<stdio.h>
// int main(){
    // int a;
    // scanf("%d",&a);
    // for(int i=1;i<=a;i++){
        // if(a%i==0){
// 
        // }
    // }
// }
// 
// # include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     if(n%3==0){
//         printf("%d is multiple of 3",n);
//     }
//     else{
//         printf("not");
//     }
//     return 0;
    
    
// }
// # include<stdio.h>
// int main(){
    // int n;
    // int og;
    // printf("enter the number");
    // scanf("%d",&n);
    // og=n;
    // while(og%2==0){k
        // og=og/2;
    // }
    // if(og==1){
        // printf("power");
    // }
    // else{
        // printf("not");
    // }
    // return 0;
// }
// # include<stdio.h>
// # include<math.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int side;
//     int tiles;
//     // int a;/
//     side=(int)sqrt(n);
//     tiles=n%side;
//     if(tiles==0){
//         printf("%d",side);
//     }else{
//         printf("%d",tiles+1);
//     }
//     return 0;
// }
// #include<stdio.h>

// int main(){
//     int in_hours, in_minutes, out_hours, out_minutes, total_min;
//     char vehicle;

//     scanf(" %c", &vehicle);
//     scanf("%d %d", &in_hours, &in_minutes);
//     scanf("%d %d", &out_hours, &out_minutes);

//     total_min = (out_hours-in_hours)*60+(out_minutes-in_minutes);

//     if (total_min <= 10) {
//         printf("Parking Duration: %d\n", total_min);
//         printf("Parking Charge: 0");
//     } else if (total_min <= 120 && vehicle == 'T') {
//         printf("Parking Duration: %d\n", total_min);
//         printf("Parking Charge: 20");
//     } else if (total_min > 120 && vehicle == 'T') {
//         int add = 20 + 10;
//         printf("Parking Duration: %d\n", total_min);
//         printf("Parking Charge: %d", add);
//     } else if (total_min <= 120 && vehicle == 'F') {
//         printf("Parking Duration: %d\n", total_min);
//         printf("Parking Charge: 40");
//     } else {
//         int add = 40 + 20;
//         printf("Parking Duration: %d\n", total_min);
//         printf("Parking Charge: %d", add);
//     }

//     return 0;
// }
// int main(){
//     char vehicle;
//     int in_hours,in_minutes,out_hours,out_minutes,total_min;
//     scanf(" %c",&vehicle);
//     scanf("%d:%d",&in_hours,&in_minutes);
//     scanf("%d:%d",&out_hours,&out_minutes);
//     total_min=(out_hours-in_hours)*60+(out_minutes-in_minutes);
//     printf("Parking Duration: %d:%dminutes\n",out_hours-in_hours,out_minutes-in_minutes);
//     if(total_min<=10){
//         printf("Parking chrage:Free\n");

//     }else{
//         int base_charge=(vehicle=='T')?20:40;
//         int additional_hours=(total_min-120)/60;
//         int total_charge=base_charge+additional_hours*((vehicle=='T')?10:20);
//         printf("Parking charges: Rs%d\n",total_charge);

//     }
//     return 0;

// }
// #include <stdio.h>
// #include <math.h>

// int main(){
//     char vehicle;
//     int in_hours, in_minutes, out_hours, out_minutes, total_min;
//     scanf(" %c", &vehicle);
//     scanf("%d:%d", &in_hours, &in_minutes);
//     scanf("%d:%d", &out_hours, &out_minutes);

//     total_min = (out_hours - in_hours) * 60 + (out_minutes - in_minutes);

//     printf("Parking Duration: %d:%d minutes\n",total_min/60,total_min%60);

//     if (total_min <= 10) {
//         printf("Parking charge: Free\n");
//     } else {
//         int base_charge = (vehicle == 'T') ? 20 : 40;
//         int additional_hours = (int)ceil((float)(total_min / 60)-2);
//         int total_charge = base_charge + additional_hours * ((vehicle == 'T') ? 10 : 20);

//         printf("Parking charges: Rs%d\n", total_charge);
//     }

//     return 0;
// }
// print table of number till n;
// print right angle triangle of star "*";
// You are using GCC
# include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             printf("%d",j);               //change the number as of star for table 
            
//         }
//         printf(" \n");
//     }
//     return 0;
// }
// int main(){
//     int a=0;
//     int b;
//     // int status=0;
//     for(int i=11;i<100;i++){
//         int status=0;
//         for(int j=2;j<=i/2;j++){
//             int rem;
//             // int status=0;
//             rem=i%j;
//             if(rem==0){
//                 status=1;
//                 // printf("%d",i);
//                 break;
//             }
//         }
//             if(status==0){
//                 a++;

//             }
//         }
//     printf("\n total are%d",a);
//     return 0;
//     // if()/
// }
// #include <stdio.h>
// #include <math.h>

// int main() {
//     int a = 0; // Initialize a
//     int status;

//     for (int i = 11; i < 100; i++) { // Exclude 10 and 100 from the loop
//         status = 0; // Reset status for each iteration

//         for (int j = 2; j <= i/2; j++) {
//             int rem = i % j;
//             if (rem == 0) {
//                 status = 1;
//                 break;
//             }
//         }

//         if (status == 0) {
//             a++;
//         }
//     }

//     printf("\nTotal prime numbers between 10 and 100 are %d\n", a);
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int N;
//     scanf("%d", &N);
//     int count = 0;
//     for (int i = 1; i * i <= N; i++) {
//         count++;
//     }
//     printf("%d", count);
//     return 0;
// }
// # include<stdio.h>
// int main(){
//     int n,n1;
//     scanf("%d",&n);
//     scanf("%d",&n1);
//     n||n1?printf("network is stable."):printf("network is unstable.");
//     return 0;
// }
// # include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int z;
//     z=(n*(n-1))/2;
//     printf("%d",z);
//     return 0;
// }
// # include<stdio.h>
// int main(){
//     int miles,gas,parking,toll;
//     double average;
//     scanf("%d",&miles);
//     scanf("%d",&gas);
//     scanf("%lf",&average);
//     scanf("%d",&parking);
//     scanf("%d",&toll);
//     double total;
//     total=(miles/average)*gas+parking+toll;
//     printf("%.2lf",total);
//     return 0;
// }
// # include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     if(n>=10&&n<=100&&n%7!=0){
//         printf("Unlock Next Level");
//     }
//     else{
//         printf("Level Locked");
//     }
// }
// You are using GCC
// # include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a=n&7;
//     printf("%d",a);
//     return 0;
// 
// # include<stdio.h>
// // scanf("%d",&a)/
// // print("%d",a)
// if
// int l,r,x;
// int rem;
// for(int l=10;l<=r;l++){
    
// }
# include<stdio.h>
// int main(){
//     // printf("%d",10/5);/
    // int n=10;
    // scanf("%d",&n);/
//     if(n%4>=2){
//         printf("true")
//     }
//     else{
//         printf("false")
// /
// /     }
// }
// n%4>=2?printf("True"):printf("falser");
// while(n>5){
//     printf("nitin");
//     n--;
// }
// printf("ram");
// return 0;
// char a;
// int a=65;
// int b=90;
// char z;
// scanf("%d",&n);
// while(a<=b){
    // printf(" %c",31);
    // a++;
// }
// return 0;
// }
// char c;
// scanf("%c",&c);
// int a=("%d",c);
// if(a>=97&&)
// printf("%d",a);
// int a=1;
// scanf("%d",a);

// printf("%d",a);
// while (a<=10);
// {if (a%3==0);
// a++;
// }


// }
// int l,r,x;
// scanf("%d %d",&l,&r);
// scanf("%d",&x);
// int count=0;
// int rem;
// int temp=l;
// while(l<=r){
//     // int rem;
//     // int temp=l;
//     rem=l%10;
//     if(rem==x){
//         count++;
//         // l++;
//     }
//     l++;
// }
//     printf("%d",count);
//     return 0;

// }
#include <stdio.h>

// int main() {
//     int l, r, x;
//     scanf("%d %d", &l, &r);
//     scanf("%d", &x);

//     int count = 0;
//     int rem;
//     int temp = l;

//     while (l < r) {
//         rem = l % 10;
//         if (rem == x) {
//             count++;
//         }
//         rem=rem/10;
//         l++;
//     }

//     printf("%d", count);
//     return 0;
// // }
// int main(){
//     int a=1;
//     int b=10;
//     while(a<b){
//         if(a%3==0){
//             printf("%d",a);
//         }
//         a++;
//     }
//     return 0;
// }
// int main(){
//     int a=1;
//     int n;
//     scanf("%d",&n);
//     int sum=0;
//     while(a<=n){

//         sum=sum+a;

//     }

// }
//   int main(){
//     int n=2;
//     int b;
//     while(n<b)
//     {
//         printf("%d",b*2);
//         n--;
//     }
//   }
// int main(){
//     int a=5;
//     int b=1;
//     while(b<10){
//         printf(" %d",a);
//         a=a+10;
//         b++;
//     }
//     return 0;
// }
// # include<stdio.h>
// void product();
// int main(){
//     printf("enter the value of a and b");
//     product();
//     return 0;
// }
//  void product(){  
//     int a,b;
//     scanf("%d %d",&a,&b);
//     printf("%d",a*b);
    
// }
// # include<stdio.h>
// int product(int x,int y);
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     product(a,b);
    
// }
// int product(int x,int y){
//     // int x,y;
//     printf("%d",x*y);
    
// }
// # include<stdio.h>
// int product();
// int main(){
//     int x,y;
//     scanf("%d %d",&x,&y);
//     int z=x*y;
//     product(z);
// }
// int product(z){
//     printf("%d",z);
// }
// # include<stdio.h>
// int product();
// int main(){
//     int x,y;
//     scanf("%d %d",x,y);
//     int result=x*y;
//     return result;
// }
// int product(){
//     printf(re)
// }
// to count no of occurence of x in range of this
// # include<stdio.h>
// int main(){
//     int l,r,x;
//     scanf("%d %d %d",&l,&r,&x);
//     int rem,temp,count=0;
//     for(int i=l+1;i<r;i++){
//         temp=i;
//         while(temp!=0){
//             rem=temp%10;
//             if(rem==x){
//                 count++;
//             }
//             temp=temp/10;
//         }
        
//     }
//     printf("%d",count);
//     return 0;
// }


// # while
#include <stdio.h>
// int main(){
//     int n;
//     int i=1;

//     while(i<=10){
//         printf("%d\n",3 * i);
//         i++;
//     }

// }
// int main(){
//     int m;
//     int n;
//     int count=0;
//     scanf("%d %d", &m,&n);
//     while(m<=n){
//         if(m%2==0){
//             count++;
        
//         }
//         m++;
//     }
// printf(" %d",coun
// # include<stdio.h>
// int main(){
//     int n=50;
//     int i=2,status=0;
//     while(i<=n/2){
//         if(n%2==0){
//             status=1;
//         }
//         i++;
//     }
//     if(status==1){
//         printf("not");
//     }
//     else{
//         printf("prime");
//     }
// }
//convert lower to upper and upper  to lower
// # include<stdio.h>
// int main(){
//     char c;
//     scanf("%c",&c);
//     int a=("%d",c);
//     if(a>=65&&a<=90){
//         printf("your charcter is in uppercase");
//         int output=a+32;
//         printf("\n%c",output);

//     }
//     else{
//         printf("your cxharcter is in lower case");
//         int output=a-32;
//         printf("\n%c",output);
//     }

// }
// armstrong number
// # include<stdio.h>
// # include<math.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int temp;
//     int rem,q=0,count=0;
//     temp=n;
//     while(temp!=0){
//         temp=temp/10;
//         count++;
//     }
//     temp=n;
//     while(temp!=0){
//         // int q=0;
//         rem=temp%10;
//         q=q+pow(rem,count);
//         temp=temp/10;
//     }
//     if(n==q){
//         printf("armstrong number");
//     }
//     else{
//         printf("not");
//     }
//     return 0;
// }
// # include<stdio.h>
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     for(int i=a;i<=b;i++){
//         int status=0;
//         for(int j=2;j<=i/2;j++){
//             if(i%j==0){
//                 status=1;
//                 break;
//             }
            
//         }
//         if(status==0){
//             printf("\n%d",i);
//         }

//     }
// }
// # include<stdio.h>
// int main(){
//     double n;
//     double n1;
//     double n2;
//     scanf("%lf",&n);
//     scanf("%lf",&n1);
//     if(n1<500){
//         n2=n1*10/100;
//         printf("%lf",n2);
//         n2>n?printf("travel"):printf("not");

//     }
//     else if(n1>1000 && n1<5000){
//         n2=n1*15/100;
//         printf("%lf",n2);
//         n2>n?printf("Travel"):printf("not");

//     }
//     else{
//         n2=n1*20/100;
//         printf("%lf",n2);
//         n2>n?printf("travel"):printf("not");
//     }
//     return 0;
// // }
// #include<stdio.h>
// long long int factorial(int*);
// int main()
// {
// int n;
// long long int result;
// printf("\n Enter number:");
// scanf("%d",&n);
// result=factorial(&n);
// printf("\n Factorial is:%lld",result);
// return 0;
// }
// long long int factorial(int *x)
// {
// long long int fact=1;
// int i;
// if(*x==0)
// {
// return 1;
// }
// else
// {
// for(i=1;i<=*x;i++)
// {
// fact=fact*i;
// }
// return fact;
// }
// }
// # include<stdio.h>
// int main(){
    // You are using GCC
// # include<stdio.h>
// # include<stdio.h>
// double findmax(double,double,double);
// int main(){
//     double a,b,c;
//     scanf("%lf %lf %lf",&a,&b,&c);
//     findmax(a,b,c);
// }
// double findmax(double x,double y,double z){
//     if(x>y&&x>z){
//         printf("x is greatest");
//     }
//     else if(y>x&&y>z){
//         printf("y is greatest");
//     }
//     else{
//         printf("z is gretest");
//     }

// }
// #include<stdio.h>
// int main()
// {
// int *p,x=10;
// p=&x;
// printf("%u",*p);
// printf("\n%u",p);
// printf("\n%u",x);
// printf("\n%u",&x);
// }
// using call by refernce print even
// void even(int*,int*);
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     even(&a,&b);
//     // printf("%d",result);
//     return 0;
// }
// void even(int*a,int*b){
//     for(int i=*a;i<=*b;i++){
//         if(i%2==0){
//             printf("%d",i);
//         }
//     }
// }
// void number(int*,int*);
// int main(){
    // int a,b;
    // scanf("%d %d",&a,&b);
    // number(&a,&b);
    // return 0;
// }
// void number(int*a,int*b){
    // for(int i=*a;i<=*b;i++){
        // if(i%3==0||i%5==0){
            // printf("%d",i);
        // }
    // }
// // }
// # include<math.h>
// int total(int);
// int main(){
//     int n,result;
//     scanf("%d",&n);
//     result=total(n);
//     printf("%d",result);
// }
// int total(int b){
//     int tt=0;
//     int c=2;
//     for(int i=1;i<=b;i++){
//     int th=(i*(i+1))/2;
//     tt=tt+pow(th,c);
//     }

    
//     return tt;
// }
#include <stdio.h>
// #include <math.h>

// int total(int);

// int main() {
//     int n, result;
//     if (scanf("%d", &n) == 1) {
//         result = total(n);
//         printf("%d\n", result);
//     } else {
//         printf("Invalid input\n");
//     }
//     return 0;
// }

// int total(int b) {
//     int tt = 0;
//     int c = 2;
//     for (int i = 1; i <= b; i++) {
//         int th = (i * (i + 1)) / 2;
//         // int th_power = th;
//         // for (int j = 1; j < c; j++) {
//             int th_power=pow(th,c); // multiplying th by itself c-1 times to get th to the power of c
//         // }
//         tt += th_power;
//     }
//     return tt;
// }
#include <stdio.h>
// #include <math.h>

// int total(int);

// int main() {
//     int n, result;
//     if (scanf("%d", &n) == 1) {
//         result = total(n);
//         printf("%ld\n", result);
//     } else {
//         printf("Invalid input\n");
//     }
//     return 0;
// }

// int total(int b) {
//     int tt = 0;
//     int c = 2;
//     for (int i = 1; i <= b; i++) {
//         int th = (i * (i + 1)) / 2;
//         double th_power = pow(th, c); // multiplying th by itself c-1 times to get th to the power of c
//         tt += th_power;
//     }
//     return tt;
// }
// int fib(int);
// int main(){
//     int n;
//     scanf("%d",&n);
//     int result=fib(n);
//     printf("%d",result);
// }
// int fib(int b){
//     int f_0=0,f_1=1;
//     int f_2;
//     int i=0;
//     while(i<b){
//     // printf("%d",f_0);
//     f_2=f_0+f_1;
//     f_0=f_1;
//     f_1=f_2;
//     // f_0=f_0+f_1;
//     i++;

//     }
//     return f_0;



// }
// # include<math.h>
// int arm(int*);
// int main(){
//     int n;
//     scanf("%d",&n);
//     int result=arm(&n);
//     // printf("%d",result);
//     return 0;
// }
// int arm(int*b){
//     int rem,q,og=0,count=0;
//     int temp=*b;
//     while(temp!=0){
//         rem=temp%10;
//         count++;
//         temp=temp/10;
//     }
//     temp=*b;
//     while(temp!=0){
//         rem=temp%10;
//         og=og+pow(rem,count);
//         temp=temp/10;
//     }
//     if(og==*b){
//         printf("yes");
//     }
//     else{
//         printf("no");
//     }

// }
// int main(){
//     int i=0,n;
//     scanf("%d",&n);
//     while(i<n){
//         if(i%2==0){
//             for(int a=1;a<=n;a++){
//                 int status=0;
//                 for(int b=2;b<=a/2;b++){
//                     if(a%b==0){
//                         status=1;
//                         break;
//                     }
                   
//                 }
//                 if(status==0){
//                     printf("%d",a);
//                 }
//             }
//         }
//         else{
//             int f_0=0,f_1=1,j=1,f_2;
//             while(j<n){
//                 printf("%d",f_0);
//                 f_2=f_0+f_1;
//                 f_0=f_1;
//                 f_1=f_2;
//                 j++;
//             }
        
//         }
//         i++;
//     }
//     return 0;    
// }
// #include <stdio.h>

// int main() {
//     int i = 1, n;
//     scanf("%d", &n);

//     while (i < n) {
//         if (i % 2 == 0) {
//             // Generating prime numbers
//             for (int a = 1; a <= i; a++) {
//                 int status = 0;
//                 for (int b = 2; b <= a / 2; b++) {
//                     if (a % b == 0) {
//                         status = 1;
//                         break;
//                     }
//                 }
//                 if (status == 0) {
//                     printf("%d ", a);
//                 }
//             }
//         } else {
//             // Generating Fibonacci sequence
//             int f_0 = 0, f_1 = 1, f_2;
//             for (int j = 1; j <= i; j++) {
//                 printf("%d ", f_0);
//                 f_2 = f_0 + f_1;
//                 f_0 = f_1;
//                 f_1 = f_2;
//             }
//         }
//         i++;
//     }
//     return 0;
// }
// ﻿Imagine you are working on a financial application where users input various transaction amounts. As part of a data analysis feature, you need to implement a function countZeros(int n) to count the occurrences of zeros in the transaction amounts. 
// int countZeros(int);
// int main(){
//     int n,result;
//     scanf("%d",&n);
//     result=countZeros(n);
//     printf("%d",result);
//     // int temp=n;
//     // while(temp!=0){


//     }
// int countZeros(int d){
//     int temp=d,count=0;
//     while(temp!=0){
//         int rem=temp%10;
//         if(rem==0){
//             count++;
//         }
//         temp=temp/10;
//     }
//     return count;
// }
// Utilize the function called sumOfDivisors to calculate the sum of divisors for a given positive integer.



// Example: If the number is 12, the sum of its divisors would be 1+2+3+4+6+12 = 28.
// int sumD(int);
// int main(){
//     int n,result;
//     scanf("%d",&n);
//     result=sumD(n);
//     printf("%d",result);
// }
// int sumD(int b){
//     int sum=0;
//     for(int i=1;i<=b;i++){
//         if(b%i==0){
//             sum=sum+i;
//         }
//     }
//     return sum;
// }
// int duck_number(int);
// int main(){
//     int n,result;
//     scanf("%d",&n);
//     result=duck_number(n);
//     printf("%d",result);
//     return 0;
// }
// int duck_number(int d){
//     int temp=d;
//     while(temp!=0){
//         if(temp%10==0&&temp/10!=0){
//             return 1;
//         }
//         temp=temp/10;
//     }
// // }
// int alpha(int);
// int main(){
//     char a,result;
//     scanf("%c",&a);
//     alpha(a);
// }
// int alpha(int b){
//     if(b =='a'||b=='A'){
//         printf("%c",b=='A'?'Z':'z');
//     }
//     else{
//         printf("%c",b-1);
//     }


// }
// Alex is developing a fitness application that utilizes a Collatz-like sequence to gamify step goals. The program employs a static storage specifier. Implement a function collatzSequence(int num), which calculates and displays the sequence for a given number of steps. 



// The sequence is generated based on even and odd rules.

// If n is even, then n = n / 2.
// If n is odd, then n = 3*n + 1.
// Repeat the above steps, until it becomes 1.
// int step(int);
// int main(){
//     int n,result;
//     scanf("%d",&n);
//     result=step(n);
//     printf("%d",result);
// }
// int step(int a){
//     int temp=a;
//     if(temp==1){
//         return 1;
//     }
//     else if(temp%2==0){
//         return step(temp/2);
//     }
//     else{
//         return step(3*temp+1);
//     }
    
// // }
// #include <stdio.h>
// // 
// int step(int);
// // 
// int main() {
//     int n, result;
//     scanf("%d", &n);
//     result = step(n);
//     // printf("%d", result);
//     return 0;
// }
// // 
// int step(int a) {
//     printf(" %d",a);
//     if (a == 1) {
//         return 1;
//     } else if (a % 2 == 0) {
//         step(a / 2);
//     } else {
//         step(3 * a + 1);
//     }    
// }
// # include<stdio.h>
// int main(){// You are using GCC
// # include<stdio.h>
// # include<stdio.h>
// int nitin(int);
// int main(){
//     int n;
//     scanf("%d",&n);
//     nitin(n);
// }
// int nitin(int a){
//     printf("%d",a);
// } 
# include<stdio.h>
// int nitin();
// int main(){
//     nitin();
// }
// int nitin(){
//         for(int i=0;i<10;i++){
//         printf("%d",i);
//     }

// }
// int main(){
// int n,fact=1;
// scanf("%d",&n);
// for(int i=n;i>1;i--){
//     fact=fact*i;
// }
// printf("%d",fact);
// return 0;
// }
// int octal(int);
// int main(){
//     int n;
//     scanf("%d",&n);
//     printf("%d",octal(n));
// }
// int octal(int a){
//     if(a==1){
//         return 1;
//     }
//     else{
//         int temp=a;
//         while(temp!=1){
//             int rem=temp%8;
//             temp=temp/8;
//             return rem+10*temp;
//         }
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int i=1;
//     int rem;
//     int temp=n;
//     int og=0;
//     while(temp!=0){
//         rem=temp%8;
//         og=og+rem*i;
//         i=i*10;
//         temp=temp/8;
//     }
//     printf("%d",og);
// }
// # include<stdio.h>
// int octal(int);
// int main(){
//     int n;
//     scanf("%d",&n);
//     printf("%d",octal(n));
// }
// int octal(int a){
//     int temp=a;
//     int og=0;
//     int i=1,rem;
//     while(temp!=0){
//         rem=temp%8;
//         og=og+rem*i;
//         i=i*10;
//         temp=temp/8;
//     }
//     return og;
// }
// int prime();
// int main(){
    // int n;
    // scanf("%d",&n);
    // prime(n);
// }
// int prime(int a){
        // for(int i=0;i<=a;i++){
            // int status=0;
            // for(int j=2;j<=i/2;j++){
                // if(i%j==0){
                    // status=1;
                    // break;
                // }
            // }
            // if(status==0){
                // printf(" %d",i);
            // }
        // }
// }
// int fact(int);
// int  main(){
//     int n;
//     scanf("%d",&n);
//     printf("%d",fact(n));

// }
// int fact(int a){
//     int i=a;
//     int fact=1;
//     while(i>=1){
//         fact=fact*i;
//         i--;
//     }
//     return fact;
// }
// int fact(int);
// int main(){
//     int n;
//     scanf("%d",&n);
//     printf("%d",fact(n));
// }
// int fact(int a){
//     if(a==1){
//         return 1;
//     }
//     else{
//         return a*fact(a-1);
//     }
// }
// int nat(int);
// int main(){
//      int a, b ,c;
//      scanf("%d",&a)
//     if (a>b &a>c)
//     {

//         printf("%d",a)
//     }
//         else if (b>a & b>c)
//         {        printf(b)
//         }
//         else{
//             printf(c);
//         }
//     }

// int main(){
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     if(a>b&&a>c){
//         printf("%d",a);
//     }
//     else if(b>a&&b>c){
//         printf("%d",b);
//     }
//     else{
//         printf("%d",c);
//     }
//     return 0;
// }
// int main(){
//     int a;
    
//     while(a<10)
//     a++;
//     {
//         printf()
//     }
// }
// int main(){
//     for(int i=0;i<=10;i++){
//         if(i%2==0){
//             printf("%d",i*2);
//         }
//     }
// }
// void even();
// int main(){
//     int n;
//     scanf("%d",&n);
//     even(n);
// }
// void even(int a){
//     int i=1;
//     while(i<=a){
//         if(i%2==0){
//         printf(" %d",i);
//     }
//         i++;
//     }
// }
// void nitin();
//     int main(){
   
//             int i;
//             int n;
//             scanf("%d %d",&i ,&n);
//             nitin(n , i);
//     }
//            void nitin( int a ,int b){
//             while (b<=a){
//                 if(b%3==0 && b%5==0){
//                     printf(" %d",b);
                    
//                 }
//                 b++;
//             }
//            }
// int main(){
//     char c;
//     scanf("%c",&c);
//     register a=c;
//     int n;
//     scanf("%d",&n);
//     printf("%c",a+n);
// }
// int main(){
//     double radius,area=0.0;
//     double *pradius=&radius,*parea=&area;
//     scanf("%lf",pradius);
//     *parea=3.14*(*pradius)*(*pradius);
//     printf("%lf",&parea);
//     return 0;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int temp=n,rem,sum=0;
//     while(temp!=0){
//         rem=temp%10;
//         sum=sum+rem;
//         temp=temp/10;
//     }
//     printf("%d",sum);
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int temp,rem,og,q,count=0;
//     temp=n;
//     while(temp!=0){
//         rem=temp%10;
//         if(rem==0){
//             count++;
//         }
//         temp=temp/10;
//     } 
//     printf("%d",count);
// }

// # include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//         printf("%d",a[i]);
//     }
    // for(int i=0;i<n;i++){
    //     printf("%d",a[i]);
    // }
    
// }
// # include<stdio.h>
// int main(){
    // int n;
    // scanf("%d",&n);
    // int a=2;
    // for(int i=1;i<=n;i++){
        // 
        // printf("\n%d",a);
        // a=a*2;
    // }
// }
// # include<stdio.h>
// int main(){
//     int v=1;
//     for(char i='a';i<='z';i++){
//         if(v%2!=0){
//             printf("%c",i);
//         }
//         else{
//             if(i>='a'&&i<='z'){
//                printf("%c",i-32); 
//             }  
//         }
//         v++;
//     }
// }
// linear search linear search linear search linear search linear search linear searcvh
// # include<stdio.h>
// int main(){
//     int n,loc=-1;
//     scanf("%d",&n);
//     int a[n];
//     int x;
//     scanf("%d",&x);
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<n;i++){
//         if(a[i]==x){
//             loc=i;
//         }
//     }
//     if(loc!=-1){
//         printf("Position %d",loc+1);
//     }
//     else{
//         printf("'Not found");
//     }
// }
// binary search binary search binary search binaryu search binary search
// # include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     int key,loc=-1,beg,mid,last;
//     scanf("%d",&key);
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     beg=0,last=n;
//     while(beg<=last){
//         mid=last+beg/2;
//         if(a[mid]==key){
//             loc=mid;
//             break;
//         }
//         else if(key<a[mid]){
//             last=mid-1;
//         }
//         else{
//             beg=mid+1;
//         }
//     }
//     if(loc!=-1){
//         printf("Found %d",loc);
//     }
//     else{
//         printf("Not Found");
//     }
// }
// binary search to search a almost same number given 
// # include<stdio.h>
// int main(){
    // int n;
    // scanf("%d",&n);
    // int a[n];
    // for(int i=0;i<n;i++){
        // scanf("%d",&a[i]);
    // }
    // int key,beg,last,mid,loc;
    // scanf("%d",&key);
    // beg=0,last=n;
    // mid=beg+last/2;
    // while(beg<=last){
        // if(a[mid]==key){
            // loc=key;
        // }
        // else if(a[mid-1]>)
        // 
    // }
// }
// heo, an aspiring mathematician, has presented you with a challenge. He wants you to create a program that calculates the absolute difference between the sum of two arrays.
// 
// 
// 
// Create a program to find the absolute difference between two arrays with a function named calculateArraySum and calculateAbsoluteDifference where the array is passed as an argument.
// 
// 
// 
// Input 
// 
// 10
// 
// -100 -49 -87 5 6 7 0 100 37 57
// 
// 10
// 
// -100 -75 -48 -86 -98 98 97 98 67 100
// 
// Output 
// 
// 77
// 
// Explanation
// 
// Two arrays with 10 elements each are given as input.
// The first array has elements: -100, -49, -87, 5, 6, 7, 0, 100, 37, 57, and the sum of the first array is - 24.
// The second array has elements: -100, -75, -48, -86, -98, 98, 97, 98, 67, 100, and the sum of the second array is 53.
// The absolute difference of the sum is calculated by subtracting the second array from first array |-24 - 53| = 77, and the result is printed.
//  6
// -2 5 0 8 -1 3
// 6
// 4 -3 2 7 1 6
// # include<stdio.h>
// int main(){
//     int n,m;
//     scanf("%d %d",&n,&m);
//     int a[n],b[m];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//         // scanf("%d",&b[i]);
//     }
//     for(int j=0;j<m;j++){
//         scanf("%d",&b[j]);
//     }
//     int sum=0,sum_a=0;
//     for(int i=0;i<n;i++){
//         sum=sum+a[i];
//     }
//     for(int j=0;j<m;j++){
//         sum_a=sum_a+b[j];
//     }
//     int ab=sum_a-sum;
//     if(ab<0){
//         int ac=ab;
//         int m=ab*ab+ac;
//         printf("%d",ac);
//     }
//     else{
//         printf("%d",ab);
//     }
// }
// # include<stdio.h>
// # include<stdlib.h>
// int calculatesum(int,int);
// int differnce(int *,int,int *,int);
// // int differnce(int);
// int main(){
//     int n ,m;
//     int a[n],b[m];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(int j=0;j<m;j++){
//         scanf("%d",&b[j]);
//     }
//     // calculatesum(a,n);
//     // calculatesum(b,m);
//     differnce(a,n,b,m);
//     printf("%d",differnce);

// }
// int calculate(int q[],int r){
//     int sum=0;
//     for(int i=0;i<r;i++){
//         sum=sum+q[i];
//     }
//     return sum;
// }
// int differnce(int x[],int v,int y[],int w){
//     int diff=calculatesum(x,v)-calculatesum(y,w);
//     diff=abs(diff);
//     return diff;
// }
// # include<stdio.h>
// struct student{
    // int roll;
    // int marks;
// };
// int main(){
    // student s1,s2;
    // s1.roll=1;
    // s1.marks=10;
// 
// }
// # include<stdio.h>
// int find(int *arr,int,int);
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     int target ;
//     scanf("%d",&target);
//     int result=find(a,n,target);
//     printf("%d",result);
// }
// int find(int arr[],int n,int target){
//     if(target>=arr[n-1]){
//         return arr[n-1];
//     }
//     if(target<arr[0]){
//         return arr[0];
//     }
//     int beg=0,last=n-1;
//     while(beg<=last){
//         int mid=beg+last/2;
//         if(arr[mid]<target&&target>arr[mid+1]){
//             if(target-arr[mid]<arr[mid+1]-target){
//                 return arr[mid];
//             }
//             else{
//                 return arr[mid+1];
//             }
//         }
//         if(target<arr[mid]){
//             last=mid-1;
//         }
//         else{
//             beg=mid+1;
//         }
//     }
//     return 0;
// }
// // 5
// // 15 16 18 27 29
// // 25
// #include<stdio.h>

// int find(int *arr, int n, int target);

// int main() {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }
//     int target;
//     scanf("%d", &target);
//     int result = find(a, n, target);
//     printf("%d", result);
//     return 0;
// }

// int find(int arr[], int n, int target) {
//     if(target >= arr[n - 1]) {
//         return arr[n - 1];
//     }
//     if(target < arr[0]) {
//         return arr[0];
//     }
//     int beg = 0, last = n - 1;
//     while(beg <= last) {
//         int mid = (beg + last) / 2;
//         if(target == arr[mid]) {
//             return arr[mid];
//         }
//         if(target < arr[mid]) {
//             last = mid - 1;
//         }
//         else {
//             beg = mid + 1;
//         }
//     }
//     // After the loop, `last` will be the index of the largest element smaller than `target`
//     if(target - arr[last] < arr[last + 1] - target) {
//         return arr[last];
//     }
//     else {
//         return arr[last + 1];
//     }
// }
// # include<stdio.h>
// int big(int *arr,int n);
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     int result=big(a,n);
//     printf("%d",result);
// }
// int big(int arr[],int n){
//     int beg=0,last=n-1;
//     while(beg<=last){
//         int mid=(beg+last)/2;
//         if(arr[mid]<arr[last]){
//             last=mid;
        // }
        // else{
            // beg=mid+1;
        // }
    // }
    // return arr[beg];
// }
// 5
// 69 14 25 36 47 
// #include <stdio.h>
// 
// int findMaxTaskID(int arr[], int n) {
    // int low = 0, high = n - 1;
    // while (low < high) {
        // int mid = (low + high) / 2;
        // if (arr[mid] < arr[high]) {
            // Maximum task ID is in the first half
            // high = mid;
        // } else {
            // Maximum task ID is in the second half
            // low = mid + 1;
        // }
    // }
    // return arr[low];
// }
// 
// int main() {
    // int n;
    // scanf("%d", &n);
// 
    // int arr[n];
    // for (int i = 0; i < n; i++) {
        // scanf("%d", &arr[i]);
    // }
// 
    // int maxTaskID = findMaxTaskID(arr, n);
    // printf("%d\n", maxTaskID);
// 
    // return 0;
// }
# include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<n;i++){
//         for(int j=1;j<=n;j++){
//             if(a[i]!=j){
//                 printf("%d",j);
//                 break;
//             }
//             break;
//         }
//     }
// }
// # include<stdio.h>
// int find(int *arr,int n);
// int main(){
    // int n;
    // scanf("%d",&n);
    // int a[n];
    // for(int i=0;i<n;i++){
        // scanf("%d",&a[i]);
    // }
    // int result=find(a,n);
    // printf("%d",result);
// }
// int find(int arr[],int n){
    // int big=0,last=n-1;
    // while(big<=last){
        // int mid=big+(last-big)/2;
        // if(arr[mid]>arr[mid+1]){
            // return arr[mid];
        // }
        // if(arr[mid]<arr[last]){
            // last=mid;
        // }
        // else{
            // big=mid+1;
        // }
    // }
    // return arr[big];
// }
// # include<stdio.h>
// int missing(int *arr,int n);
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     int result=missing(a,n);
//     if(result>n||a[result-1]!=result){
//         printf("%d",result);
//     }
//     else{
//         printf("no");
//     }
// }
// int missing(int arr[],int n){
//     int beg=0,last=n-1;
//     while(beg<=last){
//         int mid=beg+(last-beg)/2;
//         if(arr[mid]==mid+1){
//                 beg=mid+1;
//         }
//         else{
//             last=mid-1;
//         }
//     }
//     return beg+1;
// }
// #include <stdio.h>

// int find_missing_seat(int N, int seats[]) {
//     int left = 0;
//     int right = N - 1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;
//         if (seats[mid] == mid + 1) {
//             // If the seat number matches its position, the missing seat is on the right half
//             left = mid + 1;
//         } else {
//             // If the seat number doesn't match its position, the missing seat is on the left half
//             right = mid - 1;
//         }
//     }

//     // At this point, 'left' will be the index where the missing seat should have been
//     return left + 1; // Adding 1 to convert from zero-based index to seat number
//     return -1;
// }

// int main() {
//     int N;
//     scanf("%d", &N);

//     int seats[N];
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &seats[i]);
//     }

//     int missing_seat = find_missing_seat(N, seats);

//     if (missing_seat > N || seats[missing_seat - 1] != missing_seat) {
//         printf("%d\n", missing_seat);
//     } else {
//         printf("No missing seat number found in the classroom.\n");
//     }

//     return 0;
// }
// # include<stdio.h>
// int main(){
    // int n;
    // scanf("%d",&n);
    // int a[n];
    // for(int i=0;i<n;i++){
        // scanf("%d",&a[i]);
    // }
    // int status=0;
    // int status=0;
    // for(int i=0;i<n;i++){
        // int status=0;
        // if(a[i]%2!=0){
            // status=1;
        // }
    // }
    // if(status==0){
        // printf("all are even");
    // }
    // else{
        // printf("Fail");
    // }
// }
// Arun is tasked with developing a binary search algorithm to efficiently locate the index of the first occurrence of a number divisible by 3 in a given sorted array of integers. 
// 
// 
// 
// Write a program to help Arun navigate the array elements and locate the required index. If a number divisible by 3 is found, return its index; otherwise, gracefully handle the absence of such a number.
// 
// Input format :
// The first line consists of an integer n, representing the size of the array.
// 
// The second line consists of n space-separated integers representing the elements of the sorted array.
// 
// Output format :
// The output prints "Index of the first occurrence: " followed by the index of the first occurrence of a number divisible by 3.
// 
// If no such number exists, print "No numbers divisible by 3."
// 
// 
// # include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<n;i++){
//         if(a[i]%3==0){
//             printf("this %d",i);
//             break;
//         }
//     }
// }
// 5
// 46 91 122 123 133
// 4
// 10 20 31 40
// int div(int *arr,int n);
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     div(a,n);
// }
// int div(int arr[],int n){
//     int beg=0,last=n-1;
//     while(beg<=last){
//         int mid=beg+(last-beg)/2;
//         if(arr[mid]%3==0){
//             if(mid==0||arr[mid-1]%3!=0){
//                 return arr[mid];
//             }
//             else{
//                 last=mid-1;// if mid is divisible by 3 then we have to check that if any other number previos to it is divisible by 3
//             }
//         }
//         else{
//             beg=mid+1;
//         }
//     }
// }
// # include<stdio.h>
// # include<stdlib.h>
// int main(){
    // int *x=(int *)malloc()
//     int n;
//     scanf("%d",&n);
//     int *x=(int *)malloc(n * sizeof(int));
//     int a[n];
//     int b[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(int j=0;j<n;j++){
//         scanf("%d",&b[j]);
//     }
//     int v=n*2;
//     int c[v];
//     int h=0;
//     for(int i=0;i<n*2;i++){
//         if(i<n){
//         c[i]=a[i];
//         }
//         else{
            
//             c[i]=b[h];
//             h=h+1;
//         }
//     }
//     for(int i=0;i<v-1;i++){
//         for(int j=0;j<v-i-1;j++){
//             if(c[j]>c[j+1]){
//                 int temp=c[j];
//                 c[j]=c[j+1];
//                 c[j+1]=temp;
//             }
//         }
//     }
//     for(int i=0;i<v;i++){
//         printf("%d ",c[i]);
//     }
// }
// # include<stdio.h>
// # include<stdlib.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     float *p=(float *)malloc(n * sizeof(int));
//     float a[n];
//     for(int i=0;i<n;i++){
//         scanf("%f",&a[i]);
//     }
//     int status=-1;
//     int count_p=0,count_n=0;
//     for(int i=0;i<n;i++){
//         if(a[i]>0){
//             status=1;
//             count_p++;
//         }
//         else{
//             status=0;
//             count_n++;

//         }
//     }
//     if(count_p==n){
//         printf("All pos");
//     }
//     else if(count_n==n){
//         printf("all n");
//     }
//     else{
//         printf("mix");
//     }
// }
// # include<stdio.h>
// # include<stdlib.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int m;
//     scanf("%d",&m);
//     int *p=(int *)malloc(n * sizeof(int));
//     int *pr=(int*)malloc(n * sizeof(int));
//     // int *pr=(int*)realloc(p,m * sizeof(int));
    
//     for(int i=0;i<n;i++){
//         scanf("%d",p+i);
//     }
//     for(int i=0;i<n;i++){
//         scanf("%d",pr+i);
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",*(p+i) * *(pr+i));
//     }
//     free(p);
// }
// # include<stdio.h>
// # include<stdlib.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     int v,w;
//     scanf("%d %d",&v,&w);
//     int *p=(int *)malloc(n * sizeof(int));
//     int *pp=(int *)realloc(p,n * sizeof(int));
//     for(int i=0;i<n;i++){
//         if(a[i])
//     }
// }
// # include<stdio.h>
// # include<stdlib.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     // int *p=(int *)malloc(n * sizeof(int));
//     // int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",a[i]);
//     }
//     int *p=(int *)malloc(n * sizeof(int));
//     int m;
//     scanf("%d",&m);
//     int *pp=(int *)realloc(p,m-n * sizeof(int));
//     int b[m];
//     for(int j=0;j<m;j++){
//         scanf("%d",&b[j]);
//     }
//     for(int i=0;i<n;i++){
//         printf("%d",a[i]);
//     }
//     int c[m+n];
//     int h=0;
//     for(int i=0;i<n;i++){
//         if(i<n){
//             c[i]=a[i];
//         }
//         else{
//             a[i]=b[h];
//             h=h+1;
//         }
//     }
//     for(int i=0;i<n;i++){
//         printf("%d",c[i]);
//     }
// }
// # include<stdio.h>
// # include<stdlib.h>
// int main(){
//     int n,m;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     scanf("%d",&m);
//     int b[m];
//     int x=m-n;
//     int *p=(int *)malloc(n * sizeof(int));
//     int *pp=(int *)realloc(p,m* sizeof(int));
//     for(int i=0;i<m;i++){
//         scanf("%d",&b[i]);
//     }
//     int c[m+n];
//     for(int i=0;i<n;i++){
//         c[i]=a[i];
//     }
//     for(int i=0;i<m;i++){
//         c[n+i]=b[i];
//     }
//     for(int i=0;i<n+m;i++){
//         printf("%d",c[i]);
//     }
// }
// #include<stdio.h>
// #include<stdlib.h>

// int main() {
//     int n, m;
//     scanf("%d", &n);
//     int a[n];
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }
//     scanf("%d", &m);
//     int b[m];
//     int x = m - n;
//     int *p = (int *)malloc(n * sizeof(int));
//     int *pp = (int *)realloc(p, m * sizeof(int));
//     for(int i = 0; i < m-n; i++) {
//         scanf("%d", &b[i]);
//     }
//     int c[m + n];
//     for(int i = 0; i < n; i++) {
//         c[i] = a[i];
//     }
//     for(int i = 0; i < m; i++) {
//         c[n + i] = b[i];
//     }
//     for(int i = 0; i < m; i++) {
//         printf("%d ", c[i]);
//     }
//     printf("\n");
    
//     return 0;
// }
// # include<stdio.h>
// # include<stdlib.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     int v,w;
//     scanf("%d %d",&v,&w);
//     int *p=(int *)malloc(n * sizeof(int));
//     int *pp=(int *)realloc(p,n-2 * sizeof(int));
//     for(int i=0;i<n;i++){
//         if(a[i]>=v&&a[i]<=w){
//             continue;
//         }
//         else{
//             printf("%d ",a[i]);
//         }
//     }
// }
// # include<stdio.h>
// # include<stdlib.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     int *p=(int *)malloc(n * sizeof(int));
//     int x=0,b=1,re;
//     for(int i=0;i<n+1;i++){
//         re=x+b;
//         x=b;
//         b=re;
//         for(int i=0;i<n;i++){
//             if(re==a[i]){
//                 printf("%d",a[i]);
//             }
//         }
//     }
// }
// # include<stdio.h>
// # include<stdlib.h>
// int divisor(int);
// int main(){
//     int n,sum=0;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     int *p=(int *)calloc(n,sizeof(int));
//     for(int i=0;i<n;i++){
//         sum=sum+divisor(a[i]);
//         printf("\nsum of div %d",sum);
//     }
    
// }
// int divisor(int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
// //         if(n%i==0){
// //             sum=sum+i;
// //             // int a=i;
// //             // printf("%d-%d",n,i);
// //         }
// //         return sum;
// //     }
// // }
// # include<stdio.h>
// # include<stdlib.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int *p=(int *)calloc(n,sizeof(int));
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     int d;
//     scanf("%d",&d);
//     int max_rem=-1,maxe;
//     for(int i=0;i<n;i++){
//         int rem=a[i]%d;
//         printf("%d",rem);
//         if(rem>=max_rem){
//             max_rem=rem;
//             maxe=a[i];
//         }

//     }
//     printf("\n%d %d",maxe,max_rem);
// }
// # include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     int target;
//     scanf("%d",&target);
//     for(int i=0;i<n;i++){
//         if(a[i]==target){
//             printf("%d",i);
//         }
//     }
// }
// # include<stdio.h>
// int main(){
//     int n;
//     // int index;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     int x;
//     int index;
//     scanf("%d",&x);
//     for(int i=0;i<n;i++){
//         if(x==a[i]){
//             index=i;
//         }
//     }
//     int target;
//     scanf("%d",&target);
//     for(int i=n;i>index;i--){
//         a[i]=a[i-1];
//     }
//     a[index+1]=target;
//     for(int i=0;i<n+1;i++){
//         printf("%d ",a[i]);
//     }
// }
// # include<stdio.h>
// int main(){
    // perfect square
    // int n,m;
    // scanf("%d %d",&n,&m);
    // int *p=&n;
    // int *q=&m;
    // int temp=32;
    // int rem=0;
    // while(rem<temp){
        // rem=2*2;
    // }
    // if(rem==temp){
        // printf("YEs");
    // }
    // else{
        // printf("Not");
    // }
// }
// You are using GCC
// # include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n][n];
//     int rowsum,colsum;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     int sum=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==j){
//                 sum=sum+a[i][j];
//             }
//         }
//     }
//     int maindiagonal=sum;
//     sum=0;
//     for(int i=n-1;i>=1;i--){
//         for(int j=0;j<n;j++){
//             sum=sum+a[i][j];
//         }
//     }
//     int secdiagonal=sum;
//     sum=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             sum=sum+a[i][j];
//         }
//         colsum=sum;
        
//         // break;
        
//     }
//     sum=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             sum=sum+a[j][i];
//         }
//         rowsum=sum;
//         // break;
//     }
//     if(maindiagonal==secdiagonal&&secdiagonal==rowsum&&secdiagonal==colsum&&maindiagonal==rowsum&&maindiagonal==colsum)
//     {
//         printf("The given matrix is magic square");
//     }
//     else{
//         printf("not");
//     }
// }
// // 3
// // 8  1  6
// // 3  5  7
// // 4  9  2
// perfeect square
// # include<stdio.h>
// int main(){
    // int n,m;
    // scanf("%d %d",&n,&m);
    // int status=0;
    // for(int i=n;i<=m;i=i*n){
        // if(i==m){
            // printf("perfect");
            // status=1;
            // break;
        // }
    // }
    // if(status==0){
        // printf("Not");
    // }   
// }
// # include<stdio.h>
// int main(){
//     int n,m;
    
//     scanf("%d %d",&n,&m);
//     int a[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     int sum=0;
//     int j=n-1;
//     for(int i=0;i<n;i++){
//         for(int j=n-1;j>=0;j--){
//         sum=sum+a[i][j];
//         j--;
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++)

//     }
//     printf("%d",sum);
// }
// }