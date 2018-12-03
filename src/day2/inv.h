#pragma once

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

namespace inv {
    const std::vector<std::string> input = {
        "efmyhuxcqqldtwjzvisepargvo", "efuyhuxckqldtwjrvrsbpargno", "efmyhuxckqlxtwjxvisbpargoo", "efmyhuxczqbdtwjzvisbpargjo", "efmyhugckqldtwjzvisfpargnq", "tfmyhuxckqljtwjzvisbpargko", "efmyhuxckqldtvuzvisbpavgno", "efmyhufcrqldtwjzvishpargno", "tfmyhuxbkqlduwjzvisbpargno", "efayhtxckqldbwjzvisbpargno", "efgyhuxckuldtwjzvisbpardno", "efmyhuxckuldtwizvisbpargqo", "efmyhuxcknldtjjzvihbpargno", "efmyhuxcnqddtwjzvisbpafgno", "efmyhubokqldtwjzvisbpargdo", "efmhhuxckqldtwdzvisbpjrgno", "efmyhuxckqldtwjrcisbpargny", "efmyhuxckqsdtwjzlisbpargng", "effyhuxckqlqtwjzjisbpargno", "nfmyhjxckqldtwjzcisbpargno", "efmyhvxckqldtwszvwsbpargno", "efmyhuxckqldtwutvisbpprgno", "kfmyhuxckqldtwzuvisbpargno", "efhyhtxckqldtwjmvisbpargno", "efmyhuhckqldtwjzvisbpxwgno", "efmyhuxcfqldtrjzvitbpargno", "efmyhudckqldtwjfvisbparvno", "ekmyhuxckqlstwjzvisbdargno", "efmyhuxckqlxtwjftisbpargno", "etsyhuxckqldtwjzvisbpargnf", "exmyhusckqldtwjzvisbpakgno", "efmyhubckqlrtljzvisbpargno", "efmyhuxckwldtwjovizbpargno", "efmyhulckqzdtwjzvisbpargpo", "efmyhuxckbcdlwjzvisbpargno", "zfmyhulckqbdtwjzvisbpargno", "efmyquxckfldtwazvisbpargno", "efxyhuxakqldtwjzvisupargno", "efmlhuxckkedtwjzvisbpargno", "efhyhuxwkqldtwjzvisbparjno", "efmyhuxfkqldtwjzvisvparyno", "efmyhuxckqfdtijzvisblargno", "efmyhuxckqldtfjzvisbwhrgno", "efmymuxcknldtwzzvisbpargno", "eomybuxckqldtwkzvisbpargno", "pfmyhuxckqldtwgzvasbpargno", "vfmyhuxcoqldtwjzvisbparvno", "eflyhuxckqldtwjzvirypargno", "efmyvuxckqldtwizvisbpaqgno", "epmyhuxckqldtwjzvesbparpno", "efoyhuxckoldtwjmvisbpargno", "efmyhuxckqydtwpzvisbpaqgno", "efmyhuxckqldezbzvisbpargno", "efmyhuxckqldtwjzvisboalxno", "efmyhuxckqldtwuzvipbjargno", "efmymuxcuqldtwjzvasbpargno", "jfmyhuxckqldtwjzvzsbpargdo", "nfmyhuxckqlntsjzvisbpargno", "efmxhuxckqgdtwjzvisbparjno", "efmyhuxckpldtpjzvpsbpargno", "efmyhuxcyqldtwjhvisbpargqo", "efmyhexgkqydtwjzvisbpargno", "ffmyhuxckqldtwjzvisbpafgnk", "efmyfuxckqldtwjpvisbpartno", "efmyhoxckcmdtwjzvisbpargno", "efmyhuxxkqldtwjzviabparyno", "jfmyhuxakqldtwgzvisbpargno", "efmjhuxckqcdtwjzvisbjargno", "efmyhuxccqldtwjzxisbxargno", "efmyhurckqldiwjzvrsbpargno", "efmyhuxckasdtwjzvisboargno", "efmyhvxckmldtwjgvisbpargno", "efmyhuxckoldtwjuvisbpardno", "efmyduxckqldtwjgvzsbpargno", "ejmyhuxckqldtwbzvisbpargnb", "efmymuxchqldtwjzvibbpargno", "efmyhjxckqldtwjgvinbpargno", "efmyhuxhyqldtwbzvisbpargno", "efmyhuxckqldtwjzvisbpzignq", "efmyuueckqldxwjzvisbpargno", "qfmyhyxckqldtwizvisbpargno", "efmyhupckqldtwjzvpgbpargno", "efmycuxckqldtwjzvfdbpargno", "efmyhugcrqldtwjfvisbpargno", "efmyhexckqldtwjzvischargno", "efmyhuxckqldtljzvasbpamgno", "efmyzdxckqldtwjovisbpargno", "efmyhuxccqldtwjzvdsbpaigno", "ufmyhuxekqldtwjzvisbpargne", "efmyhuxckqldfwozvisgpargno", "afmyhuackqldtwjzvisbdargno", "efmyauxckqldtwjzvisiparmno", "efmysuxckqldtwjzvisbeaggno", "efmyhuxckqldtwjzvisbgzigno", "efryhuxlkqldtwozvisbpargno", "lfmyhuxckqldtwjzvhsbparuno", "efmyhzxckqldswjzvisqpargno", "efmyhuxrkqldtwjzvisgpargco", "efmyhudckqldtwjzyisbkargno", "efmyhuacqqldtwjzviabpargno", "jfmyhuxckqldtwvzvicbpargno", "efmkhuxckqlftejzvisbpargno", "nfmyhuxckqldnwjzvisbxargno", "efmyhuxckqldtwjvvisjpyrgno", "efmyhuxcmxldtwjzvisbpargto", "efmyhuxckqldtwqbvpsbpargno", "efmyhuxckzldjwjzvisbplrgno", "efmywgxckqldtwxzvisbpargno", "efmsguxckqldhwjzvisbpargno", "nfmyhuxlkqldtwjzvisbgargno", "etmyhuxckqldtwjzvqsbptrgno", "efmyxuxckqldtfjzvisbyargno", "cfmihuxckqldtwjzvisbpargnf", "jfzyhuxckqldtwjzviscpargno", "efmyhuxckqldtmjzvisbpbzgno", "bfmyhuzckqldcwjzvisbpargno", "efmyhuxckqldtmjzvmslpargno", "efqyvuxckqldtwazvisbpargno", "efmecrxckqldtwjzvisbpargno", "efmyhuuckqldtwjzvisrpargnt", "efmphuxckqldtwjzvisbparmho", "ifmyhuxckqldtwjzvismpsrgno", "efmyhuookqldywjzvisbpargno", "efmyhfxckyldtwjnvisbpargno", "efmyhxhckqldtwjzvisqpargno", "efryhuxcfqldtwjzvisbparkno", "efmyhutckqldpwjzvixbpargno", "efmyoukckqldtwjzvisbpargko", "efmyhuxckqldtwjzviseparynv", "efmyhuxcksldvwjzvisbnargno", "efmyhuxckqrdtwlzmisbpargno", "efmyhuxcwqldtwjzviqapargno", "eymyhuxckqrdtwkzvisbpargno", "efmyhuxckqldtwjzpisopargnj", "efmyhuxikqldtwjzvirupargno", "efmyhuxcuzldtnjzvisbpargno", "efmyhxxikqldtwjzvisbpalgno", "efmyhuxceqldtwjzvdsbparguo", "efmyhuxwkqldtwjmvisbparxno", "efmyhuxpkqldtwjzvisfpargfo", "efmyfuxckaldtwjzvirbpargno", "efmyhuxckqrdtwjzvismprrgno", "efmyhuxckqldzwjzvisbpnrgfo", "efmyhfuckqldtwjyvisipargno", "efmyhuxcpqlqfwjzvisbpargno", "efmyyuxckqldtwjzvrsepargno", "efmphuxckqlptqjzvisbpargno", "efmyhuxnfqldtwjzvisbpmrgno", "efmyhuxckqldtwjzkisnpnrgno", "mfmyhuxckqldtwjzvisbzarcno", "efmyhuxckqldtwlzviszpargwo", "efmytuxckqndtwjqvisbpargno", "efmyzuxckqldtwjzvisbaargjo", "efmihuxckqlutwjzvimbpargno", "efmyhuxckqldgwjzvixbparono", "tfmyduxckqldtyjzvisbpargno", "ejmyhuockqldtwjzvidbpargno", "efmyheyckqkdtwjzvisbpargno", "efmyhuxckqldtwjzoisbpargfj", "efqyhuxcxqldtwxzvisbpargno", "jfmyhaxckqldtwjzvisbvargno", "hfmyhqxckqldtwjzvisbparvno", "efmyhukckqlrtwjzvqsbpargno", "efmyhuxckqldvwmzvisbparrno", "efoyhuxckqldtwjzvilwpargno", "ejmyhuxckqldtwjzxisbprrgno", "efmyhuxckqldtsjzvisupdrgno", "efzyhjxckqldtwjzvisbpasgno", "ebmyhulckqldtwjzvisbpargnr", "efmyhuxcjqlntwjzqisbpargno", "efmlocxckqldtwjzvisbpargno", "efmyhuxckqldtwjzvizkpargnm", "ebmyhuxckqldtwjzvlfbpargno", "efmyhuxckqldtwjyvisbpjrgnq", "afmyhuxckqldtwjzvpsbpargnv", "efmyxuxckqwdzwjzvisbpargno", "efmyhuxskqlqthjzvisbpargno", "efmyhuxckqldtwdzvisbearglo", "mfmyhuxckqldtzjzvisbparggo", "efmyhuqckqodtwjzvisbpadgno", "efmyhuxctqldywjzvisspargno", "efmyhuxckqqdtwjnvisbporgno", "efmyhixckqldowjzvisbpaagno", "efmyhuxckqldtsszvisbpargns", "edmyhuxckqpdtwjzrisbpargno", "efsyhuxckqldtijzvisbparano", "efmyhuxckqxdzwjzviqbpargno", "efmyhuxckqldtwjzviqqpsrgno", "efmyhuockqlatwjzvisbpargho", "efmyhuxckqldtwjzvishkavgno", "vfmyhuxckqldtwjzvksbaargno", "efmahuxckqudtwbzvisbpargno", "ewmyhixckqudtwjzvisbpargno", "efmywuxczqldtwjzvisbpargao", "efmyhuqjkqldtwyzvisbpargno", "efmyhuxekqldtwjzmksbpargno", "efmyhuxcoqtdtwjzvinbpargno", "ebmyhuxkkqldtwjzvisbdargno", "ecmyhnxckqldtwnzvisbpargno", "efmyhuxbkqldtwjzvksbpaigno", "efayhuxckqidtwjzvisbpavgno", "efmrhuxckqldswjzvisbpaugno", "efmyhuuckqldtwjyvisipargno", "xfmyhuxckqldawjzvosbpargno", "efmyhuxckklhtwjzvisbpargnq", "efmyhmxcaqldzwjzvisbpargno", "efiyhuxcksldtwjzvisbpamgno", "zfmyhuzckqldtwjzvisbparhno", "efmyhuxckqlvtwjdvisbparsno", "efmyhmxckaldtwjzmisbpargno", "efmysuxcqoldtwjzvisbpargno", "efmyhuxckqldtwjzvisbsargrb", "effyhuxckqldtwjzvisbpwfgno", "efmyhuxclqmdtwjzxisbpargno", "edmohuxckqldtwjziisbpargno", "efmyhuxckpldtwjzviubpaegno", "efmyhuxcpqldtwjzjimbpargno", "ehmyhuxckqldtwjzsisbpargnq", "efmyhcxcdqldtwjzvisbqargno", "efmjhuxckqldmwjzviybpargno", "efeyhzxckqlxtwjzvisbpargno", "efmyhuxczqadtwazvisbpargno", "efmahuxckqldtwjzvisbpafgnl", "efmyouxckqldtwjzvizbpacgno", "emmrhuxckqldtwjzvisqpargno", "exmyhuxckqlftwjnvisbpargno", "efuyhuxckqldrwjzvisbpargnw", "efmywuxfkqldtwjztisbpargno", "efmyhuxdkqldtwjzvisbpqrzno", "eemyhuxckqldrwjzvisbpajgno", "efmyiuxckqldtbjzvrsbpargno", "eqmyhuxckqldlwjzfisbpargno", "efmyhuxckqlitwuzvisbpvrgno", "ecoyhuxckqldtwjzvishpargno", "efmyhuxckcldtwjzlisbparlno", "efmyhsxcknldtwjfvisbpargno", "efmyhuxckqldtwjrvosbpargbo", "enmehuxckzldtwjzvisbpargno", "hfmyhuxckqqdtwjzvisbpawgno", "efmyhufckcjdtwjzvisbpargno", "efmxhuxckqldthjzvisfpargno", "efmyaukckqldtwjsvisbpargno", "efmyhukckqldtwpzvisbpmrgno", "dfmyhuxckqldtwjzvisbvarmno", "afmbhuxckqldtwjzvssbpargno", "efmyhuxchqldtwezvisbpargzo", "efmphuxckqlxjwjzvisbpargno", "efhyxuxckqldtwjzvisbpargko", "sfmyhexckqldtwjzvisbqargno", "efmghuxckqldtwjzvitbparnno"
    };


