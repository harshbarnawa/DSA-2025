import java.util.Scanner;

public class guessNum2 {

    static void guessNum(int num, int ans) {
        if (num < ans) {
            System.out.println("You entered too small");
        } else if (num > ans) {
            System.out.println("You entered too large");
        } else {
            System.out.println("Whoo!!hoo..You are correct");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int ans = 87;
        int num = -1;

        while (num != ans) {
            System.out.print("Guess the correct number: ");
            num = sc.nextInt();
            guessNum(num, ans);
        }

        sc.close();
    }
}
