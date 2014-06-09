#ifndef __MATH64_H
#define __MATH64_H

#include <sys/types.h>
#include <inttypes.h>

typedef uint64_t u64;
typedef uint32_t u32;

u64 div_u64_rem(u64 n, u32 base, u32 *remainder);

#endif /* __MATH64_H */

