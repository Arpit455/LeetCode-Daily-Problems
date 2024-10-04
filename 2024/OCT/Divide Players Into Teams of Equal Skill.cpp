long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int front=0,back=skill.size()-1;
        long long int chemistry=0,s=skill[0]+skill[back];
        while(front<back)
        {
            if(skill[front]+skill[back]!=s)
            return -1;
            chemistry+=skill[front]*skill[back];
            front++;
            back--;
        }
        return chemistry;
        
    }