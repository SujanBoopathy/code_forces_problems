import java.util.*;
import java.io.*;
public class beautiful_year{
    public static void main(String args[]){
        int flag=0;
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        n++;
        while(flag!=1){
            int a=n%10;
            int b=(n/10)%10;
            int c=((n/10)/10)%10;
            int d=(((n/10)/10)/10)%10;
            if(a==b || a==c || a==d || b==c || b==d || c==d || d==a ){
                n++;
                continue;
            }
            else{
                flag=1;
            }
        }
        System.out.println(n);

    }
    
}