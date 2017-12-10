int size = 0;

void setup() {
  size(800, 800);
  size = width/16;
}

void draw() {
  translate(mouseX, mouseY);
  rect(0, 0, size, size);
  translate(size, size);
  rect(0, 0, size, size);
}