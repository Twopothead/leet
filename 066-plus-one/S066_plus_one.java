
public class S066_plus_one {
    public int[] plusOne(int[] digits) {
    	int[] digits_clone= digits.clone();
    	digits[digits.length - 1] += 1;
    	for (int i = digits.length-1; i > 0; i--) {
			if(digits[i]>=10) {
				digits[i] -= 10;
				digits[i-1] +=1;
			}
		}
    	if(digits[0]>=10) {
    		int[] result = new int[digits.length+1];
    		for (int i = digits.length-1; i >0; i--) {
				result[i] = digits[i];
			}
    		result[1] = digits[0]-10;
    		result[0] = 1;
    		return result;
    	}
    	return digits;
    }
	private void test(int[] digits) {
		for (int digit : digits) {
			System.out.print(digit + " ");
		}
		System.out.println("");
		digits = plusOne(digits);
		for (int digit : digits) {
			System.out.print(digit + " ");
		}
		System.out.println("");
	}
	private void testcases() {
//Example 1:
//Input: [1,2,3]
//Output: [1,2,4]
//Explanation: The array represents the integer 123.
//Example 2:
//Input: [4,3,2,1]
//Output: [4,3,2,2]
//Explanation: The array represents the integer 4321.
		int[] digits1 = {1,2,3};
		int[] digits2 = {4,3,2,1};
		int[] digits3 = {4,9,9,9};
		int[] digits4 = {9,9,9,9};
		System.out.println("Test1:");
		test(digits1);
		System.out.println("Test2:");
		test(digits2);
		System.out.println("Test3:");
		test(digits3);
		System.out.println("Test4:");
		test(digits4);
//		int[] digits5 = {9,9};
//		test(digits5);
	}
	public static void main(String[] args) {
		S066_plus_one s = new S066_plus_one();
		s.testcases();
	}
}
