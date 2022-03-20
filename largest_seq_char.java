import java.util.*;

public class largest_seq_char{
    public static int count[]=new int[256];
    public static void main(String args[]) throws Exception{
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        int max=0;
        char result='0';

        for(int i=0;i<s.length();i++){
            count[s.charAt(i)]++;
            if(max<count[s.charAt(i)]){
                max=count[s.charAt(i)];
                result=s.charAt(i);
            }
        }

        for(int i=0;i<max;i++){
            System.out.print(result);
        }
        
    }
}