class Solution {
    
public:
    #define ll long long
    #define mod 1000000007
   int peopleAwareOfSecret(int n, int delay, int forget) {
        ll day=2;
        vector<array<ll,3>> persons={{delay+1,forget+1,1}};
        while(day<=n){
            //remove all person who forgets secrets
            while(!persons.empty()&& persons[0][1]==day){
                persons.erase(persons.begin());
            }
            //find number of persons that can spread secret
            ll cnt=0;
            for(auto& x: persons){
                if(x[0]<=day){
                    cnt+=x[2];
                }
                cnt%=mod;
            }
            persons.push_back({day+delay,day+forget,cnt});
            day++;
        }
        ll ans=0;
        for(auto& x : persons){ans+=x[2]; ans%=mod;}
        return ans;

    }};