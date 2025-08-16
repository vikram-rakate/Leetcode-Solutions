class Solution {
public:
    int maximum69Number (int num) {
        int t = num;
        int place = 1;      // current digit place (1, 10, 100, ...)
        int bestPlace = 0;  // place of the most significant '6' found

        while (t > 0) {
            int d = t % 10;
            if (d == 6) bestPlace = place; // update to current place (more significant as we go)
            t /= 10;
            place *= 10;
        }

        return num + 3 * bestPlace; // add 3 * place if a 6 was found; else add 0
    }
};
