/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package myfirstapp;
import java.util.Scanner;
/**
 *
 * @author Sala230_PC8_IPS
 */
public class MyFirstApp {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        System.out.println("Eu não gosto de programar em JAVA, o inicio é bué secante");
        Scanner sc = new Scanner(System.in);
        int i=0;
        do{
        i = sc.nextInt();
        switch(i){
            case 1: 
                System.out.println("Isto é");
                break;
            case 2:
                System.out.println("Estupidamente");
                break;
            case 3:   
                System.out.println("Parecido com");
                break;
            case 4:
                System.out.println("C por isso é que");
                break;
            case 5:
                System.out.println("é bué secante");
                break;
        }
        }while(i==1||i==2||i==3||i==4||i==5);
    }
    
}
