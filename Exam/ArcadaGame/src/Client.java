public class Client {
    public static void main(String[] args) {
        GameScene gameScene = new GameScene("Easy");

        gameScene.addMonster(MonsterFactory.createMonster(MonsterType.IMP, gameScene.level));
        gameScene.addMonster(MonsterFactory.createMonster(MonsterType.ZOMBIE, gameScene.level));
        gameScene.addMonster(MonsterFactory.createMonster(MonsterType.IMP, gameScene.level));
        gameScene.addMonster(MonsterFactory.createMonster(MonsterType.DEMON, gameScene.level));
        gameScene.addMonster(MonsterFactory.createMonster(MonsterType.DEMON, gameScene.level));
        gameScene.addMonster(MonsterFactory.createMonster(MonsterType.ZOMBIE, gameScene.level));

        gameScene.start();
    }
}