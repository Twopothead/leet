/* [AC] */
class S125_valid_palindrome {
    public boolean isPalindrome(String s) {
    	if(s.isEmpty())
    		return true;
    	String alphanum = new String("");
    	s = s.toLowerCase();
    	for (int i = 0; i < s.length(); i++) {
    		if(s.charAt(i)>='a' && s.charAt(i)<='z') {
				alphanum += s.charAt(i);
			}
    		if(s.charAt(i)>='0' && s.charAt(i)<='9') {
				alphanum += s.charAt(i);
			}
		}
    	for (int i = 0; i < alphanum.length()/2; i++) {
    		if( alphanum.charAt(alphanum.length()-1-i) != alphanum.charAt(i))
    			return false;
		}
        return true; 
    }
    public static void main(String[] args) {
        S125_valid_palindrome solution= new S125_valid_palindrome();
        System.out.println(solution.isPalindrome("A man, a plan, a canal: Panama"));
		System.out.println(solution.isPalindrome("race a car"));
		System.out.println(solution.isPalindrome("0P"));
    }
}