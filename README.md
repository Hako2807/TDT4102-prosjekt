# TDT4102-prosjekt
Avsluttende prosjekt i TDT4102 Prosedyre- og objektorientert programmering Vår 2025. Prosjektet tilhører Håkon Støren og Vetle Støren (MTFYMA).

## Hva
Programmet skal gjenskape et bilde ved å plassere mange enkle figurer ut på skjermen.

## Struktur
- shape
    - Den grunnleggende formen som de spesifikke formene arver fra.
    - circleShape
        - Sirkel som arver fra shape.
    - rectangleShape
        - Rektangel som arver fra shape.
- getPixelsFromImageFile
    - Tar inn en filsti til et bilde (.png). getPixels-funksjonen returner et state-objekt med fargeverdiene til hver pixel for bildet i den gitte filstien. Implementasjonen er gjort med inspirasjon fra https://discourse.libsdl.org/t/how-do-i-get-the-rgb-values-of-a-pixel-from-a-given-surface-and-x-and-y-coordinates-in-sdl2/26915/2. Har også getHeigth og getWidth som returnerer henholdsvis høyden og bredden på bildet.
- image_file
    - Lagrer pikslene fra en state som en fil.
- matrix
    - En implementasjon av matriser.
- image
    - Bruke matrix klassen for å lagre alle fargeverdiene til hver pixel. 
- state
    - Objekt som inneholder et image og en score. Scoren er hvor mye imaget i state-objektet avviker fra imaget til bildet funnet ved hjelp av getPixelsFromImageFile.
- window
    - Arver fra AnimationWindow og tegner en state til skjermen. Shapes blir plassert på skjerm ved å ta gjennomsnittet av hver fargekanal som er der fra før, og fargen til shapen.
- solve
    - Her er logikken til algoritmen som beskrevet nedenfor implementert. Scoren regnes ut ved å ta avstanden mellom hver fargekanal til hver pixel opp mot "fasiten". Så lavere score er bedre.



## Algoritmen
Først lages et referanseobjekt med getPixelsFromImageFile. Dette er det bildet som programmet skal etterligne. 
Deretter plasseres mange ulike shapes forskjellige steder på skjermen, og den staten med best score blir lagret og tatt vare på.
Dette gjentas flere ganger med mindre og mindre shapes helt til bildet er nære nok originalen.


## Mulige forbedringer
- Flere shapes
- Raskere algoritme
- Bedre GUI
- Playback av hvilke shapes som er plassert ved lagring til fil
