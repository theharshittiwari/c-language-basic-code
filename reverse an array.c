

int main() {
    int i,n;
    printf("enter the value of n");
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        b[i]=a[(n-1)-i];
    }
    for(i=0;i<n;i++){
        printf("%d",b[i]);
    }

    return 0;
}
