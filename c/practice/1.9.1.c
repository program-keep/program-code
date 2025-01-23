#include <stdio.h>

#define NONBLANK 'a'

/* 把输入复制到输出，将相连的多个空格用一个空格代替程序 */ 
main() {
	
	int c,lastc;
	while((c=getchar())!=EOF){
		if(c==' '){
			if(lastc!=' '){
				putchar(c);	
			}
		}else {
			putchar(c);
		}
		lastc = c;
	}
}
