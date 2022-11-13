package shapearea;
import java.util.*;

public class Circle{
    double radius;
    public void getDim(){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter radius: ");
        radius = sc.nextDouble();
    }
    public double getArea(){
        return radius*radius*3.14;
    }
}