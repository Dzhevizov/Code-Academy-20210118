#include <stdio.h>


int main(){
    int nResult = 13;
    int nX = 4;
    printf("Result = %d\n", nResult);
    nResult += nX;
    printf("Result += %d -> %d\n", nX, nResult);
    nResult = 1;
    nResult<<=nX;
    printf("Result <<= %d -> %d\n", nX, nResult);
    nX = 3;
    nResult /= nX;
    printf("Result /= %d -> %d\n", nX, nResult);
    nResult %= nX;
    printf("Remainder of /= %d -> %d\n", nX, nResult);
    nResult &= nX;
    printf("Result &= %d -> %d\n", nX, nResult);
    nResult ^= nX;
    printf("Result ^= %d -> %d\n", nX, nResult);

    return 0;
}
