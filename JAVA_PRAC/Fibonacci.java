import java.util.*;
class Fibonacci{
    public static int fib(int n){
        if(n==1||n==2) return 1;
        else return(fib(n-1)+fib(n-2));
    }
    public static void main(String[] args ){
        int n;
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter n: ");
        n=scan.nextInt();
        System.out.println("nth element is: " +(fib(n)));
    }
}