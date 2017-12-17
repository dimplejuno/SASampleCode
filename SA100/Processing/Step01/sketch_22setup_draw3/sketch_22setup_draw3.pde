float x = 0;
void setup() {
  size(800, 800);
}

void draw() {
  background(255);
  x = x + 1;
  ellipse(x, 400, 100, 100);
  ellipse(400, x, 100, 100);
}