#include<stdio.h>
#include<time.h>
int main(){
    int **arr;
    int i,a,b,j,k,m,n,g;
    double time_spent;
    printf("Enter number of vertices:");
    scanf("%d",&a);
    clock_t tic=clock();
    arr=malloc(sizeof(int*)*a);
    for(i=0;i<a;i++){
        arr[i]=calloc(a,sizeof(int));

    }
    for(i=0;i<a;i++){
        m=rand()%a;
        n=rand()%a;
        arr[m][n]=1;
    }
    g=b=0;
    for(j=0;j<a;j++){
        for(k=0;k<a;k++){
            printf("%d",arr[j][k]);
            if(arr[j][k]==1){
                b++;
            }
        }
        printf("\n");
    }
    clock_t toc=clock();
    printf("Sum of In-Degree:%d\n",b);
    printf("Sum of Out-Degree:%d\n",b);
    printf("Computational time:%f milliseconds\n",(double)(toc-tic)*1000/CLOCKS_PER_SEC);
    return 0;
}
