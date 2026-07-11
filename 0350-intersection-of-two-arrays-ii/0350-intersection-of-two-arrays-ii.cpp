class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;

        //Approach 1 using the hashmap
        // unordered_map<int,int> mp;
        // for(int num: nums1){
        //     mp[num]+=1;
        // }
        // for(int num: nums2){
        //     if(mp[num]>0){
        //         result.push_back(num);
        //         mp[num]--;
        //     }
        // }

        //Approach 2 using the two pointers
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0;
        int j=0;
        while(i<n1 && j<n2){
            if(nums1[i]==nums2[j]){
                result.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j]) j++;
            else i++;
        }
        return result;
    }
};