public class Main {
    public static void main(String[] args) {
        String filePath = "resources/input01.txt";

        FileReaderObserver longestLineObserver = new LongestLineObserver();
        FileReaderObserver longestWordObserver = new LongestWordObserver();
        FileReaderObserver wordCountObserver = new WordCountObserver();
        FileReaderObserver lineWithLongestWordObserver = new LineWithLongestWordObserver();

        FileReader fileReader = new FileReader(filePath, longestLineObserver);
        new FileReader(filePath, longestWordObserver);
        new FileReader(filePath, wordCountObserver);
        new FileReader(filePath, lineWithLongestWordObserver);

        try {
            Thread.sleep(1000); // Зачекайте на завершення читання файлу

            // Отримання результатів
            String longestLine = ((LongestLineObserver) longestLineObserver).getLongestLine();
            String longestWord = ((LongestWordObserver) longestWordObserver).getLongestWord();
            int wordCount = ((WordCountObserver) wordCountObserver).getWordCount();
            String lineWithLongestWord = ((LineWithLongestWordObserver) lineWithLongestWordObserver).getLineWithLongestWord();

            // Виведення результатів
            System.out.println("Longest line: " + longestLine);
            System.out.println("Longest word: " + longestWord);
            System.out.println("Word count: " + wordCount);
            System.out.println("Line with longest word: " + lineWithLongestWord);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}
