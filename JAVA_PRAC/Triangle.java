package shapearea;

import java.util.*;
public class Triangle{
    double base, height;
    public void getDim(){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter base: ");
        base = sc.nextDouble();
        System.out.println("Enter height: ");
        height = sc.nextDouble();
    }
    public double getArea(){
        return base*height*0.5;
    }
}