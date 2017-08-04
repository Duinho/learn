import requests

url = "http://naver.com"

r = requests.get(url)

print (r.content)
