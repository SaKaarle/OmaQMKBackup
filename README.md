# OmaQMKBackup
Backup configs ja muut tärkeät configit QMK 3D printantuille näppiksille.
[QMK Githubista](https://github.com/qmk/qmk_firmware) imuroit firmikset C:/Users/USERNAME/qmk_firmware/ käyttäen git komentoa.

Konverttaukseen käytetty QMK omia ohjeita ja tekoälyä välttääkseen tylsän manuaalikonverttauksen. Näppikset ovat yksinkertaisesti käännetty RP2040 pinneille vastaavasti:

```
#define MATRIX_ROW_PINS { GP0, GP1, GP2, GP3, GP4, GP5 }
#define MATRIX_COL_PINS { GP6, GP7, GP8, GP9, GP10, GP11, GP12, GP13, GP14, GP15, GP16, GP17, GP18, GP19, GP20, GP21, GP22 }
```
GP0:sta aloitetaan "ROW" eli rivit ensimmäisenä ja sitten vasta sarakkeet joita andimoto smallTKLiso:n tapauksessa 17

Mielipide: Keymap.c tiedostoja on helpompi modata omanmukaisesti, kuin käyttää info.json tai vastaavaa suositeltavaa metodia.

## MK75

## andimoto SmallTKLiso

`qmk compile -kb andimoto_small_tkl -km default`
