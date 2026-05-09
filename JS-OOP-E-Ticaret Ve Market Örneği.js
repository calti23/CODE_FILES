class ürün {
    constructor(isim , birim_fiyat , stok){
        this.isim = isim;
        this.birim_fiyat = birim_fiyat;
        this.stok = stok;
        this.gelir = stok * birim_fiyat;
        this.getİsim = function(){
            return isim;
        };
        this.getBirimFiyat = function(){
            return birim_fiyat;
        };
        this.getStok = function(){
            return stok;
        };
        this.getGelir = function(){
            return this.gelir;
        };
    };
};
const newProduct1 = new ürün ("Dondurulmuş Pizza" , 300 , 1500);
const newProduct2 = new ürün ("Dondurulmuş Ton Baliği" , 200 , 1000);
const newProduct3 = new ürün ("Supangle" , 60 , 500);
const newProduct4 = new ürün ("Profiterol" , 60 , 450);
const newProdcut5 = new ürün ("Macar Salam" , 150 , 450);
const newProduct6 = new ürün ("Tavuk Döner" , 250 , 1000);
const newProduct7 = new ürün ("Et Döner" , 400 , 500);
const newProduct8 = new ürün ("Rus Salatasi" , 90 , 2500);
const newProduct9 = new ürün ("Kelebek Makarna" , 20 , 1500);
const newProduct10 = new ürün ("Eti Karam" , 30 , 500);
const newProduct11 = new ürün ("Eti Ahenk" , 30 , 600);
const newProduct12 = new ürün ("Ülker Laviva" , 35 , 400);

class Elektronik extends ürün {
    constructor(isim , birim_fiyat , stok , hafiza , marka , garanti_süresi){
        super(isim , birim_fiyat , stok);
        this.hafiza = hafiza;
        this.marka = marka;
        this.getHafiza = function(){
            return hafiza;
        };
        this.getMarka = function(){
            return marka;
        };
        this.getGarantiSüresi = function(){
            return garanti_süresi;
        };
    };
};
const newElektronik1 = new Elektronik ("Flash Bellek", 350 , 150 ,  64 , "SanDisk" , 5);
const newElektronik2 = new Elektronik ("Televizyon" , 50000 , 15 , 512 , "Beko" , 5);
const newElektronik3 = new Elektronik ("Akilli Telefon" , 70000 , 500 , 1024 , "İphone 15" , 10);
const newElektronik4 = new Elektronik ("Akilli Telefon" , 60000 , 600 , 1024 , "Samsung SE25" , 10);

class Gida extends ürün {
    constructor(isim, birim_fiyat, stok , gramaj , son_kullanma_tarihi){
        super(isim , birim_fiyat , stok);
        this.gramaj = gramaj;
        this.son_kullanma_tarihi = son_kullanma_tarihi;
        this.getGramaj = function(){
            return gramaj;
        };
        this.getSonTüketimTarihi = function(){
            console.log(son_kullanma_tarihi);
            return son_kullanma_tarihi;
        };
    };
};
const newFood1 = new Gida ("Konserve Misir" , 60 , 500 , "30.06.2030");
const newFood2 = new Gida ("Köz Patlican" , 75 , 1000 , "24.12.2036");
const newFood3 = new Gida ("Kaşar Peyniri" , 350 , 2000 , "23.11.2203");

class Sepet {
    constructor() {
        this.yeni_sepet = [];
        this.toplam_tutar = 0;
    };
    sepeteEkle(urunNesnesi, adet) {
        if (urunNesnesi.stok >= adet) {
            const sepetOgesi = {
                urun: urunNesnesi,
                miktar: adet
            };
            this.yeni_sepet.push(sepetOgesi);
            this.toplam_tutar += urunNesnesi.birim_fiyat * adet;
            urunNesnesi.stok -= adet;
            
            console.log(`${adet} adet ${urunNesnesi.getİsim()} sepete eklendi.`);
        }
        else {
            console.log(`Yetersiz stok! Mevcut: ${urunNesnesi.stok}`);
        };
    };
    sepeti_yazdir() {
        console.log("--- Sepet İçeriği ---");
        this.yeni_sepet.forEach(oge => {
            console.log(`Ürün: ${oge.urun.getİsim()} | Adet: ${oge.miktar} | Ara Toplam: ${oge.urun.getBirimFiyat() * oge.miktar} TL`);
        });
        console.log(`Genel Toplam: ${this.toplam_tutar} TL`);
        return this.yeni_sepet;
    };
};
const aktifSepet = new Sepet();
aktifSepet.sepeteEkle(newElektronik1, 2);
aktifSepet.sepeteEkle(newFood3, 5);
aktifSepet.sepeti_yazdir();