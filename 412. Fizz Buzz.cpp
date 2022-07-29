class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> str(n);
    int l00p = 0;
    while (true) {
        l00p++;
        int test_1 = l00p % 5;
        int test_12 = l00p % 3;

        if (l00p % 5 == 0 && l00p % 3 == 0)
            str[l00p - 1] = "FizzBuzz"; 
        else if(l00p % 3 == 0 )
            str[l00p - 1] = "Fizz";
        else if (l00p % 5 == 0)
            str[l00p - 1] = "Buzz";
        else
            str[l00p - 1] = to_string(l00p);
        if (n == l00p)
            break;
    }
    return str;
    }
};
