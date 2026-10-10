class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int> temp(nums.size());
        int pindex=0;int nindex=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                temp[nindex]=nums[i];
                nindex+=2;
            }
            else{
                temp[pindex]=nums[i];
                pindex+=2;
            }
            
            }
            return temp;
        }
        
    
};