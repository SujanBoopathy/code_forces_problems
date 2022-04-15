import java.util.*;
import java.lang.*;
public class two_int_problem{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=0;i<n;i++){
            int a,b;
            a=sc.nextInt();
            b=sc.nextInt();
            if(a==b){
                System.out.println("0");
            }
            else{
                if(Math.abs((a-b))%10==0){
                    System.out.println(Math.abs(a-b)/10);
                }
                else{
                    System.out.println((Math.abs(a-b)/10)+1);
                }
            }
        }
    }
}