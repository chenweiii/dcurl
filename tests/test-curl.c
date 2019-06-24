/*
 * Copyright (C) 2018-2019 BiiLabs Co., Ltd. and Contributors
 * All Rights Reserved.
 * This is free software; you can redistribute it and/or modify it under the
 * terms of the MIT license. A copy of the license can be found in the file
 * "LICENSE" at the root of this distribution.
 */

#include "common.h"

int main()
{
    const char *trytes_test_case =
        "QQ9VLGQTJICJH9UZNSBXRSKBWVXCTRNGLJPEYFSZBISDCGBHGAV9TEHIMJS9LMQNHFNWVA"
        "XALKGESPWZMUMZPQCKCUFSEJZVHWZHZOEZBPTERXPHUQLQLZMENKOKAWMJ9LCFSIBSBEYC"
        "JQVQQMTMRJMDEKRXLCIRZFWQBRJYLPSK9XLWFYFTU9FBJATWPQRJBHWYJRUEXSXMBJLVWN"
        "YRTZJTHLEKDTWCGJ9OXDEZNWTKLTXXTKVFXDMRJUDAMDACRHJKZIJFJBZRVDLSTIMOWPTL"
        "LIVHCFUBMSQIPVPCSQAPZGHHNNQLWEHDTIQZQTAXJMTTROYOTIZSZKKQFXBHXFKSNAGZWH"
        "WEGXCKHSJQGBJGC9IKUSSJEAOHTPGPMIYPEXJXJKRLX9IOCUDKK9ONEUONYVGHRHXSAUZJ"
        "XGVQNWSDZIYXXZMMJKRTOXSWJHBIMXPEMJTKIBSQKPICTKAQLJVOLZSGNVVBIOFJJKKJ9U"
        "BYKJWCBRPQLGBNEKEFRYCHB9PORAKEKTJZYZBFGZLONUJCPNINGUTYWTMDKTEPDASCHNVH"
        "XTUIOZ9PDALXKQYLILMUJEJWTYYAGEQXNNPLOMFGHSTFCNRMDFUSQREHFASDXZZOYNWNVK"
        "CRFZIDF9X9YKME9O9NJH9LFVNNSOXHSQOMBULFHBBPSGRCCGKWENQOZHRSIIHKKXAQTFIS"
        "NVGIVMBDKSJYDW9VTZBAVYWWJAIYSCHGBIXKMKHBRTHWQMIWQVPWFUJQVUDZRDX9MMCXOQ"
        "TQZGKECGIHATHUC9TDGKUKOYXEEBGTQYEO9KADOSMYWGQARTIUG9IUHQEBWSFHWDZCRCH9"
        "WDRJEUSQDBBGGKTOYBKYZX9LUKUGBVTEPXDOVVNSKPUWNARSILQNOQKATCUHMRVMKVHF9B"
        "9TEJDOMBDXLNKDJI9IIYRXNOQPBOVOEEGQFSZJJOFPNFVXOYZNLSOOA9FWDFJKDOQUHWHB"
        "NDWQZZVRBZJSLDVBRCGFCWXNUFTMLCHNXODSQMUIBPN9NMAXZXKUYYRUEDSLW9UEQYGSEB"
        "EOHGI9W9WAUFDEQCXVYOTBAAHFXHRGJBWGFZKIUMSWEXAD9EDALOOYQZIXKUOWJDHBHSEU"
        "DPJJRXANPPHUZWJM9KDVGJUAQHFJTWNFSULGSWMGMAOCAHTIYYJONOLKGNKRXWWZYWKITS"
        "FPQJNHQWAIJULYWPXQENPZTWZISXJBWYLENOINLFBRWWGWSWJONHIA99VGCSAT9XNMZUCS"
        "VEJMZJASUSXVUWFSVFXUIFWGIFKLEFLANHTITFCOPXRXTDXRDHLWP9RJHVQJMLPBFVHTIO"
        "QMSZECNPITTBTPLUHDQQZP9BWTWIZSOTMTZQWHCETRTKQPOHPJMJMLSBWC9ZRQAZDLAPJH"
        "AXRQZ9RUHHBPASWVUHBYX9FH9PLEHQEKCOMIHUNDVKOPKXEFM9CNP9LOLMBVHMMWNDCKHS"
        "YZEXOJAQOHMRXEGWMWFW9YVOZ9YDPHWVTKWFYUECSROYJENFPSIKHBJRSNWO9KQUENGPVU"
        "LVYAQFAIYFSNIYR9LLRMYNCNQQAOPFNMWFSWSPMWNNIRNVKDZWRLGMPCBOVIMMXEZUFYPF"
        "PIGWTGOLDAEBZQADSOGVDZXHEWZGHNAAHMFPSOZD9SEPNCW9GTN9WLFDDCKMMXPXAEUUJP"
        "JFKKWMGUKVMYBH9AIEFAIIDJOAWRDKECA99XOYRSFZQKTVRJMTUAQJZUTKGXROESUYYSHT"
        "LRIZRPSNDFEEZWXCQONZYCD9TOHCBP9ISXQ9YSRZJ999Z9TETYOINSDGRBQSDTVFABHQNL"
        "TWGFYLHBHPVKLIBUMLVSURAOS9QHXDTIPKOJDLYOKRCEKCBMKVYIAKVA9WTGDWHIRUAWOV"
        "RKOSYTNIZAZNTJRFJDMNLGHTDKPKZDLBPQXRIRIVREMOBCPHMBBAUKNXHU9XIZNG9GD9LD"
        "IBBFPSI9PJNRCHXHNWAZXIACE9LUBNUWOK9LGJ9MKZQRI9CBCJUNALQKKVGGSPRJFAGCXN"
        "FO99YMLMKI9NVUZCZ9BCUEBSGMAVNKGWYWWQPZISMKAROXLQWEHOJIJOIIYRUDBNHRD9DE"
        "DQWQONAXKKSYMYCFTITZFKIXKZCGAVAFQIYEMESOIMWUUDSXJRR9RVWTAAHCOA9SCQBF9L"
        "AGPPYDXPEBKLHZ9KHKTXFP9XOVMVWIXEWMOISJHMQEXMYMZCUGEQNKGUNVRPUDPRX9IR9L"
        "BASIARWNFXXESPITSLYAQMLCLVTLHW9999999999999999999999999999999999999999"
        "999999999999FBIEUWD99A99999999C99999999DEXRPLKGBROUQMKCLMRPG9HFKCACDZ9"
        "AB9HOJQWERTYWERJNOYLW9PKLOGDUPC9DLGSUH9UHSKJOASJRU9MMRRSLICRITOROFC9FB"
        "VWLFEDNN9KJKYHUMRCJEUDGCYCWTBP9HHBEEJRFAU9FALRJWTU99NZK999999UE9VSBDVS"
        "RNTBZWPXYZPGAUTSWFLARLPXMHYBSTEUWIDOFJQJMVIACGUPTOMBWQO9AEADCFCMFJ9999"
        "99WQKHJEXIHMOKQETOUTEO9JUPCDNAJQYZVXQRCXGYGEBOTMHE9HSJXVYVQUS9FPDLQWWK"
        "SYVDPCXX9LLAT";
    int length_test_case = 2673;

    Trytes_t *answer = initTrytes((signed char *) "WPM9JCTQH9QHBHBJCODWDNPSLFLQDZADRAEZTZDL9OEGTVRZARVLVJHZIMPBPCTAIYJKWTUSRKNNTMFOQ", 81);
    assert(answer);
    Trytes_t *trytes =
        initTrytes((signed char *) trytes_test_case, length_test_case);
    assert(trytes);
    Trytes_t *ret_trytes = hashTrytes(trytes);
    assert(ret_trytes);

    int ret = compareTrobject(ret_trytes, answer);

    freeTrobject(answer);
    freeTrobject(trytes);
    freeTrobject(ret_trytes);

    assert(ret != 0);

    return 0;
}
