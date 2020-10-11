
public class Hello {

  public static void recrec(int a){

    if( a > 0){
      System.out.println("<"+ a +">");
      recrec( a - 1);
      System.out.println("("+a+")");
    }
  }




  public static void main(String[] args) {
    System.out.println("Hello java!");
    recrec(20);
  }
}

