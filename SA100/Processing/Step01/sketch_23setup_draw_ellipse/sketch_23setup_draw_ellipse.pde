int x = 40;
void setup() {
  size(800, 800);
}

void draw() {
  background(255);
  ellipse(x++, 400, 10, 10);
}