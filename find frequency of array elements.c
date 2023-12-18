#include<stdio.h>
int main(){
	char str[] = "hello world";
	int fre[26]={0},i;
	for(i = 0 ;str[i]!='\0';i++){
		fre[str[i] - 'a']++;
	}
	for(i = 0 ;i<26;i++){
		if(fre[i]!=0){
			printf("%c --> %d\n",i+97,fre[i]);
		}
	}
}
