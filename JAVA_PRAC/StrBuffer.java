import java.util.*;
class StrBuffer{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        StringBuffer str=new StringBuffer();
        System.out.println("The capacity of String Buffer is: "+str.capacity());
        String input=new String();
        System.out.println("Enter a string: ");
        input = sc.next();
        str.append(input.toUpperCase());
        str.reverse();
        System.out.println("Reversed string is: "+str);
        System.out.println("Enter another string: ");
        input = sc.next();
        str.append(input);
        System.out.println("Appended String is: " +str);
    }
}