class Solution {

public:
    int search(vector<int>& nums, int target) {
     
        int lo=0;
        int hi=nums.size()-1;
        
        
        while(lo <= hi){
            
            int mid = lo+(hi-lo)/2;
            
            if(nums[mid] == target)
                return 1;
        
            if(nums[mid] > nums[lo] ){   
               
                //[lo-------mid] is ordered;
                if(nums[mid] > target && target >= nums[lo])
                    hi=mid-1;
                else
                    lo=mid+1;   
            
            }else if(nums[mid] < nums[lo]){ //if(nums[mid] < nums[hi]) w nshel else
                //[mid......hi] is ordered
                if(nums[mid] < target && target <= nums[hi])
                    lo=mid+1;
                else
                    hi=mid-1;
            }else
                lo++;
                  
        }
        
        return 0;
    }

};