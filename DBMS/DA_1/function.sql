declare
    x number;
    fac number;

function fact(x number) return number is
        f number:=1;
        i number:=x;
    begin
        loop
            f:=f*i;
            i:=i-1;
            exit when i=0;
        end loop;
        return f;
    end;

begin
    x:=6;
    fac:=fact(x);
    dbms_output.put_line(' Factorial '|| x || ' is ' ||fac);

end;
/
