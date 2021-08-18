



#define Buton0 3  //butonların pinlerini tanımlıyoruz
#define Buton1 2  //


int ledler[] = {  //ledleri liste içerisinde pinlerini tanıtıyoz
  12,
  11,
  10,
  9,
  8,
  7,
  6
  
};



//// bize destek olmak için YOUTUBE videomuzu beğenip paylaşabilirsiniz

void setup()
{
  pinMode(Buton0, INPUT);  // butonları "giriş" olarak tanımlıyoruz
  pinMode(Buton1, INPUT);
  
  for (int i = 0; i < 7; i++) { //For döngüsünün 7 kez tekrarlanmasını istiyoruz.
    pinMode(ledler[i], OUTPUT); //i değişkenlerini "çıkış" olarak tanımlıyoruz.
  }
}
//// bu gibi projeleri yapmak için youtube kanalımıza abone olun
void loop()
{
  while(digitalRead(Buton0) == 1){  //burada while döngüsü içinde buton0 dan gelen veri 1 olduğunda çalışacak bloğu yazıyoruz
  for (int i = 0; i < 7; i++) {
    digitalWrite(ledler[i], HIGH);
    delay(25);  //************************burada delay komutuna sırası ile 25,35,45,65,75,85 yazıp deneyin  
    digitalWrite(ledler[i], LOW);
  }
  }
  while(digitalRead(Buton1) == 1){
  for (int j = 7; j > -1; j--) {
    digitalWrite(ledler[j], HIGH);
    delay(25);  //************************burada delay komutuna sırası ile 25,35,45,65,75,85 yazıp deneyin
    digitalWrite(ledler[j], LOW);
  }  
  }

  
}

