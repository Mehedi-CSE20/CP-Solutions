// KoDer :P
 
#include<stdio.h>
int main() {
    long long int n, k;
    scanf("%lld %lld", &n, &k);
    if (n*2 == k) {
        printf("%lld\n", n);
    } else if (n*2 < k && n*3 > k) {
        printf("%lld\n", n-(k-n*2));
    } else if (k >= n*3) {
        printf("0\n");
    }
    return 0;
}