# My Hunter - The Duck Hunt Legacy

## 📜 Description

🎯 *My Hunter* est un jeu de tir inspiré du classique **Duck Hunt**. Le joueur incarne un chasseur qui doit abattre des canards en vol en cliquant dessus. Ce projet est une introduction au développement de jeux vidéo en **C** avec la bibliothèque **CSFML**.

---

## 🎮 Fonctionnalités

### ✅ Obligatoires
- 🖥️ **Gestion des événements** : fermeture propre de la fenêtre via un événement utilisateur.
- 🖱️ **Gestion des entrées utilisateur** : le joueur peut tirer en cliquant sur les canards.
- 🎞️ **Sprites animés** : utilisation de **sprite sheets** pour donner vie aux canards.
- 🔄 **Mouvements dynamiques** : les canards volent avec des animations de **rotation, translation ou mise à l'échelle**.
- ℹ️ **Mode aide (`-h`)** : permet d'afficher une description du programme et ses commandes disponibles.

### 🚀 Recommandées
- ⏳ **Animations fluides** : indépendantes de la puissance du PC.
- ⏱️ **Synchronisation avec `sfClock`** : garantit une gestion précise des animations.
- 📏 **Fenêtre adaptable** : prise en charge des résolutions entre **800x600** et **1920x1080** pixels.
- 🎛️ **Framerate limité** : optimisation pour éviter les saccades et garantir la fluidité.

### 🌟 Possibles améliorations
- 🎯 **Système de niveaux** : difficulté croissante avec des canards plus rapides ou plus nombreux.
- 🏆 **Affichage du score** : suivi des performances du joueur.
- 💾 **Enregistrement du meilleur score** : sauvegarde pour encourager l'amélioration.
- 🎯 **Ajout d'une cible visuelle** : pour une meilleure précision des tirs.

---

## ⚙️ Compilation

Le projet utilise un **Makefile** avec les règles suivantes :

```sh
make        # Compile le programme my_hunter
make clean  # Supprime les fichiers objets
make fclean # Supprime les fichiers objets et l'exécutable
make re     # Supprime tout et recompile
```

### 🔧 Commande pour compiler manuellement

```sh
gcc -o my_hunter src/*.c -I include -lcsfml-graphics -lcsfml-window -lcsfml-system
```

---

## 🎯 Utilisation

Exécuter le programme avec :

```sh
./my_hunter
```

Afficher l'aide :

```sh
./my_hunter -h
```

---

## 📦 Dépendances

- [**CSFML**](https://www.sfml-dev.org/download/csfml/) : bibliothèque graphique utilisée pour l'affichage et la gestion des événements.

---

## 📜 Liste des fonctions autorisées

### 🏛 Bibliothèque standard C
- `malloc`, `free`, `memset`
- `rand`, `srand`, `time`
- `(f)open`, `(f)read`, `(f)write`, `(f)close`
- `getline`

### 📚 Bibliothèques externes
- **Toutes les fonctions de la CSFML**  
- **Toutes les fonctions de la bibliothèque mathématique** (`math.h`)  

---

## 💡 Améliorations possibles

✨ Ajout de plusieurs **types d'oiseaux** avec des comportements différents.  
✨ Ajout d'un **timer** pour limiter le temps de jeu.  
✨ Implémentation d'un **mode difficile** avec une vitesse accrue des canards.  
✨ Intégration d'un **tableau des meilleurs scores**.  

---

## 👨‍💻 Crédits

Développé par **Théo Moitrier-Cabodi** dans le cadre d’un projet scolaire. 🚀