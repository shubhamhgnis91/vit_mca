
class Line{
    public int x1;
    public int y1;
    public int x2;
    public int y2;

    Line(int x1,int x2,int y1,int y2){
        this.x1=x1;
        this.x2=x2;
        this.y1=y1;
        this.y2=y2;
    }

    public double length(){
        System.out.println(this.x1);
        System.out.println(this.x2);
        System.out.println(this.y1);
        System.out.println(this.y2);
        return Math.sqrt(Math.pow((this.x2-this.x1),2)+Math.pow((this.y2-this.y1),2));
    }
}


public class q2 {
    public static void main(String args[])
    {
        Line l1=new Line(0,5,0,5);
        System.out.println("Length: "+l1.length());
    }
}
