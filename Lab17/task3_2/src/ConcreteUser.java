public class ConcreteUser implements User {
    private final String userId;

    public ConcreteUser(String userId) {
        this.userId = userId;
    }

    @Override
    public String getUserId() {
        return userId;
    }

    @Override
    public void sendMessageAll(String message) {
        ChatMediator.getInstance().sendMessageToAll(message, userId);
    }

    @Override
    public void sendMessage(String message, String userTo) {
        ChatMediator.getInstance().sendMessageToUser(message, userId, userTo);
    }

    @Override
    public void sendMessageToGroup(String message, String group) {
        ChatMediator.getInstance().sendMessageToGroup(message, userId, group);
    }

    @Override
    public void receiveMassage(String message, String userFrom) {
        System.out.println("User " + userId + " receives message: " + message + " from user " + userFrom);
    }
}
