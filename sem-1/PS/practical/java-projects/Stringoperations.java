import java.util.Scanner;
public class Stringoperations{
    public static void main (String[] args)
    {
    Scanner input = new Scanner(System.in);

    System.out.println("Enter a string");
    String originalstr = input.nextLine();

    String copiedstr = originalstr;
    System.out.println("Copied String= "+copiedstr);

    int strlength = copiedstr.length();
    System.out.println("Length of the string: "+strlength);
    } 
}