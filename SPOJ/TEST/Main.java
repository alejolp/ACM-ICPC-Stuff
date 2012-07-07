/*
Alejandro Santos - 2012
https://github.com/alejolp/ACM-ICPC-Stuff
*/

import java.io.IOException;
import java.util.Scanner;

/* IMPORTANTE: La clase debe llamarse Main */

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
 
        while (true) {
            int x = s.nextInt();
            if (x == 42) break;
            System.out.println(x);
        }   
    }
}

