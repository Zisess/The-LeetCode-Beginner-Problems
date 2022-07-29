class Solution {
public:
    int numberOfSteps(int num) {
      int a = 0;
    while (true) {
        if (num == 0)
            return a;
        else if (num % 2 == 0)
            num = num / 2;
        else if (num % 2 != 0)
            num--;
        a++;
        
    }  
    }
};
