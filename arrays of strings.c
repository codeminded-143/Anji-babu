#include<stdio.h>
#include<string.h>
int main()
{
	//strings
	//array of strings
	char *words[]= {"ab18","B"};
	int i,j;
	for(i = 0 ;i<2;i++){
		//printf("%s\n",words[i]);//Hello
		for(j = 0;j < strlen(words[i]);j++){
			printf("%c\n",words[i][j]);
		}//each char
	}
}

