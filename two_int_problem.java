import java.util.*;
import java.lang.*;
public class two_int_problem{
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        int n=scan.nextInt();
        for(int i=0;i<n;i++){
            int a,b;
            a=scan.nextInt();
            b=scan.nextInt();
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
