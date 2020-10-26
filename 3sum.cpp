class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<3){
            return {};
        }
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int j,k;
        for(int i=0;i<nums.size()-2;i++){
            k=nums.size()-1;
            if(i>0){
                while(nums[i]==nums[i-1]){
                    if(i==nums.size()-2){
                        break;
                    }
                    i++;
                }
            }
            j=i+1;
                while(j<k && i<nums.size()-2){
                    int cur=nums[i]+nums[j]+nums[k];
                    if(cur==0){
                        ans.push_back({nums[i],nums[j],nums[k]});
                        j=j+1;

                        while(nums[j]==nums[j-1]){
                       if(j==k){
                            break;
                        }
                            j++;
                        }
                    }else if(cur>0){
                        k=k-1;
                    }else{
                        j=j+1;
                    }
                }
            }
            return ans;
        }

        
    };

