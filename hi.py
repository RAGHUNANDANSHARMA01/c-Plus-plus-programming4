#raise_error.py
try:
 i= int ( input ( "Enter a positive integer value: " ) )
 if i<=0:
  raise ValueError ( "This is not a positive number!!" )
except ValueError as e:
 print(e)
