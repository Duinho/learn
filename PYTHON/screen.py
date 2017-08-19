import pyautogui
import time

time.sleep(5)
찾을사진 = pyautogui.locateOnScreen('테스토.png',region=(0,0, 900, 700),grayscale=True)
사진x, 사진y = pyautogui.center(찾을사진)
pyautogui.click(사진x, 사진y)
