
public class main {

    
    public static void main(String[] args) {
    
        ExceptionSubClass c = new ExceptionSubClass(10,50);
         try{
             c.CheckException();
         }
         catch(Exception ex){
             System.out.println("We are working");
         }
        
    }
    
}
