import java.util.*;

class numinput{
    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);
        System.out.print("Input number: ");
        int x = scan.nextInt();

        if(x==1) System.out.println("WeekDay: Monday");
        else if(x==2) System.out.println("WeekDay: Tuesday");
        else if(x==3) System.out.println("WeekDay: Wednesday");
        else if(x==4) System.out.println("WeekDay: Thursday");
        else if(x==5) System.out.println("WeekDay: Friday");
        else if(x==6) System.out.println("WeekDay: Saturday");
        else if(x==7) System.out.println("WeekDay: Sunday");
        else System.out.println("Invalid");
    }
}