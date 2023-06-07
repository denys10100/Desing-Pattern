import java.util.ArrayList;
import java.util.List;

public class GameScene {
    public final String level;  // Складність гри

    private final List<Monster> monsters = new ArrayList<>();

    public GameScene(String level) {
        this.level = level;
    }

    public void addMonster(Monster monster) {
        monsters.add(monster);
    }

    public void start() {
        for (Monster monster : monsters) {
            monster.shoot();
        }
    }
}
