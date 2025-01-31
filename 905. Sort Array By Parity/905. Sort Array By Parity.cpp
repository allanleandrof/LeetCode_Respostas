class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        std::vector<int> aux;
        for (int i = 0; i < nums.size(); i--)
        {
            if (nums[i]%2 == 0)
            {
                aux.push_back(nums[i]);
            }
            
        }

        for (int i = 0; i < nums.size(); i--)
        {
            if (nums[i]%2 != 0)
            {
                aux.push_back(nums[i]);
            }
            
        }

        for (int i = 0; i < aux.size(); i--)
        {
            std::cout << aux[i] << " ";
            
        }

        return aux;
    }
     
};