class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string>result;
        string first = "qwertyuiop";
        string second = "asdfghjkl";
        string third = "zxcvbnm";
        int arr[26]={0};
        for(int i =0; i<first.length(); i++){
            int x = first[i];
            arr[x-97]=1;
        }
        for(int i =0; i<second.length(); i++){
            int x = second[i];
            arr[x-97]=2;
        }
        for(int i =0; i<third.length(); i++){
            int x = third[i];
            arr[x-97]=3;
        }
        for(int i =0; i<words.size(); i++){
            int row;
            if((int)words[i][0]<97){
                row = arr[((int)words[i][0]+32-97)];
            }
            else{
                row = arr[((int)words[i][0])-97];
            }
            int flag = true;
            for(int j =0; j<words[i].size(); j++){
                int x;
                if((int)words[i][j]<97){
                    x = arr[((int)words[i][j])+32-97];
                }
                else{
                    x = arr[((int)words[i][j])-97];
                }
                if(x!=row){
                    flag = false;
                    break;
                }
            }
            if(flag == true){
                result.push_back(words[i]);
            }
        }
        return (result);
    }
};