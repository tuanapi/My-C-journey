#include <stdio.h>
#include <math.h>

/**
 * f: A -> B f(x) = V(x + 3 - 2) şeklinde tanımlı f fonkisyonunun tersinin cebirsel temsilini ve tersini fonksiyon olmasını sağlayan A ve B kümelerini bulunuz.
 * f fonksiyonunun tersinin cebirsel temsili:
 * y = V(x + 3) - 2
 * x = V(y + 3) - 2
 * x + 2 = V(y + 3)
 * (x + 2)² = y + 3
 * (x + 2)² - 3 = y = f⁻¹(x) şeklinde bulunur.
 * Fonksiyonun tersinin olabilmesi için bire bir ve örten olması gerekir. Bu durumda tanım kümesi A = [-3, ∞) ve değer kümesi B = [-2, ∞) olarak seçilmelidir.
 */

double encode(double x){
    if(x < -3) return -999; // [-3, ∞)
    x = sqrt(x + 3); // x in değeri karekökü olarak değiştiriliyor: x = 4.358899
    x -= 2;  // x değerinden -2 alınıyor: x = 2.358899
    return x; // x in değeri ana programa gönderiliyor
}

double decode(double y){ // kısaca encode fonksiyonunda yapılan işlemin tersini yapıyor
    if(y < -2) return -999; // [-2, ∞)
    y = pow(y + 2, 2);
    y -= 3;
    return y;
 }

int main(){
    double x = 16;
    double enc = encode(x);
    double y = decode(enc);
    printf("ENCODE: %lf\nDECODE: %lf\n", enc, y);
    return 0;
}
