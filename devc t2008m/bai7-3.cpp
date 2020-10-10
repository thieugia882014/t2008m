#include<stdio.h>
int main(){
	int n,x;
	printf("Nhap vao so n :");
	scanf("%d",&n);
	int arr[n];
    int bien;
	bool b = true;
	int dem = 0;
	for(int i = 0; i < n; i++){
	    if(i == 0){
	        printf("Nhap vao so thu %d :", i+1);
		    scanf("%d", &arr[i]);
	    }else{
	        while(b){
	        printf("Nhap vao so thu %d :", i+1);
		    scanf("%d", &bien);
		    for(int j = 0 ; j <= i ; j++ ){
		        if(arr[j] != bien){
		            dem ++;
		        }
		    }
		    if(dem == i+1){
		        arr[i] = bien;
		        b = false;
		    }
		    dem = 0;
	    }
	    b = true;
	    }
	}
	  for(int i = 0; i < n; i++){
			printf("%d\t", arr[i]);
	}
}
