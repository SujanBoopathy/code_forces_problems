public class largest_sum_int {
    public static void main(String args[]) throws Exception {
        int arr[]=new int[]{1,1,1,2,2,3,3,3,3,3};
        int start=0,end=0,sum,max=0;
        int sIndex=0,eIndex=0;

        for(int i=0;i<arr.length;i++){
            sum=0;
            for(int j=i+1;j<arr.length;j++){
                if(arr[i]==arr[j]){
                    start =i ;
                    end=j;
                    sum+=arr[i];
                }
            }
            if(sum>max){
                max=sum;
                sIndex=start;
                eIndex=end;
            }
        }

        System.out.println(max+arr[sIndex]);
        System.out.println(sIndex);
        System.out.println(eIndex);


        


    }
}
