#include <stdio.h>
int main()
{
    char a[]="A3B2C4A9";
    int n = sizeof(a)-1;
    int k;
    for(int i=0;i<n;i++){
        switch(a[i]){
            case '1':
            k=k+1;
            break;
            case '2':
            k=k+2;
            break;
            case '3':
            k=k+3;
            break;
            case '4':
            k=k+4;
            break;
            case '5':
            k=k+5;
            break;
            case '6':
            k=k+6;
            break;
            case '7':
            k=k+7;
            break;
            case '8':
            k=k+8;
            break;
            case '9':
            k=k+9;
            break;
            default:
            break;
        }
    }
    char b[k];
    int g=0;
    for(int i=0;i<n;i++){
        switch(a[i]){
            case '1':
            for(int c=0;c<1;c++){
                b[g]=a[i-1];
                g=g+1;
            }
            break;
            case '2':
            for(int c=0;c<2;c++){
                b[g]=a[i-1];
                g=g+1;
            }
            break;
            case '3':
            for(int c=0;c<3;c++){
                b[g]=a[i-1];
                g=g+1;
            }
            break;
            case '4':
            for(int c=0;c<4;c++){
                b[g]=a[i-1];
                g=g+1;
            }
            break;
            case '5':
            for(int c=0;c<5;c++){
                b[g]=a[i-1];
                g=g+1;
            }
            break;
            case '6':
            for(int c=0;c<6;c++){
                b[g]=a[i-1];
                g=g+1;
            }
            break;
            case '7':
            for(int c=0;c<7;c++){
                b[g]=a[i-1];
                g=g+1;
            }
            break;
            case '8':
            for(int c=0;c<8;c++){
                b[g]=a[i-1];
                g=g+1;
            }
            break;
            case '9':
            for(int c=0;c<9;c++){
                b[g]=a[i-1];
                g=g+1;
            }
            break;
            default:
            break;
        }
    }
    printf("%s",b);
    return 0;
}