    inline bool hasNIdenticalLetters(std::string str, int n) {
        std::sort(std::begin(str), std::end(str));
        std::string unique;
        std::unique_copy(std::begin(str), std::end(str), std::back_inserter(unique));
        bool foundN = false;
        for (auto& c : unique) {
            foundN = std::count(std::begin(str), std::end(str), c) == n;
            if (foundN) { return true; }
        }
        return false;
    }

    inline int checksum() {
        int twoCount = 0, threeCount = 0;
        for(auto& str : input) {
            if (hasNIdenticalLetters(str, 3)) { ++threeCount; }
            if (hasNIdenticalLetters(str, 2)) { ++twoCount; }
        }

        return twoCount * threeCount;
    }

    bool hasHammingDistanceOne(const std::string& lhs, const std::string& rhs) {
        int dist = 0;
        for (int i = 0; i < lhs.length(); ++i) {
            if (lhs[i] != rhs[i]) { dist++;}
            if (dist > 1) { return false; }
        }
        std::cout << "Found string at distance 1" << "\n";
        return true;
    }

    inline std::vector<char> commonChars() {
        std::vector<char> commonChars;
        for (auto& str : input) {
            for (auto& other : input) {
                if (str == other) { continue; }
                if (hasHammingDistanceOne(str, other)) {
                    for (int i = 0; i < str.length(); ++i) {
                        if (str[i] == other[i]) {commonChars.emplace_back(str[i]);}
                    }
                    return commonChars;
                }
            }
        }
        return commonChars;
    }
}
