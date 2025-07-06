class FindSumPairs {
public:
    vector<int>num1,num2;
    unordered_map<int,int>freq;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        num1=nums1;
        num2=nums2;


            for(auto j:nums2)
            freq[j]++;


        
    }
    
    void add(int index, int val) {

        int temp=num2[index];
        num2[index]+=val;

        freq[temp]--;
        freq[num2[index]]++;  
    }
    
    int count(int tot) {

        int ans=0;
          
        for(auto i:num1)
        {
          if(freq.find(tot-i)!=freq.end())
          ans+=freq[tot-i];
        }
        return ans;
    

    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */