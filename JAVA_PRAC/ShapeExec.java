abstract class Shape{
    abstract void numOfSides();
}

class Triangle extends Shape{
    void numOfSides(){
        System.out.println("Triangle - 3 sides");
    }
}

class Trapezoid extends Shape{
    void numOfSides(){
        System.out.println("Trapezoid - 4 sides");
    }
}

class Hexagon extends Shape{
    void numOfSides(){
        System.out.println("Hexagon - 6 sides");
    }
}

class ShapeExec{
    public static void main(String[] args){
        new Triangle().numOfSides();
        new Trapezoid().numOfSides();
        new Hexagon().numOfSides();
    }
}

