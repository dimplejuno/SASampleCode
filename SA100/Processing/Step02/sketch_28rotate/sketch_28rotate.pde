void setup() {
  size(800, 800);
}

void draw() {
  rotate(mouseX / (float)width);
  rect(width/2, 0, 40, 40);
}