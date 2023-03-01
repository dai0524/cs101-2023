#include <stdio.h>

int main()
{
    char a[]= "-99acbc";
    int alen = sizeof(a)/sizeof(char);
    char b[alen];
    int k=0;
    for(int i=0;i<alen;i++){
        switch(a[i]){
            case '-':
            b[k]=a[i];
            k=k+1;
            break;
            case '1':
            b[k]=a[i];
            k=k+1;
            break;
            case '2':
            b[k]=a[i];
            k=k+1;
            break;
            case '3':
            b[k]=a[i];
            k=k+1;
            break;
            case '4':
            b[k]=a[i];
            k=k+1;
            break;
            case '5':
            b[k]=a[i];
            k=k+1;
            break;
            case '6':
            b[k]=a[i];
            k=k+1;
            break;
            case '7':
            b[k]=a[i];
            k=k+1;
            break;
            case '8':
            b[k]=a[i];
            k=k+1;
            break;
            case '9':
            b[k]=a[i];
            k=k+1;
            break;
            default:
            break;
        }
    }
    printf("%s",b);
    return 0;
}
