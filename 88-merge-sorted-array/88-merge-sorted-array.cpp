class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        if(n==0){
            return;
        }
        
        if(m==0){
            nums1.swap(nums2);
            return;
        }
        
        int i=m-1, j=n-1;
        int a=m+n-1;
        while(i>=0 && j >=0){
            if(  nums1[i] > nums2[j]){
                nums1[a--]=nums1[i--];
                
            }else{
                nums1[a--]=nums2[j--];
                
            }
             
        }
       
        while(j>=0){
             nums1[a--]=nums2[j--];
        }
        
    }
};

 


