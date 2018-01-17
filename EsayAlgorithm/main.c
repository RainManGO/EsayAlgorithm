//
//  main.c
//  EsayAlgorithm
//
//  Created by apple on 2018/1/8.
//  Copyright © 2018年 ZY. All rights reserved.
//

#include <stdio.h>

void prime(int n);
void  call_bubble(int a[]);
int *  bubble_sort(int * a,int n);
void Fibonacci(int n);
void yanghuiSingle(int n);

int main(int argc, const char * argv[]) {
    
    prime(16);
    
    int a[5] = {4,2,40,22,3};
    call_bubble(a);
    
    Fibonacci(5);
    
    yanghuiSingle(6);
    
    return 0;
    
}


//素数的判断
void prime(int n)
{
    double d = (double)n;
    for (int i=2; i<=sqrt(d); i++) {
        if (n%i==0) {
            printf("%d不是素数\n",n);
            return;
        }else{
            printf("%d是素数\n",n);
        }
    }
    
}

#pragma mark  排序

//冒泡排序调用

void  call_bubble(int a[]){
    int * p;
    p = a;
    p=bubble_sort(p, 5);
    for (int i=0; i<5; i++) {
        printf("%d",*(p+i));
    }
    printf("\n");
}


//冒泡排序
int *  bubble_sort(int * a,int n){
    
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (a[i]>a[j]) {
                a[i] = a[i]^a[j];
                a[j] = a[j]^a[i];
                a[i] = a[i]^a[j];
            }
        }
    }
    
    return a;
}



//斐波那契数列   兔子生小兔子问题

void Fibonacci(int n){
    long  f1,f2;
    f1=f2=1;
    for (int i=0; i<n; i++) {
        printf("%ld,%ld\n",f1,f2);
        f1 = f1 + f2;
        f2 = f1 + f2;
    }
    
}


//杨辉三角
void yanghuiSingle(int n){
    
    int a[n][n];
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            if (j==0||j==i) {
                a[i][j]=1;
            }else{
                a[i][j] = a[i-1][j-1]+a[i-1][j];
            }
        }
    }
    
    for (int i=0; i<n; i++) {
        
        for (int j=0;j<2*n-i;j++) {
            printf(" ");
        }
        for (int j=0; j<i+1; j++) {
            printf("%2d",a[i][j]);
        }

        printf("\n");
    }
}
