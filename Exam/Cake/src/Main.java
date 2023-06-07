public class Main {
    public static void main(String[] args) {
        CakeBuilder builder = new CakeBuilder();
        Cake cake = builder
                .withCream()
                .withChocolate()
                .withChocolate()
                .withFrosting()
                .withCherry()
                .build();

        System.out.println(cake);
    }
}
