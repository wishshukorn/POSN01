/* 01 */

// #include<stdio.h>
// int main(){

//     // printf("%.1f",10*14*0.5);

//     // int a,b;
//     // scanf("%d",&a);
//     // scanf("%d",&b);
//     // printf("%.1f",a*b*0.5);

//     // int x;
//     // scanf("%d",&x);
//     // printf("%d",x*x+8*x+4);

//     // int a;
//     // scanf("%d",&a);
//     // printf("%d",a-543);

//     // int a;
//     // scanf("%d",&a);
//     // int b=a+543;
//     // int sum=0;
//     // printf("%d",b);
//     // for(int i=0;i<4;i++){
//     //     sum=sum+a%10;
//     //     a=a/10;
//     // }for(int i=0;i<4;i++){
//     //     sum=sum+b%10;
//     //     b=b/10;
//     // }
//     // printf("\n%d",sum);

/* 01 */

/****************************************************************************************************
//     // char -128 -> 127
//     // int -32768 -> 32767
//     // unsigned int 0 -> 65535
//     // long 2000M
//     // float 1.2*10^38 -> 3.4*10^38
****************************************************************************************************/

// }

// #include<stdio.h>
// int main(){
//     const double pi = 3.14;
//     const char ch = 'A';
//     const char company[10] = "INTER";
//     printf("pi = %d\n", pi);
//     printf("ch = %d\n",ch);
//     printf("company name = %s", company);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int sum, total;
//     sum = total = 0;
//     printf("sum = %d\n",sum);
//     printf("total = %d\n",total);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     // int num = 7/2;
//     // printf("%d",num);
//     // return 0;
//     // float num = 7/2;
//     // printf("%f",num);
//     // return 0;
//     float num = 7.0/2;
//     printf("%f",num);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     float r,area;
//     printf("Enter radius: ");
//     scanf("%f",&r);
//     area = (22.0/7.0)*r*r;
//     printf("%.2f",area);
// }

// #include<stdio.h>
// int main(){
//     char name[30];
//     int age;
//     printf("Enter your name: ");
//     gets(name);
//     printf("Enter your age: ");
//     scanf("%d",&age);
//     printf("Your name is %s\n",name);
//     printf("Your are %d years old\n",age);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char c;
//     printf("Enter a single character: ");
//     c = getchar();
//     printf("You type a character is %c\n",c);
//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// int main(){
//     char d;
//     printf("Enter a single charater: ");
//     d = getch();
//     printf("\nYou type a character is ... %c\n",d);
//     return 0;
// }

/* 02 */

// #include<stdio.h>
// #include<math.h>
// int main(){

//     // float h,w;
//     // printf("Enter Height: ");
//     // scanf("%f",&h);
//     // printf("Enter Weight: ");
//     // scanf("%f",&w);
//     // printf("BMI = %f", h/(w*w));

//     // int a;
//     // scanf("%d",&a);
//     // printf("B1000 = %d\n",a/1000);
//     // a = a%1000;
//     // printf("B500 = %d\n",a/500);
//     // a = a%500;
//     // printf("B100 = %d",a/100);

//     // int x1,y1,x2,y2;
//     // float a;
//     // printf("x1 = ");
//     // scanf("%d",&x1);
//     // printf("y1 = ");
//     // scanf("%d",&y1);
//     // printf("x2 = ");
//     // scanf("%d",&x2);
//     // printf("y2 = ");
//     // scanf("%d",&y2);
//     // a=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
//     // printf("%f",a);

// }

/* 02 */

/* 03 */

// #include<stdio.h>
// int main(){

//     // float c;
//     // scanf("%f",&c);
//     // printf("C=%f\n",c);
//     // printf("K=%f\n",c+273);
//     // printf("F=%f",c*9/5+32);

//     // float k;
//     // scanf("%f",&k);
//     // printf("K=%.1f\n",k);
//     // printf("C=%.1f\n",k-273);
//     // printf("F=%.1f",(k-273)*9/5+32);

//     // float f;
//     // scanf("%f",&f);
//     // printf("F=%.1f\n",f);
//     // printf("K=%.1f\n",(f-32)*5/9+273);
//     // printf("C=%.1f",(f-32)*5/9);

// }

/* 03 */

/****************************************************************************************************

H e l l o \0 -> char hello[6]

++i = i++ in if-else

control string = string + %format + Escape sequence (\n)

****************************************************************************************************/

