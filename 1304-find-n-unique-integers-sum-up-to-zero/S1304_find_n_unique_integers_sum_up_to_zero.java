public class S1304_find_n_unique_integers_sum_up_to_zero {
    public int[] sumZero(int n) {
        int[] r = new int[n];
        if( n % 2 != 0){
            r[0] = 0;
            int t = 1;
            for(int i = 1;i <= n/2; i++){
                r[i] = t++;
            }
            t = 1;
            for(int i = n/2+1;i < n; i++){
                r[i] = -t++;
            }
        }else{
            for(int i = 0;i<n/2;i++){
                r[i] = i+1;
            }
            int t = 1;
            for(int i = n/2;i<n;i++,t++){
                r[i] = -t;
            }
        }
        return r;
    }
    public void testcase(int n){
        for(int i : sumZero(n)){
            System.out.print(i + " ");
        }
        System.out.println("");
    }
    public void test(){
        testcase(5);
        testcase(3);
        testcase(1);
        testcase(6);
        testcase(4);

    }

    public static void main(String[] args) {
        System.out.println("hello");
        S1304_find_n_unique_integers_sum_up_to_zero s = new S1304_find_n_unique_integers_sum_up_to_zero();
        s.test();
    }
}
