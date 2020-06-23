# Find out if the string s contains: alphanumeric characters, alphabetical characters,
# digits, lowercase and uppercase characters.
#
# Sample input:
# qA2
#
# Sample output:
# True <- any alphanumeric found
# True <- any alphabetical found
# True <- any digit found
# True <- any lowercase found
# True <- any uppercase found


if __name__ == '__main__':
    s = input()

    print(any(c.isalnum() for c in s)) # alphanumeric
    print(any(c.isalpha() for c in s)) # alphabetical
    print(any(c.isdigit() for c in s)) # digits
    print(any(c.islower() for c in s)) # lowercase
    print(any(c.isupper() for c in s)) # uppercase
