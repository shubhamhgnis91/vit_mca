class Consumer{
    public int cNo;
    public String cName;
    public int pReading;
    public int cReading;
    public boolean type;

    Consumer(int cno,String name, int p, int c, boolean type){
        this.cNo=cno;
        this.cName=name;
        this.pReading=p;
        this.cReading=c;
        this.type=type;
    }

    public double billAmount(){

        double d=0.0,units=this.cReading-this.pReading;
        if(this.type)
        {
            if(units <=100)
            {
                d+=units*1;
                return d;
            }
            if(units<=200)
            {
                d+=100*1;
                units-=100;
                d+=units*2.5;
                return d;
            }
            if(units<=500)
            {
                d+=100*1;
                units-=100;
                d+=units*4;
                return d;
            }

            d+=100*1;
            units-=100;
            d+=units*6;
            return d;
        }

        if(units <=100)
        {
            d+=units*2;
            return d;
        }
        if(units<=200)
        {
            d+=100*2;
            units-=100;
            d+=units*4.5;
            return d;
        }
        if(units<=500)
        {
            d+=100*2;
            units-=100;
            d+=units*6;
            return d;
        }

        d+=100*2;
        units-=100;
        d+=units*7;
        return d;

    }
}

public class q3 {
    public static void main(String[] args) {
        Consumer c1=new Consumer(1001, "Shubham", 100, 500, true);
        double b=c1.billAmount();
        System.out.println(b);   
    }
}
