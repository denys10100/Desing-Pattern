public class Triangle {
    private float a;
    private float b;
    private float c;
    private float maxSquare;
    private TriangleMemento maxSquareMemento;

    public Triangle(float a, float b, float c) {
        assert checkExistence(a, b, c);

        this.a = a;
        this.b = b;
        this.c = c;
        this.maxSquare = square();
        this.maxSquareMemento = createMemento();
    }

    public static boolean checkExistence(float a, float b, float c) {
        return a + b > c && a + c > b && b + c > a;
    }

    public void setA(float a) {
        if (checkExistence(a, b, c)) {
            this.a = a;
            updateMaxSquare();
        } else {
            System.out.println("Error: value is not set");
        }
    }

    public void setB(float b) {
        if (checkExistence(a, b, c)) {
            this.b = b;
            updateMaxSquare();
        } else {
            System.out.println("Error: value is not set");
        }
    }

    public void setC(float c) {
        if (checkExistence(a, b, c)) {
            this.c = c;
            updateMaxSquare();
        } else {
            System.out.println("Error: value is not set");
        }
    }

    public float perimeter() {
        return a + b + c;
    }

    public float square() {
        float p = perimeter() / 2;
        float s = p * (p - a) * (p - b) * (p - c);
        return (float) Math.sqrt(s);
    }

    public void updateMaxSquare() {
        float currentSquare = square();
        if (currentSquare > maxSquare) {
            maxSquare = currentSquare;
            maxSquareMemento = createMemento();
        }
    }

    public TriangleMemento createMemento() {
        return new TriangleMemento(a, b, c);
    }

    public void restoreFromMemento(TriangleMemento memento) {
        this.a = memento.getA();
        this.b = memento.getB();
        this.c = memento.getC();
    }

    public void restoreToMaxSquare() {
        restoreFromMemento(maxSquareMemento);
    }
}