// #include<stdio.h>
// #include<stdbool.h>
// int main(){
//     bool x = true;
//     printf("%d\n",x);
//     printf(x ? "true":"false");
//     return 0;
// } 

// #include<stdio.h>
// #include<stdbool.h>
// int main(){
//     bool x = true;
//     printf("%d\n",x);
//     printf(x ? "true":"false");
//     return 0;
// }

// #include<stdio.h>
// int main(){

//     // int n;
//     // printf("Enter number: ");
//     // scanf("%d",&n);
//     // if(n>=5){
//     //     printf("Pass");
//     // }
//     // return 0;

//     // int n;
//     // printf("Enter number: ");
//     // scanf("%d",&n);
//     // if(n>=5){
//     //     printf("Pass");
//     // }
//     // else{
//     //     printf("Fail");
//     // }
//     // return 0;

//     // int x,y;
//     // scanf("%d %d",&x,&y);
//     // if(x>y){
//     //     printf("x is greater than y");
//     // }
//     // else{
//     //     printf("x is less than or equal to y");
//     // }
//     // return 0;

//     // float score;
//     // char grade;
//     // scanf("%f",&score);
//     // if(score>100){
//     //     printf("Score must be less than or equal to 100");
//     // }
//     // else if(score>=80){
//     //     grade = 'G';
//     // }
//     // else if(score>=50){
//     //     grade = 'P';
//     // }
//     // else{
//     //     grade = 'F';
//     // }
//     // printf("\nGrade = %c",grade);
//     // return 0;

//     // int n;
//     // char id[9],name[20];
//     // printf("Enter ID: ");
//     // scanf("%s",id);
//     // printf("Enter Name: ");
//     // scanf("%s",name);
//     // printf("Enter X (0-100): ");
//     // scanf("%d",&n);
//     // if(n>=80){
//     //     printf("Grade = A");
//     // }
//     // else if(n>=70){
//     //     printf("Grade = B");
//     // }
//     // else if(n>=60){
//     //     printf("Grade = C");
//     // }
//     // else if(n>50){
//     //     printf("Grade = D");
//     // }
//     // else{
//     //     printf("Grade = F");
//     // }
//     // return 0;

//     // int n;
//     // char id[9],name[20];
//     // printf("Enter ID: ");
//     // scanf("%s",id);
//     // printf("Enter Name: ");
//     // scanf("%s",name);
//     // printf("Enter X (0-100): ");
//     // scanf("%d",&n);
//     // if(n>=80&&n<=100){
//     //     printf("Grade = A");
//     // }
//     // else if(n>=70&&n<=79){
//     //     printf("Grade = B");
//     // }
//     // else if(n>=60&&n<=69){
//     //     printf("Grade = C");
//     // }
//     // else if(n>50&&n<=59){
//     //     printf("Grade = D");
//     // }
//     // else{
//     //     printf("Grade = F");
//     // }
//     // return 0;

//     // int n;
//     // char id[9],name[20];
//     // printf("Enter ID: ");
//     // scanf("%s",id);
//     // printf("Enter Name: ");
//     // scanf("%s",name);
//     // printf("Enter X (0-100): ");
//     // scanf("%d",&n);
//     // if(n>=80&&n<=100){
//     //     printf("Grade = A");
//     // }
//     // if(n>=70&&n<=79){
//     //     printf("Grade = B");
//     // }
//     // if(n>=60&&n<=69){
//     //     printf("Grade = C");
//     // }
//     // if(n>50&&n<=59){
//     //     printf("Grade = D");
//     // }
//     // if(n>=0&&n<=50){
//     //     printf("Grade = F");
//     // }
//     // return 0;

//     // int num = 2;
//     // switch(num+1){
//     //     case 1:
//     //     printf("Case 1: Value is: %d",num);
//     //     case 2:
//     //     printf("Case 2: Value is: %d",num);
//     //     case 3:
//     //     printf("Case 3: Value is: %d",num);
//     // }
//     // return 0;

//     // int c;
//     // printf("Enter integer 1 or 2 or 3: ");
//     // scanf("%d", &c);
//     // switch(c){
//     //     case 1: printf("ONE\n"); return 0;
//     //     case 2: printf("TWO\n"); break;
//     //     case 3: printf("THREE\n"); break;
//     //     case 4: printf("Out of range");
//     // }
//     // printf("Goodbye");
//     // return 0;

