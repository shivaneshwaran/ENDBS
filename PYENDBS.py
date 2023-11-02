def encrypt_string(input_string):
    return "".join(chr(ord(char) - 12) for char in input_string)

def decrypt_string(input_string):
    return "".join(chr(ord(char) + 12) for char in input_string)

while True:
    str_input = input("Please enter a message:\t")
    
    print("\nPlease choose following options:")
    print("1 = Encrypt the message.")
    print("2 = Decrypt the message.")
    
    xeros = int(input())
    
    if xeros == 1:
        encrypted_str = encrypt_string(str_input)
        print(f"Encrypted string: {encrypted_str}")
    elif xeros == 2:
        decrypted_str = decrypt_string(str_input)
        print(f"Decrypted string: {decrypted_str}")
    else:
        print("\nInvalid Input !!!")
    
    print("    |-----------------------------------|")
    print("    | [1] RETURN                        |")
    print("    | [2] EXIT                          |")
    print("    |-----------------------------------|")
    
    click = int(input())
    
    if click == 1:
        continue
    elif click == 2:
        break
    else:
        print("\nInvalid Input !!!")
