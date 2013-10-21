#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    long long int a[n];
    for(int i=0;i<n;i++){
        scanf("%lld",a+i);
    }
    sort(a,a+n);
    long long int minval = 9223372036854775807;
    int z = k-1;
    int diff=1;
    for(int i=0;i<=n-k;i+=diff){
        long long int sum = 0;
        for(int j=-z,l=i;j<=z;j+=2,l++){
            sum+=(j*a[l]);
        }
        minval = min(minval,sum);
    }
    printf("%lld\n",minval);
    return 0;
}
