public class Imp implements Monster {
    private final String level;

    public Imp(String level) {
        this.level = level;
    }

    @Override
    public void shoot() {
        System.out.printf("Creature: %s, level %s, action: shoots\n", "Imp", level);
    }
}