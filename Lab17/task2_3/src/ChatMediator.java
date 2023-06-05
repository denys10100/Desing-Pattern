public interface ChatMediator {
    void addUser(User user);
    void sendMessageAll(String message, String userId);
    void sendMessage(String message, String userFrom, String userTo);
}
