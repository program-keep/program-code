#include <stdio.h>
/* ÿ��һ�����ʵķ�ʽ��ӡ����ĳ���
5 5 5
 */ 
#define IN 1 // ������ 
#define OUT 0  // ������

main() {
	int c,state;
	state = OUT;
	
	while((c = getchar())!=EOF){
		if(c== ' '|| c== '\t' || c=='\n'){
			if(state == IN){
				state = OUT;
				putchar('\n');
			}
		}else{
			state = IN;
			putchar(c);
		}
	}
}
