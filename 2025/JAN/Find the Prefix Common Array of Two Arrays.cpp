 vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {

        unordered_map<int,int>m;
        int common_element=0;
        vector<int>pca;
        for(int i=0;i<A.size();i++)
        {
          m[A[i]]++;
          if(m[A[i]]==2)
          common_element++;
          m[B[i]]++;
          if(m[B[i]]==2)
          common_element++;
          pca.push_back(common_element);
        }
        return pca;
        
    }