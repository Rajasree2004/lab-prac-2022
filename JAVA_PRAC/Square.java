package shapearea;
import java.util.*;
public class Square{
    double side;
    public void getDim(){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter side: ");
        side = sc.nextDouble();
    }
    public double getArea(){
        return side*side;
    }
}