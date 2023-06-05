public class ConcreteUser implements User {
    final private String userId;
    private ChatMediator chatMediator;

    public ConcreteUser(String userId, ChatMediator chatMediator) {
        this.userId = userId;
        this.chatMediator = chatMediator;
    }

    @Override
    public String getUserId() {
        return userId;
    }

    @Override
    public void sendMessageAll(String message) {
        chatMediator.sendMessageAll(message, userId);
    }

    @Override
    public void sendMessage(String message, String userTo) {
        chatMediator.sendMessage(message, userId, userTo);
    }

    @Override
    public void receiveMessage(String message, String userFrom) {
        System.out.println("User " + userId + " receives message: " + message + " from user " + userFrom);
    }
}
