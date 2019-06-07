#include<stdio.h>
#include<stdlib.h>
int a[1000];
int v;

void ab(){

system("cls");
int i,j;
for(i=0;i<v;i++){printf("\n");for(j=0;j<v;j++)
if(i<=a[j])printf("@");else printf(" ");}

}

void rg(){int i;
for(i=0;i<=v;i++){
a[i]=rand()%v;}}



void merg( int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create temp arrays */
    int L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = a[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = a[m + 1+ j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            a[k] = L[i]; 
            i++; 
        } 
        else
        { 
            a[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
        a[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        a[k] = R[j]; 
        j++; 
        k++; 
    } 
}


void sort(int f,int l){
int m;
m=(f+l)/2;
if(l>f){
		 sort(f,m);
		 sort(m+1,l);
		 merg(f,m,l);
		 ab(); }
}

void main(){
scanf("%d",&v);
rg();
sort(0,v);

}//8412www.youjizz.com
