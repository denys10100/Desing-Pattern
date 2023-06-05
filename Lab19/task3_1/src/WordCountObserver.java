public class WordCountObserver implements FileReaderObserver {
    private int wordCount;

    public int getWordCount() {
        return wordCount;
    }

    @Override
    public void onLineRead(String line) {
        String[] words = line.split("\\s+");
        wordCount += words.length;
    }
}
