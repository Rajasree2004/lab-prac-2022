import java.awt.*;
import java.awt.event.*;

class Factorial{
    int fact(int n){
        if(n==0||n==1) return 1;
        else return n*fact(n-1);
    }
}



public class FactD implements ActionListener{
    TextField t1,t2;
    Frame f;
    Button b1;
    FactD(){
        f = new Frame("Factorial");
        t1 = new TextField();
        t2 = new TextField();
        b1 = new Button("Compute");
        f.add(t1);f.add(t2);f.add(b1);
        t1.setBounds(50,50,100,20);
        t2.setBounds(50,100,100,20);
        b1.setBounds(50,150,100,20);
        f.setSize(400,400);
        f.setVisible(true);
        f.setLayout(null);
        f.addWindowListener(new WindowAdapter(){
            public void windowClosing(WindowEvent E){
                f.dispose();
            }
        });
        b1.addActionListener(this);
    }
    public void actionPerformed(ActionEvent e){
        String num = t1.getText();
        int num1 = Integer.parseInt(num);
        Factorial f = new Factorial();
        int ans = f.fact(num1);
        String f_ans = Integer.toString(ans);
        t2.setText(f_ans);

    }
   public static void main(String args[]){
    new FactD();
   }
}
