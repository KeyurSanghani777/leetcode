import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();


        while(k>0){
            int n = sc.nextInt();
            int p = sc.nextInt();
            int[] arr = new int[n];
            int sum = 0;


            for(int i = 0;i<n;i++){
                arr[i] = sc.nextInt();
                sum = sum + arr[i];
            }

            while(p>0){
                boolean prevIsZero = false;

                if(n>1){
                    for(int i = 0;i<n;i++){
                        if(i==0){
                            if(arr[i]==0 ){
                                prevIsZero = true;
                            }
                            if(arr[i+1]!=0){
                                arr[i] += 2;
                            }
                        }

                        if(i>0 && i<n-1){
                            boolean temp = prevIsZero;
                            if(arr[i] == 0){
                                prevIsZero = true;
                            }else{
                                prevIsZero = false;
                            }
                            if(temp==false){
                                arr[i] += 2;
                            }
                            if(arr[i+1]!=0){
                                arr[i] += 2;
                            }

                        }
                        if(i==n-1){
                            if(prevIsZero==false){
                                arr[i] += 2;
                            }
                        }
                    }
                }
                p--;
            }

            k--;
            int cost=0;
            for(int i=0;i<n;i++){
                cost = cost + arr[i];
            }

            System.out.println(cost-sum);
        }

    }
}