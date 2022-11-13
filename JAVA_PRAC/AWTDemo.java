import java.awt.*;
import java.util.*;


public class AWTDemo{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a character: ");
        char ch = sc.next().charAt(0);
        Frame f=new Frame();
        Label l=new Label();
        if(ch=='M'|| ch=='m'){
            l.setText("Good Morning");
        }
        else if(ch=='A'|| ch=='a'){
            l.setText("Good Afternoon");
        }
        else if(ch=='E'|| ch=='e'){
            l.setText("Good Evening");
        }
        else if(ch=='N'|| ch=='n'){
            l.setText("Good Night");
        }
        f.add(l);
        f.setSize(300, 300);
        f.setVisible(true);
    }
}