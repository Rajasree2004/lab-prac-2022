import java.util.*;

interface Stack{
    void push();
    void pop();
    void display();
}

class FixedStack implements Stack{
    private int top = -1;
    int fstack[] =new int[5];
    private Scanner scan=new Scanner(System.in);

    public void push(){
        if (top==fstack.length-1) System.out.println("Stack Overflow");
        else{
            System.out.println("Enter element: ");
            fstack[++top] = scan.nextInt();
        }
    }

    public void pop(){
        if(top==-1) System.out.println("Stack Underflow");
        else{
            System.out.println("Delted element: "+fstack[top--]);
        }
    }

    public void display(){
        if (top==-1) System.out.println("Stack Empty");
        else{
            System.out.println("Stack Elements: ");
            for(int i=top; i>=0; i--){
                System.out.println(fstack[i]);
            }
        }
    }

}

class DynamicStack implements Stack{
    private int top = -1;
    int[] dstack;
    Scanner scan=new Scanner(System.in);

    DynamicStack(int size){
        dstack = new int[size];

    }

    public void push(){
        if (top==dstack.length-1) System.out.println("Stack Overflow");
        else {
            System.out.println("Enter Element: ");
            dstack[++top] = scan.nextInt();
        }
    }

    public void pop(){
        if (top==-1) System.out.println("Stack Underflow");
        else{
            System.out.println("Deleted Element: "+dstack[top--]);
        }
    }

    public void display(){
        if (top==-1) System.out.println("Stack Empty");
        else {
            System.out.println("Stack ELements: ");
            for(int i=top; i>=0; i--) System.out.println(dstack[i]);
        }
    }
}

class InterfaceExec{
    public static void main(String[] args){
        int ch;
        Scanner sc=new Scanner(System.in);
        System.out.println("\n1. Fixed Stack\n 2. Dyanmic Stack \n");
        ch = sc.nextInt();
        if (ch==1){
            FixedStack f=new FixedStack();
            System.out.println("\n1. Push \t2. Pop \t3.Pop \t4.Exit");
            while(true){
                System.out.println("Enter Choice: ");
                ch = sc.nextInt();
                switch(ch){
                    case 1: f.push(); break;
                    case 2: f.pop(); break;
                    case 3: f.display(); break;
                    case 4: break;
                    default: System.out.println("Invalid input");
                }
                if(ch==4) break;
            }
        }

        else{
            System.out.println("Enter size: ");
            DynamicStack d=new DynamicStack(sc.nextInt());
            System.out.println("\n1. Push \t2. Pop \t3.Pop \t4.Exit");
            while(true){
                System.out.println("Enter Choice: ");
                ch = sc.nextInt();
                switch(ch){
                    case 1: d.push(); break;
                    case 2: d.pop(); break;
                    case 3: d.display(); break;
                    case 4: break;
                    default: System.out.println("Invalid input");
                }
                if(ch==4) break;
            }
        }
    }
}