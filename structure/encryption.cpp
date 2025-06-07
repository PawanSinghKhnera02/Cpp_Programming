#include <iostream>
#include <string>

using namespace std;

// Function to encrypt the plaintext
string encrypt (string plaintext, int shift) {
    string ciphertext= " ";
    int length = plaintext.length();  //5
    for (int i = 0; i < length; i++) { //P
        char ch = plaintext[i];   
        // Handling uppercase letters
        if (isupper(ch)) {
            ch = ((ch - 'A') + shift) % 26 + 'A';
        }
        // Handling lowercase letters
        else if (islower(ch)) {
            ch = ((ch - 'a') + shift) % 26 + 'a';
        }
         ciphertext = ciphertext + ch;
    }
    return ciphertext;
}

int main() {
    string plaintext;
    int shift;

    // Input plaintext and shift value from user
    cout << "Enter plaintext: ";
    getline(cin, plaintext);
    //cin >> plaintext;
    cout << "Enter shift value: ";
    cin >> shift;

    // Encrypt the plaintext
    string encryptedText = encrypt(plaintext, shift);
    
    // Output the encrypted text
    cout << "Encrypted text: " << encryptedText << endl;

    return 0;
}