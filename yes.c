#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char s[10000];
	scanf("%s",s);
	int q,a,b,i,n;
	scanf("%d",&q);
	n=strlen(s);
	for(i=0;i<q;i++){
		scanf("%d %d",&a,&b);
		if(a>n)
		a=a%n;
		if(b>n)
		b=b%n;
		char u=s[a];
		char v=s[b];
		if(u==v)
		printf("Yes\n");
		else
		printf("no\n");
	}
}