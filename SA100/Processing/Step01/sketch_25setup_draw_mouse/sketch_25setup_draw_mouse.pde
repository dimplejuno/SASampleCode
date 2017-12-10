void setup() {
  size(800, 800);

}

void draw() {
  background(255);

  fill(255, 0, 0);
  triangle(0,0, width, 0, mouseX, mouseY);
  fill(0, 255, 0);
  triangle(width, 0, width, height, mouseX, mouseY);
  fill(0, 0, 255);
  triangle(width, height,0, height, mouseX, mouseY);
  fill(255, 255, 0);
  triangle(0, height, 0, 0, mouseX, mouseY);
}