import java.util.Stack;
class S345_reverse_vowels_of_a_string {
    public String reverseVowels(String s) {
    	char a;
    	int len = s.length();
    	char arr[] = new char[len];
    	Stack<Integer> st1 = new Stack<Integer>();
    	Stack<Integer> st2 = new Stack<Integer>();
    	for (int i = 0; i < s.length(); i++) {
			a = s.charAt(i);
			if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U') {
				st1.push(i);
			}else{
				arr[i] = a;
			}
		}
    	int vtotal = st1.size();
    	while(st1.size()>vtotal/2) {
    		st2.push(st1.pop());
    	}
    	if(st2.size()!=st1.size())
    		st1.push(-1);
    	while (!st1.isEmpty()) {
			int p1 = st1.pop();
			int p2 = st2.pop();
			if(p1!=-1 && p2!=-1) {
				arr[p2] = s.charAt(p1);
				arr[p1] = s.charAt(p2);		
			}else {
				if(p2!=-1)arr[p2] = s.charAt(p2);
				if(p1!=-1)arr[p1] = s.charAt(p1);
			}
		}
    	String result = new String(arr);
		return result;     
    }
    public void testcase(){
    	System.out.println(reverseVowels("hello"));
    	System.out.println(reverseVowels("leetcode"));
		System.out.println(reverseVowels("leetacode"));
		System.out.println(reverseVowels("aA"));
    }
    public static void main(String[] args) {
        S345_reverse_vowels_of_a_string S = new S345_reverse_vowels_of_a_string();
        S.testcase();
    }
}