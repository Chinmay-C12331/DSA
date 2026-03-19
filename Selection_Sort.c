#include <stdio.h>
#include<time.h>
 
void selection(int a[],int n){
    int i,j,temp,min;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}

int main() {
   int a[20],n,i;
clock_t start,end;
double  cpu_time;
   printf("ENTER NO OF ELEMENTS : ");
   scanf("%d",&n);
   printf("ENTER ARRAY ELEMENTS :\n");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   start=clock();
selection(a,n);
end=clock();
printf("SORETD ELEMENTS : \n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
    return 0;
}
