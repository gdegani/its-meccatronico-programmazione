#include <stdio.h>

int example(void) {

    // #region ciclo
    int i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 1000);
    // #endregion
    return 0;
}
