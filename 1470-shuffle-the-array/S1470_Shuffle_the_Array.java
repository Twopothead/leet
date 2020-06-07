public class S1470_Shuffle_the_Array {
    public int[] shuffle(int[] nums, int n) {
        int[] r = new int[2 * n];
        int t = 0;
        for(int i = 0;i < 2 * n; i++){
            if(i < n){
                r[2*i] = nums[i];
            }else {
                t = i-n;
                r[2*t+1] = nums[i];
            }
        }
        return r;
    }
    public static void explore(){
        int n = 3;
        int[] nums = {2,5,1,3,4,7};
        int[] r = new int[2 * n];
        int t = 0;
        for(int i = 0;i < 2 * n; i++){
            if(i < n){
                r[2*i] = nums[i];
            }else {
                t = i-n;
                r[2*t+1] = nums[i];
            }
        }
        for(int i = 0;i<2*n;i++){
            System.out.print(r[i]+" ");
        }
    }
    public void testcase(int[] nums, int n){
        for(int i : nums){
            System.out.print(i + " ");
        }
        System.out.println(" n="+n);
        for(int j :  shuffle(nums,n)){
            System.out.print(j + " ");
        }
        System.out.println("");
    }
    public void test(){
        int[] nums1 = {2,5,1,3,4,7};
        testcase(nums1,nums1.length / 2);
        int[] nums2 = {1,2,3,4,4,3,2,1};
        testcase(nums2,nums2.length / 2);
        int[] nums3 = {1,1,2,2};
        testcase(nums3,nums3.length / 2);
    }
    public static void main(String[] args) {
        S1470_Shuffle_the_Array s = new S1470_Shuffle_the_Array();
        s.test();
    }
}
