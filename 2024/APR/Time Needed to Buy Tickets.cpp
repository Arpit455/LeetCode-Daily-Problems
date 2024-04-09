 int timeRequiredToBuy(vector<int>& tickets, int k) {

        int time = 0;

        for (int i = 0; i < k; i++) {
            if (tickets[i] < tickets[k])
                time += tickets[i];
            else
                time += tickets[k];
        }
        for (int i = k + 1; i < tickets.size(); i++) {
            if (tickets[i] >= tickets[k])
                time += tickets[k] - 1;
            else
                time += tickets[i];
        }
        time += tickets[k];
        return time;
    }