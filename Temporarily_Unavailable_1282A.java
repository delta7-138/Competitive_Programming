import java.util.Scanner;
public class Temporarily_Unavailable_1282A{
    
    public static int min_not_in_coverage(int a , int b , int c , int r){
        int max_lim = 0;
        int min_lim = 0;

        if(c-r >= b || c+r<=a){
            return (b-a);
        }else{
            if(c+r<=b){
                max_lim = c+r;
            }else{
                max_lim = b;
            }

            if(c-r>=a){
                min_lim = c-r;
            }else{
                min_lim = a;
            }
        }
        return ((b-a) - (max_lim - min_lim));
    }

    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();

        for(int i = 0; i<t; i++){
            int a = scan.nextInt();
            int b = scan.nextInt();
            int c = scan.nextInt();
            int r = scan.nextInt();

            int max , min = 0;
            if(a>b){
                max = a;
                min = b;
            }else{
                max = b;
                min = a;
            }
            System.out.println(min_not_in_coverage(min , max , c , r));
        }
    }
}