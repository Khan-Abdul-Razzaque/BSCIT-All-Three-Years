DECLARE

    ch char(1);

BEGIN

    ch:=:Ent;er_the_character;
    if (ch = 'a' or ch = 'e' or ch = 'i' or ch = 'o' or ch = 'u' or ch = 'A' or ch = 'E' or ch = 'I' or ch = 'O' or ch = 'U') then
        dbms_output.put_line('The character you entered is Vowel.');
    else
        dbms_output.put_line('The character you entered is Consonant.');
    end if;

END;