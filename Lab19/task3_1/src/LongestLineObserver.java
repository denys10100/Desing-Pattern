public class LongestLineObserver implements FileReaderObserver {
    private String longestLine;

    public String getLongestLine() {
        return longestLine;
    }

    @Override
    public void onLineRead(String line) {
        if (longestLine == null || line.length() > longestLine.length()) {
            longestLine = line;
        }
    }
}
