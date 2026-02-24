number1 = int(input("PLEASE ENTER A NUMBER:"))
print("KULLANICIDAN ALINAN VERİLER OTOMATİK OLARAK STRİNGE DÖNÜŞTÜRÜLDÜĞÜ İÇİN İŞLEM YAPMADAN ÖNCE BİZ SAYIMIZI INTEGER A ÇEVİRDİK")
factorial1 = 1
for x in range (1,number1+1):
    factorial1 *= x
print (f"{number1}! = {factorial1}")
print ("BURADA DA KULLANICIDAN ALDIĞIMIZ SAYININ FAKTÖRİYELİNİ FOR DÖNGÜSÜYLE HESAPLADIK F-STRİNG FONKSİYONUYLA DA YAZDIRMIŞ OLDUK")

print ("================================================================================================================")

factorial2 = 1
number2 = int(input("PLEASE ENTER ANOTHER NUMBER:"))
y=1
while y <= number2:
    factorial2 *= y
    y +=1
print (f"{y-1}! = {factorial2}")
print ("BURADA DA WHILE DÖNGÜSÜ KULLANARAK ALINAN SAYININ FAKTÖRİYELİNİ HESAPLAMIŞ OLDUK")

print("=================================================================================================================")

number3 = int(input("PLEASE ENTER A NUMBER FOR PRİME NUMBER CONTROL:"))
prime = True
for x in range(2,number3):
    if number3 % x == 0:
        prime = False
        break
if prime == True:
    print ("THE NUMBER IS PRIME!!!")
else:
    print (f"{number3} IS NOT PRIME!!!")
print ("BURADA DA GİRİLEN SAYININ ASAL OLUP OLMADIĞINI KONTROL EDEN BİR PROGRAM YAZDIK")

print("==================================================================================================================")

number4 = int(input("PLEASE ENTER A NUMBER FOR FINDING POSITIVE DIVISORS:"))
divided_number = 0
for x in range (1,number4 + 1):
    if number4 % x == 0:
        divided_number += 1
    else:
        continue
print (f"{number4} HAS {divided_number} DIVISORS")
print("BU PROGRAMDA DA GİRİLEN SAYININ KAÇ ADET TAM SAYI BÖLENİ OLDUĞUNU HESAPLADIK")

print("===================================================================================================================")

number5 = int(input("PLEASE ENTER THE NUMBER FOR FINDING SUMMARY OF BLANKS' VALUE:"))
summary = 0
str_number5 = str(number5)
for blank in str_number5:
    summary += int(blank)
print (f"SUMMARY OF NUMBER'S BLANKS VALUE IS {summary}")
print ("BURADA DA GİRİLEN SAYININ BASAMAKLARI TOPLAMINI YAZDIRDIK ÖNCE STRİNGE ÇEVİRDİK İÇİNDE GEZDİK ONLARI OKUDUK SIRA SIRA VE ONLARI INTEGER A ÇEVİREREK SONUCUN ÜZERİNDE EKLEDİK")

print ("===================================================================================================================")

numbers = []
for j in range(1,6):
    number6 = int(input("PLEASE ENTER NUMBER:"))
    numbers.append(number6)
print (f"MINIMUM VALUE OF LIST IS {min(numbers)}")
print (f"MAXIMUM VALUE OF LIST IS {max(numbers)}")
print ("BURADA DA GİRİLEN 5 SAYIDAN EN BÜYÜK VE EN KÜÇÜĞÜ YAZDIRAN BİR PROGRAM YAZDIK")

print("=====================================================================================================================")

number7 = int(input("PLEASE ENTER A NUMBER FOR SQRT CONTROL:"))
sqrt = number7 ** 0.5
if sqrt % 1 != 0:
    print ("THE NUMBER IS NOT A SQAREROOTABLE NUMBER!!!")
else:
    print (f"{number7} IS SQUARE OF {sqrt}")
print("BU PROGRAMDA DA GİRİLEN SAYININ BİR TAMKARE SAYI MI OLUP OLMADIĞINI KONTROL ETTİK")

print("=====================================================================================================================")

text1 = input("PLEASE ENTER THE TEXT:")
dictionary = dict()
for letter in text1:
    if letter in dictionary:
        dictionary[letter] += 1
    else:
        dictionary[letter] = 1
for letter,piece in dictionary.items():
    print(letter,piece)
print ("BURADA DA GİRİLEN METİNDE HANGİ HARFTEN KAÇ TANE KULLANILDIĞINI GÖSTEREN PROGRAMI YAZDIK")

print("======================================================================================================================")

text2 = input("PLEASE ENTER ANOTHER TEXT:")
text3 = ""
for letter in text2:
    if letter == "a":
        text3 += "A"
    else:
        text3 += letter
print (text3)
print ("BU PROGRAMDA DA GİRİLEN METİNDEKİ KÜÇÜK A HARFLERİNİ BÜYÜLTEREK METNİ TEKRAR YAZDIRMIŞ OLDUK")

    
