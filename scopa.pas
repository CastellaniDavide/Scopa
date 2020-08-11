procedure readcard(var s: ansistring; var number: longint; var suit: char);
begin
    if (s[1] = '1') and (s[2] = '0') then
    begin
        number := 10;
        suit := s[3];
        s := copy(s, 5, length(s));
    end else begin
        number := ord(s[1]) - ord('0');
        suit := s[2];
        s := copy(s, 4, length(s));
    end;
end;

var
    line: ansistring;
    i, number: longint;
    suit: char;

begin
{
    uncomment the following lines if you want to read/write from files
    assign(input,  'input.txt');  reset(input);
    assign(output, 'output.txt'); rewrite(output);
}

    readln(line);
    for i:=1 to 3 do
    begin
        { card in hand }
        readcard(line, number, suit);

        { use number and suit }
    end;

    readln(line);
    for i:=1 to 4 do
    begin
        { card on table }
        readcard(line, number, suit);

        { use number and suit }
    end;

    { insert your code here }

    writeln(42); { change 42 with actual answer }
end.
