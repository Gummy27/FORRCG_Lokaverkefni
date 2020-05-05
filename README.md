# Dagbók

### 24. Apríl 2020
#### Klasarnir eru allir settir upp fyrir utan Bokasafn þar sem aðeins meiri stillinga þarf

### 27. Apríl 2020
#### Dagbókin er búin til

### 28. Apríl 2020
#### Bókasafn klasinn sem geymir safnkosti er kláraður. Föllinnn skoða og afskra safnkost voru kláruð. Viðmótið einnig klárað

### 5. Maí 2020
#### Forritið getur núna vistað safnkosti í skjöl til geymslu

# Virkni

Bókasafnið geymir safnkosti sína í röðuðum tengdum lista. Forritið býður upp á það að vista safnkostina í skjöl sem hvert gagnatag (bók, tímarit og myndband) á aðskilið. Öll grunnvirkninn eru einnig til staðar s.s. skrá, afskrá, eyða o.s.f.v. Hér að neðan mun syntaxin vera útskýrður og allir eiginleikar forritsins útskýrðir.

### Skrá:
##### Syntax: skrá *safnkost id titill sérstök_gögn*
Skrá skipuninn skráir mismunandi safnkosti í bókasafnið. 
Dæmi um virkni:
      skrá bók 1 Eldar Halli
      skrá myndband 2 funnycatvideo 2
      skrá tímarit 3 Dv 3

### Skoða:
##### Syntax: skoða *id*
Skoða skipuninn tekur inn id á hlut og prentar hann út.
Dæmi um virkni:
      skoða 1
      **1, Eldar eftir Halli**
 
 ### Eyða:
 ##### Syntax: eyða *id*
 Eyða skipuninn tekur inn id og eyðir samsvarandi safnkost.
 Dæmi um virkni:
      eyða 1
      **Hluturinn var skráður út úr bókasafninu!**
 
 ### Breyta:
 ##### Syntax: breyta *id upplýsingar nýja*
 Breyta skipuninn tekur inn id, form af upplýsingu og það sem kemur í stað þess.
 Dæmi um virkni:
      breyta 1 titill Englar
      **Titil bókarinnar hefur verið uppfærður.**
       
 ### Prenta:
 ##### Syntax: prenta
 Prenta skipuninn rennir í gegnum bókasafnið og prentar út alla safnkosti.
 Dæmi um virkni:
      prenta
      **1, Englar eftir Einar
      2, Dv, tbl 12
      3, funnycatvideo 10 min að lengd**
      
 ### Vista:
 ##### Syntax: vista
 vistar öll gögnin í skrár svo upplýsingarnar varðveitast.
 
 ### Hætta:
 ##### Syntax: hætta
 Hættir í forritinu og í leiðinni vistar allar upplýsingar.
      
