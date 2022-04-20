import java.util.*;

public class BalancedArray{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=0;i<n;i++){
            int x=sc.nextInt();
            if(x%4!=0){
                System.out.println("NO");
            }
            else{
                int sum1=0,sum2=0;
                System.out.println("YES");
                for(int j=2;j<=x;j+=2){
                    System.out.print(j+" ");
                    sum1+=j;
                }
                for(int j=1;j<x-2;j+=2){
                    System.out.print(j+" ");
                    sum2+=j;
                }
                System.out.print(sum1-sum2);
                System.out.print("\n");
            }
            
            sc.close();
        }
    }
}