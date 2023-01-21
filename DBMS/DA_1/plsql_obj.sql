CREATE OR REPLACE TYPE customer AS OBJECT 
(code number(5), 
 name varchar2(30), 
 contact_no varchar2(12), 
 addr address, 
 member procedure display 
); 
/ 
DECLARE 
   residence address; 
BEGIN 
   residence := address('103A', 'M.G.Road', 'Jaipur', 'Rajasthan','201301'); 
   dbms_output.put_line('House No: '|| residence.house_no); 
   dbms_output.put_line('Street: '|| residence.street); 
   dbms_output.put_line('City: '|| residence.city); 
   dbms_output.put_line('State: '|| residence.state); 
   dbms_output.put_line('Pincode: '|| residence.pincode); 
END; 
/ 



CREATE OR REPLACE TYPE rectangle AS OBJECT 
(length number, 
 width number, 
 member procedure display, 
 order member function measure(r rectangle) return number 
); 
/ 


CREATE OR REPLACE TYPE BODY rectangle AS 
   MEMBER PROCEDURE display IS 
   BEGIN 
      dbms_output.put_line('Length: '|| length); 
      dbms_output.put_line('Width: '|| width); 
   END display;  
   ORDER MEMBER FUNCTION measure(r rectangle) return number IS 
   BEGIN 
      IF(sqrt(self.length*self.length + self.width*self.width)> 
         sqrt(r.length*r.length + r.width*r.width)) then 
         return(1); 
      ELSE 
         return(-1); 
      END IF; 
   END measure; 
END; 
/ 


DECLARE 
   r1 rectangle; 
   r2 rectangle; 
BEGIN 
   r1 := rectangle(23, 44); 
   r2 := rectangle(15, 17); 
   r1.display; 
   r2.display; 
   IF (r1 > r2) THEN -- calling measure function 
      r1.display; 
   ELSE 
      r2.display; 
   END IF; 
END; 
/
