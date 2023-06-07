import java.util.ArrayList;
import java.util.List;

public class Cake {
    private List<Object> ingredients;

    public Cake() {
        this.ingredients = new ArrayList<>();
    }

    public void addIngredient(Object ingredient) {
        ingredients.add(ingredient);
    }

    public String recipe() {
        StringBuilder builder = new StringBuilder("Cake");
        for (Object ingredient : ingredients) {
            builder.append(", ").append(ingredient.toString());
        }
        return builder.toString();
    }

    @Override
    public String toString() {
        return "Cake: " + recipe();
    }
}
