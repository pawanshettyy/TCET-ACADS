class Car {
    String model;
    int year; 

    Car(String model, int year) {
        this.model = model;
        this.year = year;
    }

    void display() {
        System.out.println("Model: "  + model + " Year: " + year);
    }

    public static void main (String[] args) {
        Car car1 = new Car("Tata AMG", 2020);
        Car car2 = new Car("BMW  NexonEV", 2021);

        car1.display();
        car2.display();
    }
}
