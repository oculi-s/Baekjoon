    #include <stdio.h>
    #include <stdlib.h>
    
    int n, a[5000][3], i;
    int _c(int a[3], int b[3]){
        return a[2]-b[2]+(a[1]-b[1])*60+(a[0]-b[0])*3600;
    }
    
    int main(){
        scanf("%d", &n);
        for (i=0; i<n; i++)
            scanf("%d %d %d", a[i], a[i]+1, a[i]+2);
        qsort(a, n, sizeof(int)*3, _c);
        for (i=0; i<n; i++)
            printf("%d %d %d\n", a[i][0], a[i][1], a[i][2]);
        return 0;
    }
