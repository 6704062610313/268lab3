#include<stdio.h>
int main(){
	int h, m, s;
	scanf("%d:%d:%d",&h, &m, &s);
	printf("hour:%d\n",h);
	printf("minute:%d\n",m);
	printf("second:%d\n",s);
	
	int nt;
	printf("Input Next minutes: ");
	scanf("%d",&nt);
	m = m + nt;
	if (m > 59){
		h = h + (m/60);
		m = m % 60;
	}
	if (h > 23){
		h = h % 24;
	}
	printf("hour:%d\n",h);
	printf("minute:%d\n",m);
	printf("second:%d\n",s);
}
