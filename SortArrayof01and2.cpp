class Solution {
public:
    void sortColors(vector<int>& nums) {
        int ind0=0;
        int ind2=nums.size()-1;
        int temp;
        int c2=0;
        for (int i=0; i<nums.size(); i++){
            if (nums[i]==0){
                if (i!=ind0){
                    temp=nums[i];
                    nums[i]=nums[ind0];
                    nums[ind0]=temp;
                    i--;
                }
                ind0++;
            }else if(nums[i]==2){
                if (i==nums.size()-c2){
                    break;
                }
                if (i!=ind2){
                    temp=nums[i];
                    nums[i]=nums[ind2];
                    nums[ind2]=temp;
                    i--;
                    c2++;
                }
                ind2--;
            }
        }
    }
};
