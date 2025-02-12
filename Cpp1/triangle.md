Algorithme
Lire les valeurs a, b, c.
Vérifier si les longueurs peuvent former un triangle en utilisant l'inégalité triangulaire :
Si (a + b ≤ c) OU (a + c ≤ b) OU (b + c ≤ a), afficher
"Les longueurs saisies ne peuvent pas former un triangle." et arrêter l’exécution.
Déterminer le type du triangle :
Si a == b == c, alors le triangle est équilatéral.
Sinon, si a == b OU b == c OU a == c, alors le triangle est isocèle.
Sinon, le triangle est scalène.
Vérifier si le triangle est rectangle :
Trier les trois côtés par ordre croissant (sides[0] ≤ sides[1] ≤ sides[2]).
Si sides[2]^2 == sides[0]^2 + sides[1]^2, alors le triangle est rectangle.
Afficher les résultats obtenus.