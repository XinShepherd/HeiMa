//
// @author Fuxin
// @since  2023/8/13
//

#include "customMath.h++"

int customMath::plus(int a, int b) {
    return a + b;
}

void customMath::swap(int *ap, int *bp) {
    int temp = *ap;
    *ap = *bp;
    *bp = temp;
}