// }

// #include<stdio.h>
// #include<stdbool.h>
// int main(){
//     bool x = true;
//     printf("%d\n", x);
//     printf(x ? "true" : "false");
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char a[3]='ab';
//     printf(a ? 'ab' : 'bc');
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     float a, b, c, d;
//     printf("Input score1 (from 100) = ");
//     scanf("%f", &a);
//     if(a<0||a>100){
//         printf("Invalid input!!");
//         return 0;
//     }
//     printf("Input score2 (from 100) = ");
//     scanf("%f", &b);
//     if(b<0||b>100){
//         printf("Invalid input!!");
//         return 0;
//     }
//     printf("Input score3 (from 100) = ");
//     scanf("%f", &c);
//     if(c<0||c>100){
//         printf("Invalid input!!");
//         return 0;
//     }
//     printf("Input score4 (from 100) = ");
//     scanf("%f", &d);
//     if(d<0||d>100){
//         printf("Invalid input!!");
//         return 0;
//     }
//     printf("avg: %f", ((a+b+c+d)/4));
// }

// #include<stdio.h>
// int main(){
//     int a[5], b=0, c=0;
//     for(int i=0;i<5;i++){
//         printf("Input int %d: ", i);
//         scanf("%d", &a[i]);
//         if(a[i]%2 == 0){
//             b++;
//         }
//         else{
//             c++;
//         }
//     }
//     printf("even = %d\nodd = %d", b, c);
// }

// #include<stdio.h>
// int main(){
//     int a, b, c;
//     printf("Input id: ");
//     scanf("%d", &a);
//     printf("Input income: ");
//     scanf("%d", &a);
//     printf("Input ot: ");
//     scanf("%d", &b);
//     a=a+b;
//     printf("\n%d\n", a);
//     if(a>=100000){
//         printf("%f", a*0.1);
//     }else if(a>=70000){
//         printf("%f", a*0.07);
//     }else if(a>=50000){
//         printf("%f", a*0.05);
//     }else if(a>=30000){
//         printf("%f", a*0.03);
//     }else{
//         printf("%f", a*0.01);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a, b;
//     printf("Please enter midterm score: ");
//     scanf("%d", &a);
//     printf("Please enter final score: ");
//     scanf("%d", &b);
//     if(a>100||a<0||b>100||b<0){
//         return 0;
//     }
//     float c = (a+b) / 2;
//     printf("Your score = %f\n", c);
//     if(c>=80&&c<=100){
//         printf("Grade = G, Good");
//     }else if(c>=50&&c<80){
//         printf("Grade = P, Pass");
//     }else{
//         printf("Grade = F, Fail");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     char a[10][10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
//     printf("Please enter number: ");
//     scanf("%d", &n);
//     printf("%s", a[n%10]);
// }

// #include<stdio.h>

// int main(){
//     char a[50];
//     int i=0;
//     printf("Input string: ");
//     scanf("%s", a);
//     while (a[i]!='\0'){
//         if(a[i]>='a'&&a[i]<='z'){
//             a[i]=a[i]-32;
//         }else if(a[i]>='A'&&a[i]<='Z'){
//             a[i]=a[i]+32;
//         }else{
//             printf("error");
//             return 0;
//         }
//         i++;
//     }
//     printf("%s", a);
// }

// #include<stdio.h>
// int main(){
//     float a;
//     int b;
//     printf("Please input radius: ");
//     scanf("%f", &a);
//     printf("Calculator Menu:\n\t1. Find area\n\t2. Find circumference\nChoose menu: ");
//     scanf("%d", &b);
//     if(b==1){
//         printf("Area = %.2f", (22.0/7.0)*a*a);
//     }else if (b==2){
//         printf("Circumference = %.2f", (22.0/7.0)*2*a);
//     }else{
//         return 0;
//     }
// }

#include<stdio.h>
int main(){
    int a, b;
    printf("Please input radius: ");
    scanf("%d", &a);
    printf("Calculator Menu:\n\t1. Find area\n\t2. Find circumference\nChoose menu: ");
    scanf("%d", &b);
    switch(b){
    case 1: printf("Area = %.2f", (22.0/7.0)*a*a);
            break;
    case 2: printf("Circumference = %.2f", (22.0/7.0)*a*2.0);
            break;
    }
}