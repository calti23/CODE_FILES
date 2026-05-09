class book {
    constructor(isim , basim_yili , yazar , durum) {
        this.isim = isim;
        this.basim_yili = basim_yili;
        this.durum = durum;
        this.yazar = yazar;
        this.getYazar = function (){
            return yazar;
        };
        this.getDurum = function (){
            if (durum == 1){
                console.log("KİTAP KÜTÜPHANEDE MEVCUT");
                return durum;
            }
            else{
                console.log("KİTAP BAŞKA BİR OKUYUCUDA");
                return durum;
            }
        };
        this.getIsim = function (){
            return isim;
        };
        this.getBasimYili = function (){
            return basim_yili;
        };
        this.oduncVer = function (){
            if(durum){
                this.durum = 0;
            }
            else{
                console.log("KİTAP ZATEN KÜTÜPHANEDE YOK!!!");
            };
            this.getDurum();
        }
    }
}
const newBook1 = new book("Fareler ve İnsanlar" , 1937 , "John Steinbeck" , 1);
const newBook2 = new book("Nutuk" , 1927 , "Mustafa Kemal Atatürk" , 0);
const newBook3 = new book("Suç ve Ceza" , 1866 , "Dostoyevski" , 1);
const newBook4 = new book("Othello" , 1622 , "William Shakespeare" , 0);
const newBook5 = new book("La Fontaine Masallari" , 1668 , "La Fontaine" , 1);

class kütüphane {
    constructor (kütüphane_ismi){
        this.kütüphane_ismi = kütüphane_ismi;
        this.kitap_listesi = [];
        this.getKütüphaneİsmi = function (){
            return kütüphane_ismi;
        };
    };
    yeni_kitap_ekle(book){
        this.kitap_listesi.push(book);
        console.log(`${book.isim} KÜTÜPHANEYE EKLENDİ!!!`);
    };
    kitaplari_listele(){
        console.log(`*** ${this.kütüphane_ismi} KİTAP LİSTESİ ***`);
        this.kitap_listesi.forEach(kitap => {
        console.log(`${kitap.getIsim()} | Yazar: ${kitap.getYazar()} | Durum: ${kitap.getDurum()}`);
        });
    };
}
const newLibrary = new kütüphane ("IŞILAY SAYGIN KÜTÜPHANESİ");
