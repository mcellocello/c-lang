import os
from PIL import Image,ImageEnhance
listdir=os.listdir('/sdcard/dcim/100PINT/Pins/')
# listdir=os.listdir()
num=0
lens=len(listdir)
for i in listdir:
    print(str(num)+'. '+i)
    num+=1

print('\nPilih gambar yang mana ? '+'0 - '+str(lens-1))
x=int(input('Nomor = '))
skullraw=Image.open(listdir[x])
skullraw=skullraw.resize((960,960),Image.ANTIALIAS)
skullraw=skullraw.convert('L')
scanraw=Image.open('scan.png')
scanraw=scanraw.resize((960,960),Image.ANTIALIAS)
skullraw.paste(scanraw,(0,0),scanraw)
skullraw.show()
skullraw.save('/sdcard/res.jpg')
