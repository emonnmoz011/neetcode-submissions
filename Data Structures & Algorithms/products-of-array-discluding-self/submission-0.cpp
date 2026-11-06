class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        vector<int> left;
        vector<int> right(n);
        vector<int> output;

        int left_mult=1;
        int right_mult=1;

        

        for(int i=0; i<n; i++)
        {
            left.push_back(left_mult);
            
            left_mult = left_mult * nums[i];
        }

        for(int i=n-1; i>=0; i--)
        {

            right[i] = right_mult;
            
            right_mult = right_mult * nums[i];
        }

        for(int i=0; i<n; i++)
        {
            output.push_back(left[i] * right[i]);
        }

        return output;




    }
};
