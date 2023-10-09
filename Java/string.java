public class StringMatching {

    public static int search(String text, String pattern) {
        for (int i = 0; i <= text.length() - pattern.length(); i++) {
            int j = 0;
            while (j < pattern.length() && text.charAt(i + j) == pattern.charAt(j)) {
                j++;
            }
            if (j == pattern.length()) {
                return i;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        String text = "This is a test string.";
        String pattern = "test";

        int index = search(text, pattern);
        if (index != -1) {
            System.out.println("Pattern found at index: " + index);
        } else {
            System.out.println("Pattern not found.");
        }
    }
}

