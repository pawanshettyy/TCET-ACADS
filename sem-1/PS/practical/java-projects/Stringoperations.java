import java.util.Scanner;
public class Stringoperations{
    public static void main (String[] args)
    {
    Scanner input = new Scanner(System.in);

    System.out.println("Enter a string");
    String originalstr = input.nextLine();

    //copy string
    String copiedstr = originalstr;
    System.out.println("Copied String= "+copiedstr);

    //string length
    int strlength = copiedstr.length();
    System.out.println("Length of the string: "+strlength);

    //concat string
    String  newstr = input.nextLine();
    String Concatenatedstr = newstr.concat(copiedstr);
    System.out.println("Concatenated string: " +Concatenatedstr);

    //trim function
    String trimstr = copiedstr.trim();
    System.out.println("Trim Function: "+trimstr);

    input.close();
    } 
}