#include <stdio.h>

#define NONBLANK 'a'

/* �����븴�Ƶ�������������Ķ���ո���һ���ո������� */ 
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
