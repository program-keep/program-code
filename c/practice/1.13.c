#include <stdio.h>

#define IN 1
#define OUT 0
#define SIZE 10
/* print a histogram of the lengths of words in its input */
/* 1 2 333 45678 999999999999999 */
main(){
	int c,i,state,lword;
	int nwords[SIZE];
	
	state = OUT;
	lword = 0;
	
	for(i =0;i<SIZE;++i){
		nwords[i]=0;
	}
	
	while((c=getchar())!=EOF){
		if(c == ' '|| c== '\t'|| c=='\n'){
			state = OUT;
			if(lword!=0){
				++nwords[lword];
				lword = 0;
			}
		}else if(state == OUT){
			state = IN;
			++lword;
		}else {
			++lword;
		}
	}
	
	for(i =1;i<SIZE;++i){
		printf("%d %d\n",i,nwords[i]);
	}
}
