import java.awt.*;
import java.awt.event.*;

class FactAns extends Frame implements ActionListener{
    TextArea t1;
    Label l2;
    Button b;
    public FactAns(){
        t1=new TextArea();
        l2=new Label();
        b=new Button("Compute");
        t1.setBounds(50,50,50,50);
        l2.setBounds(50,300,50,50);
        b.setBounds(50,150,50,50);
        add(b); add(t1); add(l2);
        setVisible(true);
        setSize(600,600);
        setLayout(null);
        b.addActionListener(this);
    }

    public void actionPerformed(ActionEvent e){
        int i,fact=1;  
        int number=Integer.parseInt(t1.getText());
        for(i=1;i<=number;i++){    
            fact=fact*i;    
        }    
        l2.setText(Integer.toString(fact));
    } 

}

class ComputeFact{
    public static void main(String[] args){
        new FactAns();
    }
}