import java.util.Hashtable;

public class S202_happy_number {
	int sumOfsquares(int n) {
    	int r = 0, t = 0;
    	while (n>10) {
    		t = (n%10);
    		r +=  t * t;
			n /= 10;
		}
    	t = ((n%10)==0)?1:(n%10);
    	r += t * t;
    	return r;
	}
    public boolean isHappy(int n) {
    	int t = n;
    	Hashtable<Integer, Integer> numbers = new Hashtable<Integer,Integer>();
		while(true){
    		t = sumOfsquares(t);
    		if(numbers.containsKey(t)) {
    			break;
    		}
    		numbers.put(t, t);
    		// System.out.println(t);
		}
		return (t==1)?true:false;
    }
	public static void main(String[] args) {
		S202_happy_number s = new S202_happy_number();  
		s.testcases();
	}
	private void test(int n){
		
		System.out.println("Input: "+ n + "\nOutput: "+ isHappy(19));
	}
	private void testcases() {
//		Write an algorithm to determine if a number is "happy".
//
//		A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.
//
//		Example:
//
//		**Input:** 19
//		**Output:** true
//		**Explanation:** 12 + 92 = 82
//		82 + 22 = 68
//		62 + 82 = 100
//		12 + 02 + 02 = 1
		test(19);
		test(7);
		System.out.println(sumOfsquares(7));
		// input:7 Expected:true 
	}
}
