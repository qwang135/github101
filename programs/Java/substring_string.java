package substring;

import java.util.Scanner;

public class substring_string {
	public static void main(String[] args) {
		
		String stringis, substringis; 
		char option;
		Scanner input = new Scanner(System.in);
 	    		
		System.out.print("Please intput a string: ");
          stringis = input.nextLine(); 
          
          System.out.print("Please intput a substring: ");
          substringis = input.nextLine(); 
        
          if (stringis.contains(substringis)) {
        	System.out.println(stringis + " contains " + substringis);  
          }
          else {
        	System.out.println("Result no found!"); 
          }
		
		System.out.println("Good bye!");
	}
}
