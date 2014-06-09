#include <linux/math64.h>

u64 div_u64_rem(u64 n, u32 base, u32 *remainder){
	u64 rem = n;
	u64 b = base;
	u64 res, d = 1;
	u32 high = rem >> 32;
	
	/* Reduce the thing a bit first */
	res = 0;
	if (high >= base) {
		high /= base;
		res = (u64) high << 32;
		rem -= (u64) (high*base) << 32;
	}
	
	while ((u64)b > 0 && b < rem) {
		b = b+b;
		d = d+d;
	}
	
	do {
		if (rem >= b) {
			rem -= b;
			res += d;
		}
		
		b >>= 1;
		d >>= 1;
	} while (d);
	
	*remainder = rem;
		
	return res;
}
