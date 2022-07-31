public class PrimeSum{
    public static void main (String arg[]){
         int size;
         long n,sum=0;
         Scanner sc=new Scanner (System.in);
         int size=sc.nextInt();
         for(int i=0;i<size;i++){
              n=sc.nextLong();
              int flag=0;
              if(n>1){
                  for(int j=2;j<n;j++){
                      if(n%j==0)
                         flag=1;
                  }
              }
              if(flag!=1)
                  sum+=n;
         }
         System.out.println(sum);
   }
}
