public class Cacodemon  implements Monster {
    private final String level;

    public Cacodemon(String level) {
        this.level = level;
    }

    @Override
    public void shoot() {
        System.out.printf("Creature: %s, level %s, action: shoots\n", "Cacodemon", level);
    }
}
