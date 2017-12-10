float angle = 0;

void setup() {
  size(800, 800);
}

void draw() {
  translate(mouseX, mouseY);
  rotate(angle);
  rect(-width/10, -width/10, width/5, width/5);
  angle += 0.1;
}