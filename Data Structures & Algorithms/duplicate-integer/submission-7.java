class Solution {
    public boolean hasDuplicate(int[] nums) {
        for(int i = 0; i < nums.length - 1; i++) {
            for(int j = i + 1; j < nums.length; j++) {
                if(nums[i] == nums[j]) {
                    return true;
                }
            }
        }

        return false;
    }
    
    public void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of array: ");
        int n = sc.nextInt();
        int[] nums = new int[n];
        boolean containDuplicated = hasDuplicate(nums);
        System.out.println("Is array duplicate: " + containDuplicated);
    }
}