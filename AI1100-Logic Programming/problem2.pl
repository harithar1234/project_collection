%List of Teams
team(csk).
team(rr).
team(pk).
team(mi).
team(rcb).
team(kkr).
team(srh).
team(dc).

%-------------------------------------------------------------------------------

%data on matches
won(rcb, mi).
won(dc, csk).
won(kkr, srh).
won(pk, rr).
won(mi, kkr).
won(rcb, srh).
won(rr, dc).
won(csk, pk).
won(mi, srh).
won(rcb, kkr).
won(dc, pk).
won(csk, rr).
won(dc, mi).
won(srh, pk).
won(csk, kkr).
won(rcb, rr).
won(pk, mi).
won(rr, kkr).
won(csk, rcb).
won(dc, srh).
won(kkr, pk).
won(rcb, dc).
won(csk, srh).
won(mi, rr).
won(dc, kkr).
won(pk, rcb).
won(mi, csk).
won(rr, srh).
won(dc, pk).


%C is number of matches that X won
nooftimeswon(X,C):-
    team(X),%checking X is a team
    findall(Y,won(X,Y),L),%checking if team X won team Y.storing the list of all teams that X won against in L.
    length(L,C).%counting the list L and store in C

%C is number of matches that X lost
nooftimeslost(X,C):-
    team(X),%checking X is a team
    findall(T,won(T,X),P),%listing all teams T that won X in P
     length(P,C).

%C is category of S
category(S,C):-
    team(S),%checking S is a team
    nooftimeswon(S,W),%W is number of matches that S won
    (W=:=1)->C=1;C=0,
    nooftimeslost(S,L),%L is number of matches that S lost
    (L=:=0)->C=3;C=2.

