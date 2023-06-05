public class LongestWordObserver implements FileReaderObserver {
    private String longestWord;

    public String getLongestWord() {
        return longestWord;
    }

    @Override
    public void onLineRead(String line) {
        String[] words = line.split("\\s+");
        for (String word : words) {
            if (longestWord == null || word.length() > longestWord.length()) {
                longestWord = word;
            }
        }
    }
}
