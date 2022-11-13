class CountObj{
    static int count;
    CountObj(){
        count++;
    }
    public static void main(String[] args){
        CountObj o1=new CountObj();
        CountObj o2=new CountObj();
        CountObj o3=new CountObj();
        CountObj o4=new CountObj();
        CountObj o5=new CountObj();
        System.out.println(count);
    }
}