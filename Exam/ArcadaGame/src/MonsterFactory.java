public class MonsterFactory {
    public static Monster createMonster(MonsterType type, String level) {
        switch (type) {
            case ZOMBIE:
                return new Zombie(level);

            case IMP:
                return new Imp(level);

            case DEMON:
                return new Demon(level);
            case CACODEMON:
                return new Cacodemon(level);
            default:
                throw new IllegalStateException("Unexpected type: " + type);
        }
    }
}