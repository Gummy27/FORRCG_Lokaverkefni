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
#### Syntax: skrá *safnkost id titill sérstök_gögn*
<p>Skrá skipuninn skráir mismunandi safnkosti í bókasafnið. </p>
<p>Dæmi um virkni:</p>
<p>      skrá bók 1 Eldar Halli</p>
<p>      skrá myndband 2 funnycatvideo 2</p>
<p>      skrá tímarit 3 Dv 3</p>

### Skoða:
#### Syntax: skoða *id*
<p>Skoða skipuninn tekur inn id á hlut og prentar hann út.</p>
<p>Dæmi um virkni:</p>
<p>      skoða 1</p>
<p>      <b>1, Eldar eftir Halli</b></p>
 
 ### Eyða:
 #### Syntax: eyða *id*
<p> Eyða skipuninn tekur inn id og eyðir samsvarandi safnkost.</p>
<p> Dæmi um virkni:</p>
<p>      eyða 1</p>
<p>      <b>Hluturinn var skráður út úr bókasafninu!</b></p>
 
 ### Breyta:
 #### Syntax: breyta *id upplýsingar nýja*
<p> Breyta skipuninn tekur inn id, form af upplýsingu og það sem kemur í stað þess.</p>
<p> Dæmi um virkni:</p>
<p>      breyta 1 titill Englar</p>
<p>      <b>Titil bókarinnar hefur verið uppfærður.</b></p>
       
 ### Prenta:
 #### Syntax: prenta
<p> Prenta skipuninn rennir í gegnum bókasafnið og prentar út alla safnkosti.</p>
<p> Dæmi um virkni:</p>
<p>      prenta</p>
<p>      <b>1, Englar eftir Einar</b></p>
<p>      <b>2, Dv, tbl 12</b></p>
<p>      <b>3, funnycatvideo 10 min að lengd</b></p>
      
 ### Vista:
 #### Syntax: vista
 <p>vistar öll gögnin í skrár svo upplýsingarnar varðveitast.</p>

 ### Hætta:
 #### Syntax: hætta
 <p>Hættir í forritinu og í leiðinni vistar allar upplýsingar.</p>
      
