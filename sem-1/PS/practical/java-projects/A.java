public class A {
    int a;
    String name;

    A() {
        a = 16;
        name = "Pawan";
    }

    void show() {
        System.out.println(a + " " + name);  
    }
}

class B {
    public static void main(String[] args) {  
        A ref = new A();  
        ref.show(); 
    }
}
