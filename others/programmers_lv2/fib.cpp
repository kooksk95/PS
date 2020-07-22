#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int fib[100001] = {0,1};
    
    for(int i=2; i<=n; i++)
        fib[i] = (fib[i-1]+fib[i-2])%1234567;
    
    return fib[n];
}