import java.util.Scanner;

class Circle
{
    private double radius;
    Circle()
    {
        radius=0.0;
    }
    Circle(double radius)
    {
        this.radius=radius;
    }
    public double getRadius(){
        return this.radius;
    }
    public double findArea(){
        return 3.1412*this.radius*this.radius;
    }
}

public class q1
{
    public static void main(String args[])
    {
        Circle c1=new Circle(12);
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter radius: ");
        Circle c2=new Circle(sc.nextDouble());

        System.out.println("C1 radius: "+c1.getRadius());
        System.out.println("C1 Area: "+c1.findArea());

        System.out.println("C2 radius: "+c2.getRadius());
        System.out.println("C2 Area: "+c2.findArea());

    }
}