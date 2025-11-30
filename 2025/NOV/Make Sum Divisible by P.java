class Solution {
    public int minSubarray(int[] nums, int p) {
        
        long totalSum = 0;
        for (int x : nums) totalSum += x;

        long remainder = totalSum % p;
        if (remainder == 0) return 0;

        HashMap<Long, Integer> map = new HashMap<>();
        map.put(0L, -1); 
        long prefix = 0;
        int minLen = nums.length;

        for (int i = 0; i < nums.length; i++) {
            prefix = (prefix + nums[i]) % p;

            long target = (prefix - remainder + p) % p;

            if (map.containsKey(target)) {
                minLen = Math.min(minLen, i - map.get(target));
            }

            map.put(prefix, i); 
        }

        return minLen == nums.length ? -1 : minLen;
    }
}