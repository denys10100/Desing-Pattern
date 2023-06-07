public class CakeBuilder {
    private Cake cake;

    public CakeBuilder() {
        this.cake = new Cake();
    }

    public CakeBuilder withChocolate() {
        cake.addIngredient(new Chocolate());
        return this;
    }

    public CakeBuilder withCream() {
        cake.addIngredient(new Cream());
        return this;
    }

    public CakeBuilder withFrosting() {
        cake.addIngredient(new Frosting());
        return this;
    }

    public CakeBuilder withCherry(){
        cake.addIngredient(new Cherry());
        return this;
    }
    public Cake build() {
        return cake;
    }
}
