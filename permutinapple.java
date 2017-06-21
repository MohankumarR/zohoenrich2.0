import java.util.*;
public class Basket {

    public static void main(String[] args) {
        // TODO Auto-generated method stub
        Scanner S=new Scanner(System.in);
        int n=S.nextInt();
        int b=S.nextInt();
        int a[]=new int [n];
        int i=0,s=0;
        for(i=0;i<n;i++)
        {
            a[i]=S.nextInt();
        }
        int c[]=new int[n];
        int j=0,k=0,m=0;
        c[0]=-1;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if((a[i]+a[j])==b)
                {
                    m++;
                    c[k]=a[i];
                    k++;
                    c[k]=a[j];
                    k++;
                    break;
                }
                if(a[i]==b&&s==0)
                {
                    m++;
                    s=1;
                    break;
                }
            }
        }
        for(i=0;i<k;i++)
        {
            for(j=i+2;j<k;j++)
            {
                if(c[i]==c[j])
                {
                    m--;
                    i++;
                    break;
                }
            }
        }
        System.out.println(m);
    }

}
