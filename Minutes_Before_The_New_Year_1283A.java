import java.util.Scanner;

public class Minutes_Before_The_New_Year_1283A{

    public static int min_left(int hrs , int mins){
        int mid_hr = 23;
        int min_left = (mid_hr - hrs) * 60 + (60 - mins);
        return min_left;
    }

    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        int t = scan.nextInt();
        int hrs , mins;
        for(int i = 0; i<t; i++){
            hrs = scan.nextInt();
            mins = scan.nextInt();

            System.out.println(min_left(hrs , mins));
        }
    }
}