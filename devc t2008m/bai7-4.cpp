#include<stdio.h>
int main(){
	int n,x;
	printf("Nhap vao so n :");
	scanf("%d",&n);
	int arr[n];
    int bien;
	int dem = 0;
	for(int i = 0; i < n; i++){
	    if(i == 0){
	        printf("Nhap vao so thu %d :", i+1);
		    scanf("%d", &arr[i]);
	    }else{
	        printf("Nhap vao so thu %d :", i+1);
		    scanf("%d", &arr[i]);
		    bien = arr[i];
		    int j = i-1;
	        while(j >= 0 && bien > arr[j] ){
	            arr[j+1] = arr[j];
	            j--;
		    }
		    arr[j+1] = bien;
	    }
	    }
	    for(int i = 0; i < n; i++){
			printf("%d\t", arr[i]);
	}
	}

