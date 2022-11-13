import java.util.*;
class QueueError extends Exception{
    public QueueError(String msg){
        super(msg);
    }
}

class Que{
    private int size;
    private int front = -1;
    private int rear = -1;
    private Integer[] queArr;
    public Que(int size){
        this.size = size;
        queArr = new Integer[size];
    }

    public void insert(int item) throws Exception, QueueError{
        try{
            if(rear == size-1){
                throw new QueueError("Queue Overflow");
            }
            else if (front == -1){
                rear++;
                queArr[rear] = item;
                front = rear;
            }
            else{
                rear++;
                queArr[rear] = item;
            }
        }
        catch(QueueError e){
                e.printStackTrace();
        }
    }

    public void delete() throws Exception, QueueError{
        try{
            if(front == -1){
                throw new QueueError("QUeue Underflow");
            }
            else if(front == rear){
                System.out.println("\nRemoved " +queArr[front] +"from Queue");
                queArr[front] = null;
                front--;
                rear--;
            }
            else{
                System.out.println("\nRemoved "+queArr[front]+"from Queue");
                queArr[front] = null;
                for(int i=front+1;i<=rear;i++){
                    queArr[i-1]=queArr[i];
                }
                rear--;
            }
        }catch(QueueError e){
            e.printStackTrace();
        }
    }

    public void display(){
        try{
             if(front==-1){
                throw new QueueError("Empty Queue");
             }
             else{
                System.out.println("\n Queue is: ");
                for(int i=front; i<=rear; i++){
                    System.out.println(queArr[i]+"\t");
                }
                System.out.println();
             }
        }catch(QueueError e){
            e.printStackTrace();
        }
    }
}

class Main{
    public static void main(String[] args) throws Exception{
        System.out.println("\n\tQueue Test using Array \n\n");
        Scanner scan=new Scanner(System.in);
        System.out.print("Enter size of queue array: ");
        int size = scan.nextInt();
        Que q=new Que(size);
        int ch;
        try{
            while(true){
                System.out.println("\tQUEUE OPERATIONS\t");
                System.out.println("\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
                System.out.println("Enter choice: ");
                ch = scan.nextInt();
                switch(ch){
                    case 1: System.out.println("Enter integer to insert: ");
                            q.insert(scan.nextInt()); break;
                    case 2: q.delete(); break;
                    case 3: q.display(); break;
                    case 4: return;
                }
            }
        }catch(QueueError e){
            e.printStackTrace();
        }
    }
}