word = "engineering"
vowels = "aeiou"
print(f"Consonants in {word}:", end = "")
for char in word:
 if char in vowels:
  continue
print(char, end = "")

print()

word = "engineering"
vowels = "aeiou"
print(f"Consonants in '{word}': ", end="")
for char in word:
if char in vowels:
continue
print(char, end="")
print()