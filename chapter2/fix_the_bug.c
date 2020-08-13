#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>

void *copy_elements(void *ele_src[], int ele_cnt, size_t ele_size)
{
    uint64_t need_allocate = ele_cnt * (uint64_t) ele_size;
    if (need_allocate != (size_t)need_allocate) {
        return NULL;
    }

    void *result = malloc((size_t)need_allocate);
    // the rest codes are the same
}
