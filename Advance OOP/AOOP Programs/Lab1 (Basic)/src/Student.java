/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author user
 */
public class Student {
    int rollno;  
    String name;
    int age;
    static String college = "IIU";  
     
//    initializing through method
//    void insertRecord(int r, String n){  
//        rollno=r;  
//        name=n;  
//    }  
//    void displayInformation(){
//        System.out.println(rollno+" "+name);
//    }  

//    initializing through constructor
//    Student(int i,String n){  
//        rollno = i;  
//        name = n;  
//    }  
//    Student(int i,String n,int a){  
//      rollno = i;  
//      name = n;  
//      age=a;  
//    }  
//    void display(){
//        System.out.println(rollno+" "+name+" "+age);
//    }
    
    
//    static method
//    static void change(){  
//       college = "NUML";  
//     }  
//  
//     Student(int r, String n){  
//     rollno = r;  
//     name = n;  
//     }  
//  
//     void display (){
//         System.out.println(rollno+" "+name+" "+college);
//     }
    
//    this keyword
      
      Student(int rollno,String name){  
           this.rollno=rollno;  
           this.name=name;  
      }  
      void display(){
          System.out.println(rollno+" "+name);
      }

}
