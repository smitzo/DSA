// package InputOutput;
import java.util.Scanner;
class InputOutput{
    public static void main(String[] args){
        System.out.println("Hi, what is your name bro?"); // output
        Scanner inp = new Scanner(System.in); //take input 
        String name = inp.nextLine();
        System.out.println("Hello " + name + " what is your Age?"); // output
        int age = inp.nextInt();
        System.out.println("Okay " + name + " your age is" + age); // output
        inp.close();
    }
}  