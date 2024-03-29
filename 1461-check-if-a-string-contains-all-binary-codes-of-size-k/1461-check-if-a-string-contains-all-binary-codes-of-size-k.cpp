class Solution {
public:
    bool hasAllCodes(string s, int k) {
        const int n= (int)s.size();
        if(n<k) return 0;
        unordered_set<int>hashSet;
        int mask=0;
        int all=(1<<k)-1; // k ones
        for(int i=0;i<n;i++){
            mask = ((mask<<1) & all) | (s[i]-'0');
            if(i>=k-1)
                hashSet.insert(mask);
        }
        
        return hashSet.size()==(1<<k);
    }
};
