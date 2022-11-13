import java.io.*;
import java.net.*;
public class MyClient{
    public static void main(String[] args){
        try{
            Socket s=new Socket("localhost", 5000);
            DataOutputStream o=new DataOutputStream(s.getOutputStream());
            o.writeUTF("Hello");
            o.flush();
            o.close();
            s.close();
        }catch(Exception e){
            System.out.println(e);
        }
    }
}