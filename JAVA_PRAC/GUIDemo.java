import javax.swing.*;
import java.awt.*;
import java.awt.event.*;


public class GUIDemo extends JFrame{
    JTextField t1;
    JTextField t2;
    JButton b1;

    public GUIDemo(){
        super("GUI Diplay");
        t1 = new JTextField(10);
        t2 = new JTextField(10);
        b1 = new JButton("Display");
        t1.setBounds(50,50,150,20);
        t2.setBounds(50,100,150,20);
        b1.setBounds(50,150,100,30); 
        add(t1); add(t2); add(b1);
        b1.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e){
                paint(getGraphics());
            }
        });

        setLayout(null);
        setSize(300, 300);
        setVisible(true);
    }
    public void paint(Graphics g){
        g.drawString(t1.getText(), 50, 50);
        g.drawString(t2.getText(), 50, 75);
    }

    public static void main(String[] args){
        new GUIDemo();
    }
}