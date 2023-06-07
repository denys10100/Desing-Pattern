public class Demon implements Monster {
    private final String level;

    public Demon(String level) {
        this.level = level;
    }

    @Override
    public void shoot() {
        System.out.printf("Creature: %s, level %s, action: shoots\n", "Demon", level);
    }
}