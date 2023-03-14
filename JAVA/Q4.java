import java.util.ArrayList;
import java.util.Scanner;

class Student_Results implements Comparable<Student_Results>{
    String regno;
    String name;
    String branch;
    double cgpa;
    static ArrayList<String> branchlist=new ArrayList<>();

    Student_Results(String reg, String name, String branch, float cgpa){
        this.regno=reg;
        this.name=name;
        if(!(branchlist.contains(branch)))
            branchlist.add(branch);
        this.branch=branch;
        this.cgpa=cgpa;
    }

    void display()
    {
        System.out.println("Regno: " + this.regno);
        System.out.println("Name: " + this.name);
        System.out.println("Branch: " + this.branch);
        System.out.println("CGPA: " + this.cgpa);
    }

    @Override
    public int compareTo(Student_Results S)
    {
        if(S==null)
            return -1;
        
        int c=Double.valueOf(cgpa).compareTo(S.cgpa);
        if(c!=0)
            return c;
        return 
    }

}


public class Q4{
    public static void main(String[] args) {
    
        ArrayList<Student_Results> S=new ArrayList<>();
        Scanner sc=new Scanner(System.in);

        String regno;
        String name;
        String branch;
        float cgpa;

        for(int i=0;i<2;i++)
        {
            System.out.println("Student " +(i+1) + "\n");
            System.out.println("Regno: ");
            regno=sc.next();
            sc.nextLine();

            System.out.println("Name: ");
            name=sc.nextLine();

            System.out.println("Branch: ");
            branch=sc.next();

            System.out.println("CGPA: ");
            cgpa=sc.nextFloat();

            S.add(new Student_Results(regno,name,branch,cgpa));   

        }
        
        sc.close();

        S.get(0).display();
        S.get(1).display();
        
    }
}
