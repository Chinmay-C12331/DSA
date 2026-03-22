#include<stdio.h>
#include<time.h>
int linear(int a[],int n,int key){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==key){
        return i;}
    }
    return -1;
}
int main(){
    int a[20],i,n,key,pos;
    clock_t start,end;
    double cpu_time;
    printf("Enter total elements : ");
    scanf("%d",&n);
    printf("Enter array elements : \n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Entery key value : ");
    scanf("%d",&key);
    start=clock();
    pos=linear(a,n,key);
    end=clock();
    for(i=0;i<n;i++)
    printf("%d  ",a[i]);
    if(pos!=-1)
    printf("\nFound %d at position %d\n",key,pos+1);
    else
    printf("\nNOT FOUND!!\n");
    cpu_time=((double)(end-start))/CLOCKS_PER_SEC;
    printf("\n%f seconds", cpu_time);
    return 0;
}
