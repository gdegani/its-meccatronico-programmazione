#include <stdio.h>

int example(void) {

    // #region ciclo
    i = 0;
    while (i <= 1000) {
        printf("%d", i);
        i++;
    }


    for (i = 0; i <= 1000; i++) {
        printf("%d", i);
    }
    // #endregion
    return 0;
}
