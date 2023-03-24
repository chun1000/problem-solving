def total_score(team):
    total = 0
    total += team[0]*6
    total += team[1]*3
    total += team[2]*2
    total += team[3]*1
    total += team[4]*2
    return total


visiting_team = list(map(int, input().split()))
home_team = list(map(int, input().split()))

print(str(total_score(visiting_team)) + " " + str(total_score(home_team)))
