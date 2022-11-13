import java.util.*;

class Student{
    int ht;
    String name;
    String dept;
    int n;
    Scanner sc=new Scanner(System.in);
    Student(){}
    Student(int n1){
        n=n1;
    }
    Student[] s=new Student[5];
    void getStudent(){
        for(int i=0; i<n; i++){
            s[i] = new Student();
            System.out.println("Enter Hall Ticket Number: ");
            s[i].ht = sc.nextInt();
            System.out.println("Enter Name: ");
            s[i].name = sc.next();
            System.out.println("Enter Department: ");
            s[i].dept = sc.next();
            
        }


    }

    void displayStudent(){
        for(int i=0; i<n; i++){
            System.out.println("Hall Ticket number: " +s[i].ht);
            System.out.println("Hall Ticket number: " +s[i].name);
            System.out.println("Hall Ticket number: " +s[i].dept);
        }
    }
}


class StudentRec{
    public static void main(String[] args){
       Scanner sc=new Scanner(System.in) ;
       System.out.println("Enter the number of students: ");
       int N=sc.nextInt();
       Student s1=new Student(N);
       s1.getStudent();
       s1.displayStudent();
    }
}