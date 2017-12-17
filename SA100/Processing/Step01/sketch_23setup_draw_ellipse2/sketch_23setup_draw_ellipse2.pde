int x = 400;
int y = 400;
int xspeed = 10;
int yspeed = 10;
boolean flag = false;
void setup() {
  size(800, 800);
}
void draw() {
  background(255);
  ellipse(400, 400, 100, 100);
  if (keyPressed && !flag) {
    if ((key == 'a') || (key == 'A')) {
      flag = true;
      if(random(100) > 50){
        xspeed = -xspeed;
      }
      if(random(100) > 50) {
        yspeed = -yspeed;
      }
      
    }
  }

  if(flag) {
    x = x + xspeed;
    y = y + yspeed;

    if(x > width || x < 0 || y > height || y < 0 ){
      flag = false;
      x = 400;
      y = 400;
    }
  }
  ellipse(x, y, 10, 10);
}