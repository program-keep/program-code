#include <stdio.h>
/* �����븴�Ƶ���������Ʊ���滻��\t ���˷�����\b ��б���滻��\\���� */ 
main() {
	
	int c;
	while((c=getchar())!=EOF){
		if(c=='\t'){
			printf("\\t");
		}else if(c=='\b'){
			printf("\\b");
		}else if(c=='\\'){
			printf("\\\\");
		}else {
			putchar(c);
		}
	}
}
