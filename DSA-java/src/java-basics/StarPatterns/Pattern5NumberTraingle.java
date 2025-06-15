public class Pattern5NumberTraingle {
    public static void main(String[] args) {
        printTriangle(5);
    }

    private static void printTriangle(int n){
        int val = 1;
        for (int i=1;i<n;i++){
            for (int j=1;j<=i;j++){
                System.out.print(val+" ");
                val+=1;
            }
            System.out.println("");
        }
    }
}
