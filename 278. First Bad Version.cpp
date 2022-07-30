// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       int leftside = 1, rightside = n;
        while(leftside <= rightside){
            int mid = leftside + (rightside-leftside)/2;
            if(isBadVersion(mid))
                rightside = mid-1;
            else
                leftside = mid+1;
            
        }
        return leftside;
    }
};
