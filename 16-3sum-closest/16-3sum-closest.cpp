class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
       
        
           int mnSum=0,mndiff=1e9;
        sort(nums.begin(),nums.end());
      for(int i=0;i<nums.size();i++){
          if(i>0 && nums[i]==nums[i-1]) continue;
          
          int pt1=i+1;
          int pt2=nums.size()-1;
          
          while(pt1<pt2){
              
              int subSum=nums[i]+nums[pt1]+nums[pt2];
              if(abs(target-subSum) < mndiff){
                  mndiff=abs(target-subSum);
                  mnSum=subSum;
              }
              
              if(subSum > target)
                     pt2--;
              else if(subSum < target)
                    pt1++;
              else{
                  return subSum;
              }
          }
      }
          
          return mnSum;
      }
    
};