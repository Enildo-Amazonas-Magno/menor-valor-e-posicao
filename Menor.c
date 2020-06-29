#include <stdio.h>
#include <math.h>
#define tam 1000
int main() {
    int i, v[tam], n, m=100000, g=0;
    scanf("%d", &n);
    for(i=0; i<n; i++){scanf("%d", &v[i]);}
    for(i=0; i<n; i++){if(v[i]<m){m=v[i]; g=i;}}
    printf("Menor valor: %d\nPosicao: %d", m, g);
	return 0;
}