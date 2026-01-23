#include<stdio.h>
void display(int arr[],int n)
{
    for( int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

}
int insert( int arr[], int n, int p, int x){

    for (int j=n-1;j>=p-1;j--)
    {
    arr[j+1]=arr[j];
}
    arr[p-1]=x;
    return(n+1);
}
int main()
{
    int arr[6]={2,1,5,3,2};
    int n=5;
    int pos=1 ;
    int x=100;
    display(arr,n);
    n=insert(arr,n,pos,x);
    display(arr,n);
}


