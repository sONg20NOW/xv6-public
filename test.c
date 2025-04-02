#include "types.h"
#include "user.h"
#include "stat.h"

int main()
{
    // --- test getnice start ---
    for(int i=1; i < 11; i++) {
        printf(1, "%d: %d\n", i, getnice(i));
    }
    // --- test getnice end ---

    // --- test setnice start ---
    printf(1, "setnice: %d\n", setnice(2, 39));
    // --- test setnice end ---

    // --- test ps start ---
    ps(0);
    printf(1, "\n");
    ps(1);
    printf(1, "test ps(6)\n");
    ps(6);
    // --- test ps end ---
    // what up
    exit();
}