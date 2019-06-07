#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int a[150];
int v;
void ab(){

int i,j;
for(i=0;i<v;i++){printf("\n");for(j=0;j<v;j++)
if(i<=a[j])printf("@");else printf(" ");}

}

void rdm(){int i;
for(i=0;i<v;i++)
{a[i]=(rand()%v)+1;
}

}

int fm(int f,int l){
	int i,pe=a[l],p=f,t;
	for(i=f;i<l;i++){
		if(a[i]<=pe)
		{
		
		 t=a[i];a[i]=a[p];a[p]=t;p++;}}
	
	t=a[l];a[l]=a[p];a[p]=t;

return p;
}

void sort(int f,int l){
	int m;
if(f<=l){
system("cls");
ab();
	m=fm(f,l);
	sort(f,m-1);
	sort(m+1,l);}
system("cls");
ab();
}

void main(){scanf("%d",&v);
rdm();
sort(0,v);
}