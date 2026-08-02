class Solution {
    public boolean hasDuplicate(int[] nums) {
        HashMap<Integer, Integer> count = new HashMap();
    
        for (int i = 0; i < nums.length; i++) {
            Integer value = count.putIfAbsent(nums[i], 1); // returns null if absent
            if (value != null) {
                return true;
            }
        }
        return false;
    }
}