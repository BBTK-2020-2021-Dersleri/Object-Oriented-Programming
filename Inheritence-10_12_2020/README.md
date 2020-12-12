# Inheritence (Miras)

* Inheritance (miras alma, kalıtım), bir nesnenin özelliklerinin farklı nesneler tarafından da kullanılabilmesine olanak sağlayan Nesne Tabanlı programlama özelliğidir. 
* Yazılan bir sınıf bir başka sınıf tarafından miras alınabilir. Bu işlem yapıldığı zaman temel alınan sınıfın tüm özellikleri yeni sınıfa aktarılır.
* Yazılan kodun yeniden kullanabilirliği (Code Reusability) sağlanır.
* Miras alınan sınıfa Temel Sınıf (Base Class), miras alan sınıfa ise Türetilmiş Sınıf (Derived Class) denir.

## Türetilmiş sınıf sözdizimi:
````
class baseClass : visibilityMode baseClass
{  
    // body of the derivedClass.  
}  
````
Örnek bir türetilmiş sınıf sözdizimi:
````
class Dog : public Animal
{  
    // body of the Dog Class.  
}  
````
## Görünürlük Modu (Visibility Mode)

|                 | Derived Class | Derived Class |Derived Class |
| --------------- | ------------- | ------------- | ------------ |
|  **Base Class** |  **Private**  | **Protected** |  **Public**  |
|    **Private**  | Not Inherited | Not Inherited | Not Inherited|           
|   **Protected** |     Private   |   Protected   |   Protected  |
|     **Public**  |    Private    |   Protected   |    Public    |



## Bu dosyada bulunan kodların UML tablosu aşağıdaki şekildeki gibidir.
![inheritence](https://user-images.githubusercontent.com/53192718/101810147-7c4c3880-3b29-11eb-9b5b-5cf8c469b175.png)


UML tablosuna baktığımız zaman Dog ve Bird sınıfının eat() metoduna, Fish sınıfının ise eat() ve speak() metotlara sahip olmadığı görülmekte. Bu üç sınıf da 
Animal sınıfından miras aldıkları için bu metotlara sahipler.

Main'de bu metotlar çağırıldığı zaman miras alınan Animal sınıfının eat() ve speak() metotları çağırılır.

Tekrar tabloya baktığımız zaman Dog ve Bird move() ve speak() metotlarına, Fish sınıfının ise move() metoduna sahip. Bu metotlar miras alınan sınıfta olmasına rağmen
'OVERRIDE' edilerek yeniden yazılmıştır. Bu sebeple main'de bu metotlar çağrıldığı zaman ilgili sınıfın move() veya speak() sınıfı çağırılır.

# Programın Çıktısı:
````
---------- For Animal ----------
This is an Animal!
Moving... - Animal
Speaking... - Animal
Eating... - Animal
Type: Animal
Name: Animal
------------ For Dog ------------
This is an Animal!
This is a Dog!
The Dog is running.
Woof! Woof! Woof!
Eating... - Animal
Type: Animal
Name: Spike
----------- For Bird -----------
This is an Animal!
This is a Bird!
The Bird is flying.
Chirp! Chirp!
Eating... - Animal
Type: Animal
Name: Tweety
----------- For Fish -----------
This is an Animal!
This is a Fish!
The Fish is swimming.
Speaking... - Animal
Eating... - Animal
Type: Animal
Name: Nemo

The Fish is deleting...
Animal is deleting...
The Bird is deleting...
Animal is deleting...
The Dog is deleting...
Animal is deleting...
Animal is deleting...
````
