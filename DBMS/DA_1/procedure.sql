DECLARE 
   a number; 
   b number; 
   c number;
PROCEDURE findMin(x IN number, y IN number, z OUT number) IS 
BEGIN 
   IF x < y THEN 
      z:= x; 
   ELSE 
      z:= y; 
   END IF; 
END;   
BEGIN 
   a:= 23; 
   b:= 45; 
   findMin(a, b, c); 
   dbms_output.put_line(' Minimum of (23, 45) : ' || c); 
END; 
/



CREATE PROCEDURE add_product (
p_code IN Product.Pcode%TYPE,
p_name IN Product.Pname%TYPE,
p_price IN Product.Price%TYPE,
p_mfg_date IN Product.MFG_Date%TYPE
)
AS
BEGIN
INSERT INTO Product VALUES (p_code, p_name, p_price, p_mfg_date);
END;
/
execute add_product('P101', 'Samsung Galaxy S500', 35000, '20-feb-2022');



DECLARE 
   num number; 
   factorial number;  
   
FUNCTION fact(x number) 
RETURN number  
IS 
   f number; 
BEGIN 
   IF x=0 THEN 
      f := 1; 
   ELSE 
      f := x * fact(x-1); 
   END IF; 
RETURN f; 
END;  

BEGIN 
   num:= 6; 
   factorial := fact(num); 
   dbms_output.put_line(' Factorial '|| num || ' is ' || factorial); 
END; 
/
