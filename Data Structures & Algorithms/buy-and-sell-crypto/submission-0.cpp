class Solution {
public:
    int maxProfit(vector<int>& p) 
    {
        
        int ans=0;
        for(int i=0;i<p.size()-1;i++)
        {
            int maxi=0;
            for(int j=i+1;j<p.size();j++)
            {
                if(p[j]>p[i])
                {
                    maxi=max(maxi,p[j]-p[i]);
                }
            }

            cout<<maxi<<endl;

            ans=max(ans,maxi);


        }

        return ans;
        
    }
};
