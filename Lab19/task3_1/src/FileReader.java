import java.io.BufferedReader;
import java.io.IOException;

public class FileReader {
    private final String filePath;
    private final FileReaderObserver observer;

    public FileReader(String filePath, FileReaderObserver observer) {
        this.filePath = filePath;
        this.observer = observer;

        Thread thread = new Thread(this::read);
        thread.start();
    }

    public void read() {
        try (BufferedReader reader = new BufferedReader(new java.io.FileReader(filePath))) {
            String line;
            while ((line = reader.readLine()) != null) {
                observer.onLineRead(line);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}