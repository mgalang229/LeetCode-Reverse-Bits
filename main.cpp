class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        for (int bit = 31; bit >= 0; bit--)
            if ((1 << bit) & n)
                ans += 1 << (31 - bit);
        return ans;
    }
};
