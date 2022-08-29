class Solution {
    public int[] twoSum(int[] nums, int target) {
        int i1=-1 , i2=-1;
        for(int i = 0;i<nums.length;i++)
        {
            for(int j = i+1;j<nums.length;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    i1 = i;
                    i2 = j;
                }
            }
        }
        int arr2[] = new int[2];
        arr2[0] = i1;
        arr2[1]= i2;
        return arr2;
    }
}