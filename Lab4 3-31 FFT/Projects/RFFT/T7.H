/* Test for rfft: rand */
#define NX 512
#define FNAME "t7"
#define MAXERROR 10

#pragma DATA_SECTION (x,".input")

DATA x[NX] ={
-31627,	/* 0 */ 
20929,	/* 1 */ 
7938,	/* 2 */ 
3946,	/* 3 */ 
-16774,	/* 4 */ 
21100,	/* 5 */ 
-15517,	/* 6 */ 
16620,	/* 7 */ 
10461,	/* 8 */ 
-18738,	/* 9 */ 
6691,	/* 10 */ 
6876,	/* 11 */ 
10452,	/* 12 */ 
-20750,	/* 13 */ 
8947,	/* 14 */ 
-21605,	/* 15 */ 
2595,	/* 16 */ 
8085,	/* 17 */ 
12181,	/* 18 */ 
11621,	/* 19 */ 
24693,	/* 20 */ 
-31921,	/* 21 */ 
-12425,	/* 22 */ 
18287,	/* 23 */ 
-12628,	/* 24 */ 
27959,	/* 25 */ 
11711,	/* 26 */ 
-27895,	/* 27 */ 
-28134,	/* 28 */ 
-31983,	/* 29 */ 
-17880,	/* 30 */ 
1064,	/* 31 */ 
-2739,	/* 32 */ 
13315,	/* 33 */ 
5405,	/* 34 */ 
603,	/* 35 */ 
-27897,	/* 36 */ 
-20103,	/* 37 */ 
-7890,	/* 38 */ 
-14651,	/* 39 */ 
17750,	/* 40 */ 
-12194,	/* 41 */ 
9055,	/* 42 */ 
31884,	/* 43 */ 
188,	/* 44 */ 
29337,	/* 45 */ 
21495,	/* 46 */ 
27362,	/* 47 */ 
-25355,	/* 48 */ 
20453,	/* 49 */ 
26753,	/* 50 */ 
-22518,	/* 51 */ 
-24763,	/* 52 */ 
17212,	/* 53 */ 
14534,	/* 54 */ 
9936,	/* 55 */ 
16645,	/* 56 */ 
10691,	/* 57 */ 
25130,	/* 58 */ 
-14931,	/* 59 */ 
-5280,	/* 60 */ 
-18808,	/* 61 */ 
-30432,	/* 62 */ 
-27447,	/* 63 */ 
22972,	/* 64 */ 
-10472,	/* 65 */ 
-2218,	/* 66 */ 
27113,	/* 67 */ 
-17787,	/* 68 */ 
23724,	/* 69 */ 
10263,	/* 70 */ 
25633,	/* 71 */ 
-777,	/* 72 */ 
32282,	/* 73 */ 
-8301,	/* 74 */ 
2056,	/* 75 */ 
-20884,	/* 76 */ 
127,	/* 77 */ 
-5099,	/* 78 */ 
10512,	/* 79 */ 
11379,	/* 80 */ 
29968,	/* 81 */ 
-20192,	/* 82 */ 
-25477,	/* 83 */ 
4262,	/* 84 */ 
30744,	/* 85 */ 
-31209,	/* 86 */ 
24260,	/* 87 */ 
-31004,	/* 88 */ 
1279,	/* 89 */ 
-20164,	/* 90 */ 
14133,	/* 91 */ 
-16339,	/* 92 */ 
28430,	/* 93 */ 
-23775,	/* 94 */ 
1416,	/* 95 */ 
25897,	/* 96 */ 
28989,	/* 97 */ 
-10807,	/* 98 */ 
-4105,	/* 99 */ 
-1891,	/* 100 */ 
-22981,	/* 101 */ 
-23862,	/* 102 */ 
2129,	/* 103 */ 
14795,	/* 104 */ 
-6638,	/* 105 */ 
-9278,	/* 106 */ 
-14071,	/* 107 */ 
24156,	/* 108 */ 
8283,	/* 109 */ 
-16961,	/* 110 */ 
31328,	/* 111 */ 
9206,	/* 112 */ 
-17703,	/* 113 */ 
11882,	/* 114 */ 
10866,	/* 115 */ 
-23937,	/* 116 */ 
-31291,	/* 117 */ 
-15583,	/* 118 */ 
-25130,	/* 119 */ 
-28223,	/* 120 */ 
23127,	/* 121 */ 
-20948,	/* 122 */ 
-30641,	/* 123 */ 
15329,	/* 124 */ 
2392,	/* 125 */ 
-14677,	/* 126 */ 
-8620,	/* 127 */ 
-31921,	/* 128 */ 
25504,	/* 129 */ 
23985,	/* 130 */ 
-16105,	/* 131 */ 
4553,	/* 132 */ 
-22329,	/* 133 */ 
6183,	/* 134 */ 
-11068,	/* 135 */ 
10393,	/* 136 */ 
23828,	/* 137 */ 
4431,	/* 138 */ 
31485,	/* 139 */ 
19123,	/* 140 */ 
-22766,	/* 141 */ 
21823,	/* 142 */ 
-20193,	/* 143 */ 
9107,	/* 144 */ 
11074,	/* 145 */ 
17829,	/* 146 */ 
-7876,	/* 147 */ 
-3828,	/* 148 */ 
-1111,	/* 149 */ 
7084,	/* 150 */ 
-21232,	/* 151 */ 
-32632,	/* 152 */ 
19018,	/* 153 */ 
891,	/* 154 */ 
-18792,	/* 155 */ 
-25986,	/* 156 */ 
-22455,	/* 157 */ 
-6061,	/* 158 */ 
-6045,	/* 159 */ 
-29312,	/* 160 */ 
28951,	/* 161 */ 
-22938,	/* 162 */ 
-7577,	/* 163 */ 
-12382,	/* 164 */ 
-21721,	/* 165 */ 
25992,	/* 166 */ 
-11617,	/* 167 */ 
15333,	/* 168 */ 
-5839,	/* 169 */ 
-6567,	/* 170 */ 
361,	/* 171 */ 
-21671,	/* 172 */ 
1621,	/* 173 */ 
9252,	/* 174 */ 
-31704,	/* 175 */ 
22073,	/* 176 */ 
19885,	/* 177 */ 
12960,	/* 178 */ 
-2498,	/* 179 */ 
-27352,	/* 180 */ 
21016,	/* 181 */ 
-20117,	/* 182 */ 
-3581,	/* 183 */ 
-31916,	/* 184 */ 
-12534,	/* 185 */ 
24596,	/* 186 */ 
21969,	/* 187 */ 
-10938,	/* 188 */ 
24947,	/* 189 */ 
-1332,	/* 190 */ 
3985,	/* 191 */ 
7595,	/* 192 */ 
10609,	/* 193 */ 
7642,	/* 194 */ 
12132,	/* 195 */ 
665,	/* 196 */ 
14020,	/* 197 */ 
996,	/* 198 */ 
6937,	/* 199 */ 
30582,	/* 200 */ 
21108,	/* 201 */ 
-11943,	/* 202 */ 
5746,	/* 203 */ 
-24233,	/* 204 */ 
-16098,	/* 205 */ 
19857,	/* 206 */ 
10998,	/* 207 */ 
-31872,	/* 208 */ 
4035,	/* 209 */ 
-2978,	/* 210 */ 
26536,	/* 211 */ 
-14276,	/* 212 */ 
-28504,	/* 213 */ 
-1534,	/* 214 */ 
31697,	/* 215 */ 
27676,	/* 216 */ 
4010,	/* 217 */ 
9981,	/* 218 */ 
17868,	/* 219 */ 
-25808,	/* 220 */ 
-32695,	/* 221 */ 
2736,	/* 222 */ 
-32316,	/* 223 */ 
-3189,	/* 224 */ 
-19944,	/* 225 */ 
18816,	/* 226 */ 
7769,	/* 227 */ 
-31748,	/* 228 */ 
25612,	/* 229 */ 
17149,	/* 230 */ 
26672,	/* 231 */ 
16943,	/* 232 */ 
-7816,	/* 233 */ 
-11068,	/* 234 */ 
267,	/* 235 */ 
4231,	/* 236 */ 
17509,	/* 237 */ 
18339,	/* 238 */ 
-1043,	/* 239 */ 
19803,	/* 240 */ 
-1900,	/* 241 */ 
-19479,	/* 242 */ 
5217,	/* 243 */ 
10910,	/* 244 */ 
11583,	/* 245 */ 
28997,	/* 246 */ 
17702,	/* 247 */ 
15556,	/* 248 */ 
24000,	/* 249 */ 
32171,	/* 250 */ 
257,	/* 251 */ 
8458,	/* 252 */ 
19174,	/* 253 */ 
-3365,	/* 254 */ 
1596,	/* 255 */ 
-21529,	/* 256 */ 
-24203,	/* 257 */ 
-18429,	/* 258 */ 
-25853,	/* 259 */ 
-23498,	/* 260 */ 
-2820,	/* 261 */ 
18881,	/* 262 */ 
-14347,	/* 263 */ 
-18035,	/* 264 */ 
26793,	/* 265 */ 
-32285,	/* 266 */ 
5815,	/* 267 */ 
2759,	/* 268 */ 
10060,	/* 269 */ 
-12226,	/* 270 */ 
-17618,	/* 271 */ 
-5501,	/* 272 */ 
-13185,	/* 273 */ 
11299,	/* 274 */ 
28718,	/* 275 */ 
-10279,	/* 276 */ 
4125,	/* 277 */ 
-24975,	/* 278 */ 
-21689,	/* 279 */ 
-14489,	/* 280 */ 
3723,	/* 281 */ 
-945,	/* 282 */ 
29633,	/* 283 */ 
-17568,	/* 284 */ 
-1399,	/* 285 */ 
1737,	/* 286 */ 
19181,	/* 287 */ 
-20118,	/* 288 */ 
26840,	/* 289 */ 
27666,	/* 290 */ 
-31896,	/* 291 */ 
17532,	/* 292 */ 
29314,	/* 293 */ 
20530,	/* 294 */ 
27773,	/* 295 */ 
-19725,	/* 296 */ 
11419,	/* 297 */ 
27987,	/* 298 */ 
-10235,	/* 299 */ 
6192,	/* 300 */ 
7567,	/* 301 */ 
-32544,	/* 302 */ 
31586,	/* 303 */ 
26179,	/* 304 */ 
12631,	/* 305 */ 
-3955,	/* 306 */ 
13172,	/* 307 */ 
7189,	/* 308 */ 
-13114,	/* 309 */ 
23330,	/* 310 */ 
-25421,	/* 311 */ 
-13659,	/* 312 */ 
-26380,	/* 313 */ 
-6721,	/* 314 */ 
-10923,	/* 315 */ 
29110,	/* 316 */ 
22185,	/* 317 */ 
-15831,	/* 318 */ 
-29954,	/* 319 */ 
-32380,	/* 320 */ 
4876,	/* 321 */ 
15982,	/* 322 */ 
20106,	/* 323 */ 
9014,	/* 324 */ 
-16300,	/* 325 */ 
-23308,	/* 326 */ 
9931,	/* 327 */ 
29231,	/* 328 */ 
20699,	/* 329 */ 
28193,	/* 330 */ 
-12455,	/* 331 */ 
-15150,	/* 332 */ 
2388,	/* 333 */ 
-22066,	/* 334 */ 
-18939,	/* 335 */ 
-18558,	/* 336 */ 
9946,	/* 337 */ 
-29307,	/* 338 */ 
-17740,	/* 339 */ 
10971,	/* 340 */ 
-12390,	/* 341 */ 
-12672,	/* 342 */ 
14461,	/* 343 */ 
29777,	/* 344 */ 
-24172,	/* 345 */ 
-28291,	/* 346 */ 
-24559,	/* 347 */ 
-21877,	/* 348 */ 
26959,	/* 349 */ 
-23836,	/* 350 */ 
7666,	/* 351 */ 
-15139,	/* 352 */ 
-18305,	/* 353 */ 
13951,	/* 354 */ 
3210,	/* 355 */ 
28921,	/* 356 */ 
-11149,	/* 357 */ 
13399,	/* 358 */ 
29057,	/* 359 */ 
5346,	/* 360 */ 
24911,	/* 361 */ 
16356,	/* 362 */ 
-7889,	/* 363 */ 
14780,	/* 364 */ 
-22097,	/* 365 */ 
29894,	/* 366 */ 
-19906,	/* 367 */ 
18098,	/* 368 */ 
7424,	/* 369 */ 
-22131,	/* 370 */ 
-30730,	/* 371 */ 
-13852,	/* 372 */ 
30868,	/* 373 */ 
29520,	/* 374 */ 
-17821,	/* 375 */ 
30046,	/* 376 */ 
11786,	/* 377 */ 
-29163,	/* 378 */ 
6542,	/* 379 */ 
-7003,	/* 380 */ 
-18652,	/* 381 */ 
-20813,	/* 382 */ 
-27736,	/* 383 */ 
-32279,	/* 384 */ 
18923,	/* 385 */ 
-31600,	/* 386 */ 
24766,	/* 387 */ 
-9663,	/* 388 */ 
14556,	/* 389 */ 
30697,	/* 390 */ 
-22564,	/* 391 */ 
-22087,	/* 392 */ 
-12228,	/* 393 */ 
-30840,	/* 394 */ 
-9330,	/* 395 */ 
-30983,	/* 396 */ 
19243,	/* 397 */ 
32714,	/* 398 */ 
-25541,	/* 399 */ 
8033,	/* 400 */ 
-24078,	/* 401 */ 
-12449,	/* 402 */ 
-23933,	/* 403 */ 
-18131,	/* 404 */ 
-6780,	/* 405 */ 
-23909,	/* 406 */ 
-16969,	/* 407 */ 
28014,	/* 408 */ 
-7137,	/* 409 */ 
738,	/* 410 */ 
-26678,	/* 411 */ 
-31343,	/* 412 */ 
-22311,	/* 413 */ 
22575,	/* 414 */ 
24845,	/* 415 */ 
-20512,	/* 416 */ 
32194,	/* 417 */ 
13894,	/* 418 */ 
24335,	/* 419 */ 
-1335,	/* 420 */ 
-262,	/* 421 */ 
-13923,	/* 422 */ 
-28772,	/* 423 */ 
-15566,	/* 424 */ 
-20560,	/* 425 */ 
27331,	/* 426 */ 
-24687,	/* 427 */ 
-31884,	/* 428 */ 
-8540,	/* 429 */ 
13016,	/* 430 */ 
25513,	/* 431 */ 
6144,	/* 432 */ 
-22497,	/* 433 */ 
-12013,	/* 434 */ 
-17471,	/* 435 */ 
-32213,	/* 436 */ 
-6756,	/* 437 */ 
9820,	/* 438 */ 
-27195,	/* 439 */ 
17614,	/* 440 */ 
30779,	/* 441 */ 
14075,	/* 442 */ 
18476,	/* 443 */ 
-17198,	/* 444 */ 
-19939,	/* 445 */ 
-15517,	/* 446 */ 
14009,	/* 447 */ 
31296,	/* 448 */ 
8985,	/* 449 */ 
3009,	/* 450 */ 
22807,	/* 451 */ 
19796,	/* 452 */ 
11029,	/* 453 */ 
11204,	/* 454 */ 
21011,	/* 455 */ 
30829,	/* 456 */ 
-857,	/* 457 */ 
20803,	/* 458 */ 
9277,	/* 459 */ 
-12690,	/* 460 */ 
10545,	/* 461 */ 
-9305,	/* 462 */ 
28714,	/* 463 */ 
-809,	/* 464 */ 
-26803,	/* 465 */ 
11391,	/* 466 */ 
975,	/* 467 */ 
-18245,	/* 468 */ 
14744,	/* 469 */ 
-28293,	/* 470 */ 
30413,	/* 471 */ 
-19158,	/* 472 */ 
-22207,	/* 473 */ 
9057,	/* 474 */ 
-32750,	/* 475 */ 
-10771,	/* 476 */ 
-14738,	/* 477 */ 
-29847,	/* 478 */ 
-26612,	/* 479 */ 
-5898,	/* 480 */ 
20765,	/* 481 */ 
24279,	/* 482 */ 
-31287,	/* 483 */ 
14886,	/* 484 */ 
22804,	/* 485 */ 
14980,	/* 486 */ 
29822,	/* 487 */ 
10245,	/* 488 */ 
15878,	/* 489 */ 
-10160,	/* 490 */ 
25164,	/* 491 */ 
-10011,	/* 492 */ 
-28868,	/* 493 */ 
14312,	/* 494 */ 
30026,	/* 495 */ 
-22488,	/* 496 */ 
-5482,	/* 497 */ 
-26603,	/* 498 */ 
-3280,	/* 499 */ 
24190,	/* 500 */ 
-7103,	/* 501 */ 
-16200,	/* 502 */ 
-9543,	/* 503 */ 
15922,	/* 504 */ 
9883,	/* 505 */ 
28819,	/* 506 */ 
21808,	/* 507 */ 
-1968,	/* 508 */ 
8510,	/* 509 */ 
-28952,	/* 510 */ 
2764,	/* 511 */ 
};

