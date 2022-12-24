class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        for (int bit = 31, new_bit = 0; bit >= 0; bit--, new_bit++)
            if ((1 << bit) & n)
                ans += (1 << new_bit);
        return ans;
    }
};
