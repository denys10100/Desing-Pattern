public class LineWithLongestWordObserver implements FileReaderObserver {
    private String lineWithLongestWord;

    public String getLineWithLongestWord() {
        return lineWithLongestWord;
    }

    @Override
    public void onLineRead(String line) {
        String[] words = line.split("\\s+");
        for (String word : words) {
            if (lineWithLongestWord == null || word.length() > lineWithLongestWord.length()) {
                lineWithLongestWord = line;
            }
        }
    }
}
