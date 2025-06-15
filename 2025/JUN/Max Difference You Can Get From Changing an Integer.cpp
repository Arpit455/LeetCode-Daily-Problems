class Solution {
public:
    int maxDiff(int num) {

        string temp = to_string(num);

        string maxNum = temp, minNum = temp;

        for (int i = 0; i < maxNum.size(); i++) {
            if (maxNum[i] != '9') {
                char first = maxNum[i];
                for (int j = i; j < maxNum.size(); j++) {
                    if (maxNum[j] == first) {
                        maxNum[j] = '9';
                    }
                }
                break;
            }
        }

        cout<<maxNum;
        for (int i = 0; i < minNum.size(); i++) {
            if (minNum[i] != '1' && i==0 ) {
                char first = minNum[i];
                for (int j = i; j < minNum.size(); j++) {
                    if (minNum[j] == first) {
                        minNum[j] = '1';
                    }
                }
                break;
            }
            else if(minNum[i] != '0' && i!=0 && minNum[i]!=minNum[0])
            {
                char first = minNum[i];
                for (int j = i; j < minNum.size(); j++) {
                    if (minNum[j] == first) {
                        minNum[j] = '0';
                    }
                }
                break;
            }
        }

        cout<<minNum;

        return stoi(maxNum) - stoi(minNum);
    }
};