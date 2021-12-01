#include"stdio.h"
#include "stdlib.h"
int main(){
	char str[100],rep[50],pat[50],ans[100];
	int i,j,k,c,m,flag =0;

	printf("Enter the main string\n");
	gets(str);

	printf("Enter the pattern string\n");
	gets(pat);

	printf("Enter the replacement string\n");
	gets(rep);

	//string matching

	while(str[m] != '\0'){

		if(str[m] == pat[i]){

			i++;m++;
			if(pat[i] == '\0'){
				flag = 1;
				for(k=0;rep[k]!='\0';++k,++j){
					ans[j] = rep[k];
				}//end of for
			}//end of if


		}//end of if
		else{
			ans[j] = str[c];
			c++;j++;
			i = 0;
			m = c;

		}//end of else



	}//end of while

	if(flag==1){
		printf("String updated\n");
	}//end of if
	else{
		printf("Pattern not found\n");
	}//end of else

	printf("The string is %s",ans);
	return 1;
}//end of main
