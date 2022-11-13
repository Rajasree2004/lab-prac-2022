import java.io.*;
import java.util.*;


public class Copy{
    public static void main(String[] args)
    {
        try{
        FileReader in=new FileReader("in.txt");
        FileWriter out=new FileWriter("out.txt");
        int i = in.read();
        while (i!=-1){
            out.write((char)i);
        }   
        }
        catch(Exception e){
            System.out.println(e);
        }
        
    }

    
}
