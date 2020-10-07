#include <stdio.h>
int main() {
	int F0 =0,F1=1,F;
    printf(" bat dau chay : \n");
    for ( int i = 0 ; i < 100 ; i++ ){
        if ( i <= 1 ){
            F = i;
        }else{
        	F = F0 + F1;
        	F0 = F1;
        	F1 = F;
        	if(F > 100) {
            	break;
        	}
      	}
      		printf("%d  ",F);
	}
}
