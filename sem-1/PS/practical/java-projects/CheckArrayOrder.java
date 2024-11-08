import java.util.Scanner;

public class CheckArrayOrder {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        int n = scanner.nextInt();
        
        int[] array = new int[n];
        System.out.println("Enter the elements:");
        for (int i = 0; i < n; i++) {
            array[i] = scanner.nextInt();
        }
        
        boolean ascending = true, descending = true;
        
        for (int i = 0; i < n - 1; i++) {
            if (array[i] < array[i + 1]) {
                descending = false;
            } else if (array[i] > array[i + 1]) {
                ascending = false;
            }
        }
        
        if (ascending) {
            System.out.println("The array is in ascending order.");
        } else if (descending) {
            System.out.println("The array is in descending order.");
        } else {
            System.out.println("The array is not sorted in any specific order.");
        }
        
        scanner.close();
    }
}
