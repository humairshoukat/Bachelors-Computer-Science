
public class ExceptionSubClass extends ExceptionClass{
    int data2;
    public String CheckException() throws Exception{
            if (this.data1==10 && data2==15){
                return "Method Executed";
            }
            else{
                throw new Exception();
            }
            
    }
    void setData1(int data1)
    {
        this.data1=data1;
    }
    void setData2(int data2)
    {
        this.data2=data2;
    }
    int getData1(){
        return this.data1;
    }
    int getData2(){
        return this.data2;
    }

    ExceptionSubClass(int data1, int data2) {
        this.data1=data1;
        this.data2=data2;
    }
}
