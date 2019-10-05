
def translate_text(text):
    letter_array = []
    for letter in text:
        if ord('a') <= ord(letter) <= ord('z'):
            letter_array.append(hex(ord(letter)))
    print(",".join(letter_array))

def main():
    while True:
        text = input("Write a text: ")
        translate_text(text)

if __name__ == "__main__":
    main()