class Solution {
    vector<int> fact,digits;
    void solve(string& ans,int n,int k)
    {
        if(n==1){       //Insert whatever digit is left at the end
            ans+=to_string(digits.back());
            return;
        }
        //This runs if we have more than 1 digit in digits array
        int index = k/fact[n-1]; //Defines no of blocks to skip (each block of size fact[n-1])

        if(k%fact[n-1]==0)  //We need convert 1 based indexing to 0 based.So, decrese index by 1
            index-=1;
        
        ans+=to_string(digits[index]);  //Add new character
        digits.erase(digits.begin()+index);    //Erase digit after using
        
        k -= fact[n-1]*index;  //Decrease K value
        solve(ans,n-1,k);
    }
public:
    string getPermutation(int n, int k) {
        //Store all factorials from 0 to N
        fact.push_back(1);
        int f=1;
        for(int i=1;i<n;++i)
        {
            f*=i;
            fact.push_back(f);
        }
        //Push your digits in array
        for(int i=1;i<=n;++i)
            digits.push_back(i);
        
        string ans = "";
        solve(ans,n,k); 
        return ans;
    }
};
