public class PrintNumbers{
    public static void main(String[] args) {
        helper(0);
    }
    static void helper(int i){
        if (i==5) return;
        System.out.println(i);
        helper(i+1); 
    }    
}
