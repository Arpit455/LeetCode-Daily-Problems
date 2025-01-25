vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        vector<int>nums1=nums;

        sort(nums.begin(),nums.end());

        vector<queue<int>>v;
        unordered_map<int,int>m;
        int i=0 , group=0, n=nums.size();
        while(i<n)
        {
            int prev=nums[i];
            queue<int>q;
            q.push(nums[i]);
            m[nums[i]]=group;
            i++;
            while( i<n && true)
            {
                if(nums[i]-prev<=limit)
                {
                q.push(nums[i]);
                m[nums[i]]=group;
                prev=nums[i];
                i++;
                }
                else
                break;
            }
            v.push_back(q);
            group++;
        }

        for(int i=0;i<nums1.size();i++)
        {
            cout<<m[nums1[i]]<<" ";
            nums1[i]=v[m[nums1[i]]].front();
            v[m[nums1[i]]].pop();

        }
        return nums1;

        
    }