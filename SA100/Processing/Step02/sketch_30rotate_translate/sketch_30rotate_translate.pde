float angle = 0.0;

void setup() {
  size(800, 800);
}

void draw() {
  rotate(angle);
  translate(mouseX, mouseY);
  rect(-20, -20, 40, 40);
  angle += 0.1;
}