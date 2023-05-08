int x;  // we want to find the minimum of x and y
int y;   
int r;  // the result goes here 

r = y ^ ((x ^ y) & -(x < y)); // min(x, y)

// To find the maximum, use:

r = x ^ ((x ^ y) & -(x < y)); // max(x, y)

//If you know that INT_MIN <= x - y <= INT_MAX, then you can use the following, which are faster because (x - y) only needs to be evaluated once.

r = y + ((x - y) & ((x - y) >> (sizeof(int) * CHAR_BIT - 1))); // min(x, y)
r = x - ((x - y) & ((x - y) >> (sizeof(int) * CHAR_BIT - 1))); // max(x, y)
