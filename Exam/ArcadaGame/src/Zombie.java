public class Zombie implements Monster {
    private final String level;

    public Zombie(String level) {
        this.level = level;
    }

    @Override
    public void shoot() {
        System.out.printf("Creature: %s, level %s, action: shoots\n", "Zombie", level);
    }
}