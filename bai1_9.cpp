#include <stdio.h>
#include <string.h>
int main(){
	char s[100];
	printf("Nhap chuoi can kiem tra: ");
	scanf("%s",s);
	int a=0,e=0,u=0,o=0,i=0,x=0;
	for(int j=0;j<strlen(s);j++){
		if(s[j]== 'a'|| s[j] == 'A') a++;
		else if(s[j]== 'e'|| s[j] == 'E') e++;
		else if(s[j]== 'i'|| s[j] == 'I') i++;
		else if(s[j]== 'o'|| s[j] == 'O') o++;
		else if(s[j]== 'u'|| s[j] == 'U') u++;
		else x++;
	}
	printf("A|a: %d\n",a);
	printf("E|e: %d\n",e);
	printf("I|i: %d\n",i);
	printf("O|o: %d\n",o);
	printf("U|u: %d\n",u);
	printf("Con lai: %d",x);
}
