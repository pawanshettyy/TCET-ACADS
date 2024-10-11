import java.util.Scanner;

public class number {
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        
        if (number > 50) {
            System.out.println("The number is greater than 50.");
        } else if (number == 50) {
            System.out.println("The number is equal to 50.");
        } else {
            System.out.println("The number is less than 50.");
        }

        
        scanner.close();
    }
}
