#include <stdio.h>
 
int MinTwoNum(int a, int b){
    return (a < b ? a : b);
}
int MinThreeNum(int a, int b, int c){
    return MinTwoNum(a, MinTwoNum(b, c));
}
int main(){
    int a, b, c;
    printf("\n a = "); scanf("%d", &a);
    printf("\n b = "); scanf("%d", &b);
    printf("\n c = "); scanf("%d", &c);
    printf("\nMin = %d", MinThreeNum(a,b, c));
    return 0;
} 
