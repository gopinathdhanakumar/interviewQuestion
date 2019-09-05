 import java.util.*;
 class mypoint
{
  double x;
  double y;
  void get(double a,double b)
  {
   x=a;
   y=b;
  }
  String  show()
  {
    return ("("+Integer.toString((int)Math.round(x)) +" ,"+Integer.toString((int)Math.round(y))+")");
  }
}
class Shortestpoint {
  public static void main(String[] args) {
    
    int p1=0,p2=0;
    Scanner s=new Scanner(System.in);
    System.out.println("enter number of points");
     int n=s.nextInt();
    mypoint p[]=new mypoint[n];
    for(int i=0;i<n;i++)
    {
      System.out.println("enter x");
      double x=s.nextDouble();
      System.out.println("enter y");
      double y=s.nextDouble();
      p[i]=new mypoint();
      p[i].get(x,y);
    }
    System.out.println(p[0].show());
    double m=Double.MAX_VALUE;
    String ans="";
    for (int j=0;j<n-1;j++)
    {
      for( int k=j+1;k<n;k++)
      {
        double temp=Math.sqrt((Math.pow(p[j].x-p[k].x,2)+Math.pow(p[j].y-p[k].y,2)));
        if(m>temp)
        { 
       m=temp;
        p2=k;
        p1=j;      }
      }
    }
    System.out.print("The points are "+p[p1].show() +"and" +p[p2].show());
    System.out.print(" with value "+m);
  }
}
