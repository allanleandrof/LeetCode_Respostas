class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] values = new int[2];
        for(int i = 0; i < nums.length; i++){
            for(int j = nums.length - 1; j > i; j--){
                if(nums[i] + nums[j] == target){ 
                values[0] = i;
                values[1] = j;

                return values;
                }
            } 
        } 
        return new int[0]; 
    }
}