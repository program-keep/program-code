#include <stdio.h>
/* �����븴�Ƶ�������������Ķ���ո���һ���ո������� */ 
main() {
	
	int ns;
	int c;
	ns=0;
	while((c=getchar())!=EOF){
		if(c==' '){
			++ns;
			if(ns==1){
				putchar(c);
			}
		}else {
			ns=0;
			putchar(c);
		}
	}
}
