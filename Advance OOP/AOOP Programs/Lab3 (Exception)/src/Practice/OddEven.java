
package Practice;


public class OddEven {
    
    
    
    public static float halfOf(int a) throws EvenException{
            if (a%2==0){
                throw new EvenException();
            }
            else{
                return a/2;
            }
            
    }
    
    public static void main(String[] args)
    {   
        try{
             System.out.println(halfOf(4));
         }
         catch(EvenException ex){
             System.out.println("We are working");
         }
        
        try{
             System.out.println(halfOf(7));
         }
         catch(EvenException ex){
             System.out.println("We are working");
         }
        
        try{
             System.out.println(halfOf(0));
         }
         catch(EvenException ex){
             System.out.println("We are working");
         }
        
    }
}
