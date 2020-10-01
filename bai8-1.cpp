
#include<stdio.h>
#include<math.h>
#include<bits/stdc++.h>
int sont(int n){
    for(int i = n +1  ; i < INT_MAX ; i++){
       int count = 0;
       for(int j = 1; j < i; j ++ ){
           if(i % j == 0){
               count ++;
       }
 }
       if(count == 1){
           return i; break;
       }else{ 
           count = 0;
       }
    }
}
int main(){
    int n;
    printf("nhap so n: ");
    scanf("%d",&n);
    printf("%d", sont(n));
}
