class One extends Thread{
    One(){
        start();
    }
    public void run(){
        try{
            for(int i=0; i<10; i++){
                System.out.println("Good Morning");
                sleep(1000);
            }
        }catch(Exception e){
            System.out.println(e);
        }
    }
}

class Two extends Thread{
    Two(){
        start();
    }
    public void run(){
        try{
            for(int i=0; i<10; i++){
                System.out.println("Hello");
                sleep(1000);
            }
        }catch(Exception e){
            System.out.println(e);
        }
    }
}

class Three extends Thread{
    Three(){
        start();
    }
    public void run(){
        try{
            for(int i=0; i<10; i++){
                System.out.println("Welcome");
                sleep(1000);
            }
        }catch(Exception e){
            System.out.println(e);
        }
    }
}


class RunThread{
    public static void main(String[] args){
        new One();
        new Two();
        new Three();
    }
}