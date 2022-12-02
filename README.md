# unique-email-addresses

Every valid email consists of a local name and a domain name, separated by the '@' sign. Besides lowercase letters, the email may contain one or more '.' or '+'.

For example, in "alice@gmail.com", "alice" is the local name, and "gmail.com" is the domain name.
If you add periods '.' between some characters in the local name part of an email address, mail sent there will be forwarded to the same address without dots in the local name. Note that this rule does not apply to domain names.

For example, "alice.z@gmail.com" and "alicez@gmail.com" forward to the same email address.
If you add a plus '+' in the local name, everything after the first plus sign will be ignored. This allows certain emails to be filtered. Note that this rule does not apply to domain names.

For example, "m.y+name@email.com" will be forwarded to "my@email.com".
It is possible to use both of these rules at the same time.

Given an array of strings emails where we send one email to each emails[i], return the number of different addresses that actually receive mails.

Example 1:

Input: emails = ["test.email+alex@gmail.com","test.e.mail+bob.cathy@gmail.com","testemail+david@lee.gmail.com"]

Output: 2

Explanation: "testemail@gmail.com" and "testemail@lee.gmail.com" actually receive mails.

Example 2:

Input: emails = ["a@gmail.com","b@gmail.com","c@gmail.com"]

Output: 3