#pragma DATA_SECTION (rtest,".test")

/* format: y(0)Re,y(N/2)Re,y(1)Re,y(1)Im,y(2)Re,y(2)Im,..y(N/2-1)Re,y(N/2-1)Im */

DATA rtest[NX] ={
-225,	-1421,	 /* 0Re, (N/2)Re {Nyquitst} */ 
-151,	-306,	 /* 1 */ 
1230,	-74,	 /* 2 */ 
-168,	30,	 /* 3 */ 
-818,	585,	 /* 4 */ 
-332,	56,	 /* 5 */ 
-410,	-287,	 /* 6 */ 
1198,	-169,	 /* 7 */ 
670,	952,	 /* 8 */ 
-163,	-921,	 /* 9 */ 
681,	1455,	 /* 10 */ 
829,	-87,	 /* 11 */ 
-921,	461,	 /* 12 */ 
-1063,	-887,	 /* 13 */ 
-166,	-35,	 /* 14 */ 
-165,	-1071,	 /* 15 */ 
-443,	-1704,	 /* 16 */ 
184,	348,	 /* 17 */ 
-354,	1111,	 /* 18 */ 
580,	-299,	 /* 19 */ 
-98,	681,	 /* 20 */ 
985,	323,	 /* 21 */ 
708,	378,	 /* 22 */ 
460,	366,	 /* 23 */ 
-123,	244,	 /* 24 */ 
-313,	-463,	 /* 25 */ 
-261,	900,	 /* 26 */ 
544,	-17,	 /* 27 */ 
-430,	1397,	 /* 28 */ 
-293,	-980,	 /* 29 */ 
-913,	4,	 /* 30 */ 
-208,	304,	 /* 31 */ 
-965,	-575,	 /* 32 */ 
717,	-550,	 /* 33 */ 
-734,	0,	 /* 34 */ 
-671,	282,	 /* 35 */ 
85,	-680,	 /* 36 */ 
1352,	64,	 /* 37 */ 
354,	-218,	 /* 38 */ 
-1020,	-499,	 /* 39 */ 
-1297,	716,	 /* 40 */ 
-618,	-449,	 /* 41 */ 
-379,	694,	 /* 42 */ 
97,	758,	 /* 43 */ 
42,	-132,	 /* 44 */ 
1256,	627,	 /* 45 */ 
-757,	712,	 /* 46 */ 
-379,	-952,	 /* 47 */ 
-788,	-997,	 /* 48 */ 
948,	-1070,	 /* 49 */ 
84,	-128,	 /* 50 */ 
-881,	821,	 /* 51 */ 
-142,	-265,	 /* 52 */ 
-945,	-457,	 /* 53 */ 
567,	359,	 /* 54 */ 
-387,	38,	 /* 55 */ 
-365,	-322,	 /* 56 */ 
-101,	-288,	 /* 57 */ 
390,	270,	 /* 58 */ 
403,	29,	 /* 59 */ 
100,	109,	 /* 60 */ 
-891,	-120,	 /* 61 */ 
-132,	-572,	 /* 62 */ 
1300,	-161,	 /* 63 */ 
1366,	-820,	 /* 64 */ 
-62,	-642,	 /* 65 */ 
-356,	180,	 /* 66 */ 
274,	-1080,	 /* 67 */ 
-1271,	451,	 /* 68 */ 
-831,	-766,	 /* 69 */ 
-294,	6,	 /* 70 */ 
647,	-121,	 /* 71 */ 
-1192,	-190,	 /* 72 */ 
307,	48,	 /* 73 */ 
-596,	384,	 /* 74 */ 
-408,	-628,	 /* 75 */ 
98,	1028,	 /* 76 */ 
-799,	80,	 /* 77 */ 
990,	-685,	 /* 78 */ 
483,	476,	 /* 79 */ 
230,	-1052,	 /* 80 */ 
246,	-838,	 /* 81 */ 
1008,	656,	 /* 82 */ 
-167,	-301,	 /* 83 */ 
1379,	-205,	 /* 84 */ 
217,	-57,	 /* 85 */ 
72,	-495,	 /* 86 */ 
-323,	-91,	 /* 87 */ 
-31,	-878,	 /* 88 */ 
1468,	955,	 /* 89 */ 
-68,	577,	 /* 90 */ 
-570,	-903,	 /* 91 */ 
-542,	282,	 /* 92 */ 
-403,	-826,	 /* 93 */ 
796,	-205,	 /* 94 */ 
976,	449,	 /* 95 */ 
-130,	-85,	 /* 96 */ 
-308,	267,	 /* 97 */ 
-460,	79,	 /* 98 */ 
-300,	-62,	 /* 99 */ 
199,	-497,	 /* 100 */ 
-138,	1303,	 /* 101 */ 
259,	522,	 /* 102 */ 
323,	-399,	 /* 103 */ 
203,	692,	 /* 104 */ 
-685,	-459,	 /* 105 */ 
-791,	808,	 /* 106 */ 
62,	-855,	 /* 107 */ 
-1022,	-695,	 /* 108 */ 
-790,	160,	 /* 109 */ 
116,	-646,	 /* 110 */ 
-458,	-323,	 /* 111 */ 
-517,	-569,	 /* 112 */ 
489,	-277,	 /* 113 */ 
119,	-109,	 /* 114 */ 
290,	-325,	 /* 115 */ 
-299,	-347,	 /* 116 */ 
80,	-389,	 /* 117 */ 
-33,	115,	 /* 118 */ 
234,	235,	 /* 119 */ 
123,	-228,	 /* 120 */ 
3,	752,	 /* 121 */ 
90,	101,	 /* 122 */ 
-394,	388,	 /* 123 */ 
522,	-1499,	 /* 124 */ 
29,	-435,	 /* 125 */ 
220,	1557,	 /* 126 */ 
242,	148,	 /* 127 */ 
-829,	-648,	 /* 128 */ 
133,	432,	 /* 129 */ 
-718,	3,	 /* 130 */ 
126,	429,	 /* 131 */ 
-361,	806,	 /* 132 */ 
939,	366,	 /* 133 */ 
809,	-692,	 /* 134 */ 
-372,	-183,	 /* 135 */ 
440,	-562,	 /* 136 */ 
-104,	446,	 /* 137 */ 
156,	781,	 /* 138 */ 
-499,	-226,	 /* 139 */ 
-561,	-218,	 /* 140 */ 
-901,	54,	 /* 141 */ 
-1156,	-469,	 /* 142 */ 
1802,	-20,	 /* 143 */ 
67,	-324,	 /* 144 */ 
26,	-431,	 /* 145 */ 
-323,	-570,	 /* 146 */ 
1128,	-335,	 /* 147 */ 
-329,	-14,	 /* 148 */ 
-956,	-444,	 /* 149 */ 
-464,	510,	 /* 150 */ 
155,	509,	 /* 151 */ 
990,	635,	 /* 152 */ 
-69,	987,	 /* 153 */ 
51,	-457,	 /* 154 */ 
-404,	-70,	 /* 155 */ 
-640,	294,	 /* 156 */ 
108,	-1089,	 /* 157 */ 
-265,	405,	 /* 158 */ 
-554,	-131,	 /* 159 */ 
-367,	-240,	 /* 160 */ 
-259,	-295,	 /* 161 */ 
-78,	-628,	 /* 162 */ 
-763,	-425,	 /* 163 */ 
-63,	558,	 /* 164 */ 
51,	-691,	 /* 165 */ 
608,	-821,	 /* 166 */ 
-746,	-700,	 /* 167 */ 
-282,	978,	 /* 168 */ 
-289,	-570,	 /* 169 */ 
801,	-67,	 /* 170 */ 
-1067,	-671,	 /* 171 */ 
-241,	-526,	 /* 172 */ 
-374,	1496,	 /* 173 */ 
323,	778,	 /* 174 */ 
-227,	931,	 /* 175 */ 
54,	342,	 /* 176 */ 
1077,	-459,	 /* 177 */ 
247,	604,	 /* 178 */ 
561,	-206,	 /* 179 */ 
-476,	1116,	 /* 180 */ 
197,	527,	 /* 181 */ 
-9,	519,	 /* 182 */ 
-311,	153,	 /* 183 */ 
607,	-506,	 /* 184 */ 
77,	-214,	 /* 185 */ 
-80,	154,	 /* 186 */ 
-242,	-80,	 /* 187 */ 
-52,	-946,	 /* 188 */ 
177,	867,	 /* 189 */ 
-464,	71,	 /* 190 */ 
-40,	318,	 /* 191 */ 
147,	-20,	 /* 192 */ 
-432,	838,	 /* 193 */ 
408,	1473,	 /* 194 */ 
-1422,	-1195,	 /* 195 */ 
-1162,	-985,	 /* 196 */ 
20,	458,	 /* 197 */ 
465,	148,	 /* 198 */ 
-444,	-930,	 /* 199 */ 
333,	-544,	 /* 200 */ 
2053,	902,	 /* 201 */ 
-326,	552,	 /* 202 */ 
1064,	850,	 /* 203 */ 
17,	-270,	 /* 204 */ 
34,	712,	 /* 205 */ 
272,	770,	 /* 206 */ 
594,	-844,	 /* 207 */ 
-823,	241,	 /* 208 */ 
-531,	-562,	 /* 209 */ 
826,	-441,	 /* 210 */ 
-337,	291,	 /* 211 */ 
-1208,	1071,	 /* 212 */ 
306,	-848,	 /* 213 */ 
220,	198,	 /* 214 */ 
163,	654,	 /* 215 */ 
-237,	574,	 /* 216 */ 
605,	17,	 /* 217 */ 
-493,	223,	 /* 218 */ 
-331,	-737,	 /* 219 */ 
244,	-357,	 /* 220 */ 
226,	148,	 /* 221 */ 
-150,	-150,	 /* 222 */ 
-60,	344,	 /* 223 */ 
-446,	57,	 /* 224 */ 
-95,	-847,	 /* 225 */ 
473,	85,	 /* 226 */ 
-946,	-87,	 /* 227 */ 
266,	553,	 /* 228 */ 
-448,	367,	 /* 229 */ 
178,	-172,	 /* 230 */ 
-30,	-246,	 /* 231 */ 
-284,	-804,	 /* 232 */ 
-699,	-677,	 /* 233 */ 
-1748,	-108,	 /* 234 */ 
-269,	-281,	 /* 235 */ 
-835,	-612,	 /* 236 */ 
-28,	-80,	 /* 237 */ 
875,	-417,	 /* 238 */ 
-593,	235,	 /* 239 */ 
-705,	231,	 /* 240 */ 
344,	-334,	 /* 241 */ 
466,	-576,	 /* 242 */ 
-822,	459,	 /* 243 */ 
-1101,	615,	 /* 244 */ 
-358,	-37,	 /* 245 */ 
392,	680,	 /* 246 */ 
-203,	531,	 /* 247 */ 
-89,	-758,	 /* 248 */ 
-5,	2,	 /* 249 */ 
-489,	-430,	 /* 250 */ 
-566,	1319,	 /* 251 */ 
424,	480,	 /* 252 */ 
564,	36,	 /* 253 */ 
-441,	-403,	 /* 254 */ 
-153,	-667,	 /* 255 */ 
};

DATA error;

