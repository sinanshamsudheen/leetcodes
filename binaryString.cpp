int n = s1.length();
        int m = s2.length();
        int carry = 0; // To keep track of the carry
        string res = ""; // Result string

        int i = n - 1, j = m - 1;

        // Traverse both strings from the rightmost bit
        while (i >= 0 || j >= 0 || carry) {
            int bit1 = (i >= 0) ? s1[i] - '0' : 0; // Bit from s1
            int bit2 = (j >= 0) ? s2[j] - '0' : 0; // Bit from s2
            
            int sum = bit1 + bit2 + carry; // Sum of bits and carry

            // Append the resultant bit to the result
            res = char((sum % 2) + '0') + res;

            // Update carry
            carry = sum / 2;

            // Move to the next bits
            i--;
            j--;
        }
        res.erase(0, res.find_first_not_of('0'));

        // If result is empty after removing zeros, return "0"
        return res.empty() ? "0" : res;