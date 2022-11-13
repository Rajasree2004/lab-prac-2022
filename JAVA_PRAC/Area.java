import shapearea.Circle;
import shapearea.Triangle;
import shapearea.Square;

class Area{
    public static void main(String[] args){
        Square s1=new Square();
        Triangle t1=new Triangle();
        Circle c1=new Circle();

        s1.getDim();
        System.out.println("Area of Square is: " +s1.getArea());
        t1.getDim();
        System.out.println("Area of Triangle is: " +t1.getArea());
        c1.getDim();
        System.out.println("Area of Circle is: " +c1.getArea());
        
    }
}