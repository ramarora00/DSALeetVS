
// # include<stdio.h>
// int main(){
//     int n=47;
//     int i=2,status=0;
//     while(i<=n/2){
//         if(n%i==0){
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
//     return 0;
// }
// #include<stdio.h>

// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);

//     for (int i = a; i <= b; i++) {
//         int status = 0;
//         for (int j = 2; j <= i / 2; j++) {
//             if (i % j == 0) {
//                 status = 1;
//                 break;
//             }
//         }

//         //
//         if (status == 0) {
//             printf("%d\n", i);
//         }
//     }

//     return 0;
// }
