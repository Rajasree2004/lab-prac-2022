import java.io.*;
import java.net.*;
public class MyServer{
    public static void main(String[] args){
        try{
            ServerSocket ss=new ServerSocket(5000);
            Socket s=ss.accept();
            DataInputStream d=new DataInputStream(s.getInputStream());
            String str = (String)d.readUTF();
            System.out.println("Message" +str);
            ss.close();
        }catch(Exception e){
            System.out.println(e);
        }
    }
}