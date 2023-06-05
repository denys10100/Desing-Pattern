public class Triangle {
    private float a;
    private float b;
    private float c;
    private float minSquare;
    private TriangleMemento minSquareMemento;

    public Triangle(float a, float b, float c) {
        assert checkExistence(a, b, c);

        this.a = a;
        this.b = b;
        this.c = c;
        this.minSquare = square();
        this.minSquareMemento = createMemento();
    }

    public static boolean checkExistence(float a, float b, float c) {
        return a + b > c && a + c > b && b + c > a;
    }

    public void setA(float a) {
        if (checkExistence(a, b, c)) {
            this.a = a;
            updateMinSquare();
        } else {
            System.out.println("Error: value is not set");
        }
    }

    public void setB(float b) {
        if (checkExistence(a, b, c)) {
            this.b = b;
            updateMinSquare();
        } else {
            System.out.println("Error: value is not set");
        }
    }

    public void setC(float c) {
        if (checkExistence(a, b, c)) {
            this.c = c;
            updateMinSquare();
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

    public void updateMinSquare() {
        float currentSquare = square();
        if (currentSquare < minSquare) {
            minSquare = currentSquare;
            minSquareMemento = createMemento();
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

    public void restoreToMinSquare() {
        restoreFromMemento(minSquareMemento);
    }

    public void doubleSides() {
        this.a *= 2;
        this.b *= 2;
        this.c *= 2;
        updateMinSquare();
    }

    public void halveSides() {
        this.a /= 2;
        this.b /= 2;
        this.c /= 2;
        updateMinSquare();
    }
}
