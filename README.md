# team_de_choc2k16

Un dépot entre amis pour s'entrainer et partager notre code en attendant la rentrée à 42.

## Projets de gvandeve

- [x] vigenere cypher

Un petit programme pour encrypter du texte.
Le fonctionnement est simple, le principe est le même que pour le rot13, sauf que la rotation change a chaque caractères en suivant une phrase clef.

exemple d'exécution:

```
lambda@Voyager:~/Documents/Dev/C/vigenere$ ./vigenere -e "LIBEREEEEEEE, DELIVREEEEEEEE" borntocode
--------- Texte a encrypter ----------
LIBEREEEEEEE, DELIVREEEEEEEE
--------------------------------------
[Clef d'encryption : borntocode]
------------- Resultat ---------------
MWSRKSGSHIFS, UREWXFHIFSVRXS
--------------------------------------
```

Quelques règles simples à suivre:
- Comme dans l'exemple,le premier argument doit être un '-' suivi du caractère 'e' pour un encodage ou 'd' pour un décodage.
- Le texte à encrypter doit être constitué exclusivement de caractères ascii, majuscules ou minuscules. Les caractères spéciaux et les espaces sont acceptés, mais seront ignorés lors de l'encodage.
- La clef doit être une suite de caractères ascii, en minuscules, sans espaces ni caractères spéciaux.

### Bonus !

Je vous mets au défi de décrypter la phrase suivante:

> CFRIH! Admpkcctoh kh t xxwvv y tgdfpcmsu exva at nsdr vzhj 'K ugs bu : L' rixq oi Z icbimotr iou xqe nhxvrf, rm o ssukcg vb gle es flcelte usrz_ws_flqt2i16 hns zv feofo. Nv ngxnwve t fhtqebgx ts mrko rjhigg no fvctg, oiu ucjq tizitbww we apyé ;)

Les trois premiers qui arriveront à trouver la solution se verront offrir un petit quelque chose de ma part, et le premier cadeau est supérieur aux deux suivants. Alors, êtes vous __nés pour decrypter__ ?

A vos terminaux !

PS : La clef de décodage est cachée quelque part dans le texte, mais peut être pas dans sa forme utilisable. Lisez bien les règles à suivre et rappelez-vous que le language international de la programmation est l'anglais !
