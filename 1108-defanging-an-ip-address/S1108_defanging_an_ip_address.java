public class S1108_defanging_an_ip_address {
    public String defangIPaddr(String address) {
        String r="";
        for (int i = 0; i < address.length(); i++){
            if(address.charAt(i)=='.'){
                r += "[.]";
            }else
                r += address.charAt(i);
        }
        return r;
    }
    public void testcase(String address){
        System.out.println(defangIPaddr(address));
    }
    public void test(){
        testcase("1.1.1.1");
        testcase("255.100.50.0");

    }
    public static void main(String[] args) {
        S1108_defanging_an_ip_address s = new S1108_defanging_an_ip_address();
        s.test();
    }
}
