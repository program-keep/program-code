#include <stdio.h>
/* ͳ�ƿո� �Ʊ�� ���з������ĳ��� */ 
main() {
	
	int ns,nt,nn;
	int c;
	ns=nt=nn =0;
	while((c=getchar())!=EOF){
		if(c==' '){
			++ns;
		}else if(c=='\t'){
			++nt;
		}else if(c=='\n'){
			++nn;
		}
	}
	printf("�ո������%d���Ʊ��������%d�����з�������%d\n",ns,nt,nn);
}
