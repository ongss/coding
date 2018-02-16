a="https://www.youtube.com"
import urllib.request
inWeb=urllib.request.urlopen(a)
for line in inWeb:
    print(line.decode())
inWeb.close()
