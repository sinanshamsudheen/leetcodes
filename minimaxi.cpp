class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double> avg;
        int n=nums.size();
        for(int i=0;i<n/2;i++){
            int mini=*min_element(nums.begin(),nums.end());
            int maxi=*max_element(nums.begin(),nums.end());
            avg.push_back((mini + maxi)/2.0);
            nums.erase(std::remove(nums.begin(),nums.end(),maxi),nums.end());
            nums.erase(std::remove(nums.begin(),nums.end(),mini),nums.end());
        }
        return *min_element(avg.begin(),avg.end());
    }
};