/* Test for rfft: rand */
#define NX 1024
#define FNAME "t8"
#define MAXERROR 10

#pragma DATA_SECTION (x,".input")

DATA x[NX] ={
-2902,	/* 0 */ 
23792,	/* 1 */ 
23275,	/* 2 */ 
-1819,	/* 3 */ 
18801,	/* 4 */ 
10221,	/* 5 */ 
-32763,	/* 6 */ 
-24165,	/* 7 */ 
-336,	/* 8 */ 
-30253,	/* 9 */ 
-17861,	/* 10 */ 
-11279,	/* 11 */ 
26176,	/* 12 */ 
-12207,	/* 13 */ 
-16273,	/* 14 */ 
-4392,	/* 15 */ 
22436,	/* 16 */ 
-20676,	/* 17 */ 
535,	/* 18 */ 
-3130,	/* 19 */ 
-11430,	/* 20 */ 
-7859,	/* 21 */ 
25325,	/* 22 */ 
17120,	/* 23 */ 
25147,	/* 24 */ 
-2792,	/* 25 */ 
19606,	/* 26 */ 
-23979,	/* 27 */ 
-28485,	/* 28 */ 
-8182,	/* 29 */ 
-8288,	/* 30 */ 
-1048,	/* 31 */ 
30763,	/* 32 */ 
-10350,	/* 33 */ 
-16207,	/* 34 */ 
5562,	/* 35 */ 
1553,	/* 36 */ 
-22056,	/* 37 */ 
-892,	/* 38 */ 
-259,	/* 39 */ 
22489,	/* 40 */ 
20064,	/* 41 */ 
23445,	/* 42 */ 
7192,	/* 43 */ 
4307,	/* 44 */ 
7332,	/* 45 */ 
-26017,	/* 46 */ 
-22391,	/* 47 */ 
-5659,	/* 48 */ 
3958,	/* 49 */ 
-15159,	/* 50 */ 
18627,	/* 51 */ 
-7348,	/* 52 */ 
-30735,	/* 53 */ 
5602,	/* 54 */ 
3837,	/* 55 */ 
-19614,	/* 56 */ 
-27037,	/* 57 */ 
28389,	/* 58 */ 
-15768,	/* 59 */ 
-19386,	/* 60 */ 
-29541,	/* 61 */ 
6956,	/* 62 */ 
3037,	/* 63 */ 
-26485,	/* 64 */ 
8977,	/* 65 */ 
-3739,	/* 66 */ 
-28415,	/* 67 */ 
-8238,	/* 68 */ 
-16442,	/* 69 */ 
27841,	/* 70 */ 
8486,	/* 71 */ 
24790,	/* 72 */ 
9283,	/* 73 */ 
19553,	/* 74 */ 
-4258,	/* 75 */ 
31528,	/* 76 */ 
-26477,	/* 77 */ 
1800,	/* 78 */ 
2991,	/* 79 */ 
-14132,	/* 80 */ 
-8467,	/* 81 */ 
-28526,	/* 82 */ 
2936,	/* 83 */ 
22042,	/* 84 */ 
-23242,	/* 85 */ 
-21526,	/* 86 */ 
-28306,	/* 87 */ 
21232,	/* 88 */ 
-23986,	/* 89 */ 
25214,	/* 90 */ 
965,	/* 91 */ 
30381,	/* 92 */ 
-24869,	/* 93 */ 
-29601,	/* 94 */ 
-7854,	/* 95 */ 
-5715,	/* 96 */ 
-6462,	/* 97 */ 
-5178,	/* 98 */ 
-8064,	/* 99 */ 
26692,	/* 100 */ 
11150,	/* 101 */ 
30264,	/* 102 */ 
-22085,	/* 103 */ 
16293,	/* 104 */ 
-8253,	/* 105 */ 
-2999,	/* 106 */ 
-30238,	/* 107 */ 
4091,	/* 108 */ 
-8368,	/* 109 */ 
19185,	/* 110 */ 
19346,	/* 111 */ 
-7673,	/* 112 */ 
-16200,	/* 113 */ 
-10293,	/* 114 */ 
30654,	/* 115 */ 
-1324,	/* 116 */ 
-8629,	/* 117 */ 
17336,	/* 118 */ 
-8051,	/* 119 */ 
26231,	/* 120 */ 
-20745,	/* 121 */ 
-8630,	/* 122 */ 
27355,	/* 123 */ 
1042,	/* 124 */ 
-26847,	/* 125 */ 
15419,	/* 126 */ 
-32456,	/* 127 */ 
6757,	/* 128 */ 
29938,	/* 129 */ 
-6722,	/* 130 */ 
15173,	/* 131 */ 
12099,	/* 132 */ 
31356,	/* 133 */ 
-19411,	/* 134 */ 
6114,	/* 135 */ 
29590,	/* 136 */ 
-15710,	/* 137 */ 
961,	/* 138 */ 
8933,	/* 139 */ 
-6491,	/* 140 */ 
-878,	/* 141 */ 
16412,	/* 142 */ 
-24496,	/* 143 */ 
-29943,	/* 144 */ 
-8458,	/* 145 */ 
12666,	/* 146 */ 
28559,	/* 147 */ 
-1470,	/* 148 */ 
-24305,	/* 149 */ 
-1060,	/* 150 */ 
29199,	/* 151 */ 
-8667,	/* 152 */ 
-11240,	/* 153 */ 
17881,	/* 154 */ 
-13285,	/* 155 */ 
-21111,	/* 156 */ 
12502,	/* 157 */ 
-15469,	/* 158 */ 
-2770,	/* 159 */ 
22521,	/* 160 */ 
24999,	/* 161 */ 
13107,	/* 162 */ 
16755,	/* 163 */ 
31094,	/* 164 */ 
-6412,	/* 165 */ 
-24163,	/* 166 */ 
14726,	/* 167 */ 
26180,	/* 168 */ 
-21579,	/* 169 */ 
-29946,	/* 170 */ 
-1366,	/* 171 */ 
-26610,	/* 172 */ 
9832,	/* 173 */ 
29637,	/* 174 */ 
-2772,	/* 175 */ 
2416,	/* 176 */ 
-28408,	/* 177 */ 
-402,	/* 178 */ 
-5404,	/* 179 */ 
-13614,	/* 180 */ 
-13784,	/* 181 */ 
16634,	/* 182 */ 
-26422,	/* 183 */ 
-27725,	/* 184 */ 
14476,	/* 185 */ 
17359,	/* 186 */ 
10350,	/* 187 */ 
20340,	/* 188 */ 
-8241,	/* 189 */ 
-12698,	/* 190 */ 
-8473,	/* 191 */ 
13548,	/* 192 */ 
-21732,	/* 193 */ 
20557,	/* 194 */ 
-2214,	/* 195 */ 
14566,	/* 196 */ 
32428,	/* 197 */ 
-9011,	/* 198 */ 
15126,	/* 199 */ 
9807,	/* 200 */ 
11883,	/* 201 */ 
-32266,	/* 202 */ 
10101,	/* 203 */ 
29176,	/* 204 */ 
7422,	/* 205 */ 
18540,	/* 206 */ 
-32559,	/* 207 */ 
19459,	/* 208 */ 
9293,	/* 209 */ 
-21070,	/* 210 */ 
1926,	/* 211 */ 
-18431,	/* 212 */ 
3148,	/* 213 */ 
-28949,	/* 214 */ 
5739,	/* 215 */ 
-5498,	/* 216 */ 
-20548,	/* 217 */ 
-28577,	/* 218 */ 
-27865,	/* 219 */ 
-12449,	/* 220 */ 
29100,	/* 221 */ 
31501,	/* 222 */ 
3611,	/* 223 */ 
32012,	/* 224 */ 
12552,	/* 225 */ 
-16929,	/* 226 */ 
20301,	/* 227 */ 
28473,	/* 228 */ 
-24325,	/* 229 */ 
12242,	/* 230 */ 
-13287,	/* 231 */ 
9647,	/* 232 */ 
-2375,	/* 233 */ 
27705,	/* 234 */ 
-16925,	/* 235 */ 
10494,	/* 236 */ 
-10991,	/* 237 */ 
-1524,	/* 238 */ 
-2047,	/* 239 */ 
13494,	/* 240 */ 
-17041,	/* 241 */ 
14233,	/* 242 */ 
23931,	/* 243 */ 
-5833,	/* 244 */ 
-4929,	/* 245 */ 
29769,	/* 246 */ 
24994,	/* 247 */ 
13013,	/* 248 */ 
-12752,	/* 249 */ 
21580,	/* 250 */ 
30838,	/* 251 */ 
-13100,	/* 252 */ 
32637,	/* 253 */ 
-3883,	/* 254 */ 
-32357,	/* 255 */ 
-13637,	/* 256 */ 
12573,	/* 257 */ 
-469,	/* 258 */ 
-27295,	/* 259 */ 
-19935,	/* 260 */ 
31296,	/* 261 */ 
-8768,	/* 262 */ 
-23628,	/* 263 */ 
-31798,	/* 264 */ 
9216,	/* 265 */ 
15577,	/* 266 */ 
-31012,	/* 267 */ 
-26071,	/* 268 */ 
25774,	/* 269 */ 
17291,	/* 270 */ 
5416,	/* 271 */ 
12151,	/* 272 */ 
30611,	/* 273 */ 
3299,	/* 274 */ 
18164,	/* 275 */ 
7231,	/* 276 */ 
32017,	/* 277 */ 
-29603,	/* 278 */ 
31807,	/* 279 */ 
-19349,	/* 280 */ 
27029,	/* 281 */ 
10848,	/* 282 */ 
-2470,	/* 283 */ 
-29598,	/* 284 */ 
-2593,	/* 285 */ 
19655,	/* 286 */ 
-13799,	/* 287 */ 
12784,	/* 288 */ 
-15775,	/* 289 */ 
13972,	/* 290 */ 
14440,	/* 291 */ 
15286,	/* 292 */ 
8016,	/* 293 */ 
32094,	/* 294 */ 
-22780,	/* 295 */ 
-19442,	/* 296 */ 
20924,	/* 297 */ 
-28936,	/* 298 */ 
2523,	/* 299 */ 
-20305,	/* 300 */ 
6518,	/* 301 */ 
-13614,	/* 302 */ 
-26783,	/* 303 */ 
443,	/* 304 */ 
25171,	/* 305 */ 
7573,	/* 306 */ 
-29725,	/* 307 */ 
29614,	/* 308 */ 
-21689,	/* 309 */ 
21406,	/* 310 */ 
7298,	/* 311 */ 
22758,	/* 312 */ 
-25287,	/* 313 */ 
9778,	/* 314 */ 
-25241,	/* 315 */ 
-1743,	/* 316 */ 
12003,	/* 317 */ 
-24030,	/* 318 */ 
-2354,	/* 319 */ 
-28096,	/* 320 */ 
5322,	/* 321 */ 
4323,	/* 322 */ 
-16038,	/* 323 */ 
-17137,	/* 324 */ 
-31720,	/* 325 */ 
-7553,	/* 326 */ 
16860,	/* 327 */ 
4925,	/* 328 */ 
-6024,	/* 329 */ 
-19941,	/* 330 */ 
797,	/* 331 */ 
13980,	/* 332 */ 
24074,	/* 333 */ 
15845,	/* 334 */ 
32426,	/* 335 */ 
24032,	/* 336 */ 
-930,	/* 337 */ 
26428,	/* 338 */ 
-31434,	/* 339 */ 
8963,	/* 340 */ 
29098,	/* 341 */ 
-30093,	/* 342 */ 
-14045,	/* 343 */ 
11615,	/* 344 */ 
5647,	/* 345 */ 
-28508,	/* 346 */ 
24849,	/* 347 */ 
-793,	/* 348 */ 
25653,	/* 349 */ 
17188,	/* 350 */ 
10177,	/* 351 */ 
30895,	/* 352 */ 
-21551,	/* 353 */ 
-23856,	/* 354 */ 
16723,	/* 355 */ 
-12240,	/* 356 */ 
-2409,	/* 357 */ 
-10522,	/* 358 */ 
-32135,	/* 359 */ 
-10891,	/* 360 */ 
-16591,	/* 361 */ 
32375,	/* 362 */ 
26576,	/* 363 */ 
-9845,	/* 364 */ 
-14540,	/* 365 */ 
-26676,	/* 366 */ 
-17003,	/* 367 */ 
26319,	/* 368 */ 
-11518,	/* 369 */ 
4764,	/* 370 */ 
-20638,	/* 371 */ 
15590,	/* 372 */ 
-25442,	/* 373 */ 
-7618,	/* 374 */ 
23745,	/* 375 */ 
23399,	/* 376 */ 
20927,	/* 377 */ 
-16665,	/* 378 */ 
26053,	/* 379 */ 
6823,	/* 380 */ 
-23609,	/* 381 */ 
-22195,	/* 382 */ 
25107,	/* 383 */ 
31361,	/* 384 */ 
6639,	/* 385 */ 
-9056,	/* 386 */ 
-17601,	/* 387 */ 
-3295,	/* 388 */ 
9377,	/* 389 */ 
-16696,	/* 390 */ 
-2097,	/* 391 */ 
-169,	/* 392 */ 
-27853,	/* 393 */ 
17469,	/* 394 */ 
-29792,	/* 395 */ 
-21945,	/* 396 */ 
18164,	/* 397 */ 
-19112,	/* 398 */ 
-16266,	/* 399 */ 
-6781,	/* 400 */ 
-1266,	/* 401 */ 
608,	/* 402 */ 
8177,	/* 403 */ 
8227,	/* 404 */ 
32185,	/* 405 */ 
-9226,	/* 406 */ 
-14680,	/* 407 */ 
11671,	/* 408 */ 
574,	/* 409 */ 
-14623,	/* 410 */ 
5166,	/* 411 */ 
21155,	/* 412 */ 
28928,	/* 413 */ 
-3649,	/* 414 */ 
-5031,	/* 415 */ 
32515,	/* 416 */ 
7478,	/* 417 */ 
29099,	/* 418 */ 
27003,	/* 419 */ 
20640,	/* 420 */ 
12426,	/* 421 */ 
-12539,	/* 422 */ 
3813,	/* 423 */ 
8961,	/* 424 */ 
17632,	/* 425 */ 
-29225,	/* 426 */ 
-25240,	/* 427 */ 
22672,	/* 428 */ 
-21469,	/* 429 */ 
-30342,	/* 430 */ 
-12284,	/* 431 */ 
20791,	/* 432 */ 
-17390,	/* 433 */ 
5729,	/* 434 */ 
27796,	/* 435 */ 
-11137,	/* 436 */ 
-19296,	/* 437 */ 
-8881,	/* 438 */ 
31173,	/* 439 */ 
14212,	/* 440 */ 
9391,	/* 441 */ 
18516,	/* 442 */ 
-2197,	/* 443 */ 
-17544,	/* 444 */ 
-11935,	/* 445 */ 
18924,	/* 446 */ 
8809,	/* 447 */ 
10470,	/* 448 */ 
2462,	/* 449 */ 
27471,	/* 450 */ 
18381,	/* 451 */ 
-11356,	/* 452 */ 
15645,	/* 453 */ 
-4081,	/* 454 */ 
6015,	/* 455 */ 
-25261,	/* 456 */ 
-11850,	/* 457 */ 
7984,	/* 458 */ 
25854,	/* 459 */ 
30378,	/* 460 */ 
-31450,	/* 461 */ 
-25514,	/* 462 */ 
-6356,	/* 463 */ 
-26396,	/* 464 */ 
-13562,	/* 465 */ 
11710,	/* 466 */ 
31440,	/* 467 */ 
-6591,	/* 468 */ 
21027,	/* 469 */ 
-24140,	/* 470 */ 
22600,	/* 471 */ 
-17515,	/* 472 */ 
-28365,	/* 473 */ 
-11045,	/* 474 */ 
4930,	/* 475 */ 
-23800,	/* 476 */ 
24101,	/* 477 */ 
-11189,	/* 478 */ 
-787,	/* 479 */ 
-4487,	/* 480 */ 
-15692,	/* 481 */ 
31650,	/* 482 */ 
30516,	/* 483 */ 
29391,	/* 484 */ 
-3164,	/* 485 */ 
-11030,	/* 486 */ 
-32257,	/* 487 */ 
-21898,	/* 488 */ 
21504,	/* 489 */ 
9396,	/* 490 */ 
-11647,	/* 491 */ 
-31037,	/* 492 */ 
-9473,	/* 493 */ 
15981,	/* 494 */ 
-13194,	/* 495 */ 
-20890,	/* 496 */ 
-5558,	/* 497 */ 
24071,	/* 498 */ 
8187,	/* 499 */ 
-29148,	/* 500 */ 
-6285,	/* 501 */ 
-12978,	/* 502 */ 
-22784,	/* 503 */ 
-12506,	/* 504 */ 
-32552,	/* 505 */ 
-4102,	/* 506 */ 
11560,	/* 507 */ 
21160,	/* 508 */ 
16765,	/* 509 */ 
-22108,	/* 510 */ 
3410,	/* 511 */ 
1644,	/* 512 */ 
27480,	/* 513 */ 
-3807,	/* 514 */ 
-29829,	/* 515 */ 
30443,	/* 516 */ 
-31883,	/* 517 */ 
3409,	/* 518 */ 
28459,	/* 519 */ 
26120,	/* 520 */ 
7731,	/* 521 */ 
13100,	/* 522 */ 
28773,	/* 523 */ 
-3140,	/* 524 */ 
-21188,	/* 525 */ 
7651,	/* 526 */ 
1204,	/* 527 */ 
-8880,	/* 528 */ 
17909,	/* 529 */ 
21511,	/* 530 */ 
-11901,	/* 531 */ 
6289,	/* 532 */ 
18467,	/* 533 */ 
-30564,	/* 534 */ 
23392,	/* 535 */ 
11966,	/* 536 */ 
19780,	/* 537 */ 
27371,	/* 538 */ 
-7333,	/* 539 */ 
-1837,	/* 540 */ 
-26995,	/* 541 */ 
27856,	/* 542 */ 
11695,	/* 543 */ 
9241,	/* 544 */ 
32496,	/* 545 */ 
-30,	/* 546 */ 
-4584,	/* 547 */ 
21570,	/* 548 */ 
-25118,	/* 549 */ 
6466,	/* 550 */ 
-18269,	/* 551 */ 
-6640,	/* 552 */ 
-13031,	/* 553 */ 
8751,	/* 554 */ 
29159,	/* 555 */ 
-32381,	/* 556 */ 
20746,	/* 557 */ 
12508,	/* 558 */ 
31518,	/* 559 */ 
-28195,	/* 560 */ 
-29819,	/* 561 */ 
15724,	/* 562 */ 
20911,	/* 563 */ 
-15672,	/* 564 */ 
13368,	/* 565 */ 
-13337,	/* 566 */ 
-27373,	/* 567 */ 
24598,	/* 568 */ 
-27690,	/* 569 */ 
15791,	/* 570 */ 
-24569,	/* 571 */ 
-3689,	/* 572 */ 
6060,	/* 573 */ 
8934,	/* 574 */ 
2145,	/* 575 */ 
-19088,	/* 576 */ 
11384,	/* 577 */ 
-16913,	/* 578 */ 
14451,	/* 579 */ 
-6556,	/* 580 */ 
-6944,	/* 581 */ 
-5800,	/* 582 */ 
-22953,	/* 583 */ 
24785,	/* 584 */ 
-31340,	/* 585 */ 
27773,	/* 586 */ 
8690,	/* 587 */ 
-28380,	/* 588 */ 
8693,	/* 589 */ 
16627,	/* 590 */ 
17670,	/* 591 */ 
20185,	/* 592 */ 
2839,	/* 593 */ 
-978,	/* 594 */ 
-3852,	/* 595 */ 
8289,	/* 596 */ 
-27668,	/* 597 */ 
2887,	/* 598 */ 
-19063,	/* 599 */ 
-15072,	/* 600 */ 
-13651,	/* 601 */ 
21114,	/* 602 */ 
-5800,	/* 603 */ 
1766,	/* 604 */ 
27536,	/* 605 */ 
-7921,	/* 606 */ 
9101,	/* 607 */ 
-21380,	/* 608 */ 
18728,	/* 609 */ 
-8806,	/* 610 */ 
18147,	/* 611 */ 
-10345,	/* 612 */ 
17966,	/* 613 */ 
-23078,	/* 614 */ 
-23051,	/* 615 */ 
9111,	/* 616 */ 
-26647,	/* 617 */ 
28098,	/* 618 */ 
-975,	/* 619 */ 
-22068,	/* 620 */ 
-14657,	/* 621 */ 
-24183,	/* 622 */ 
-31244,	/* 623 */ 
-17608,	/* 624 */ 
22624,	/* 625 */ 
14832,	/* 626 */ 
12757,	/* 627 */ 
-7660,	/* 628 */ 
-1321,	/* 629 */ 
30607,	/* 630 */ 
18579,	/* 631 */ 
-5915,	/* 632 */ 
29970,	/* 633 */ 
-19857,	/* 634 */ 
1922,	/* 635 */ 
274,	/* 636 */ 
-1088,	/* 637 */ 
-8020,	/* 638 */ 
1292,	/* 639 */ 
20692,	/* 640 */ 
-19094,	/* 641 */ 
-7288,	/* 642 */ 
-29742,	/* 643 */ 
-12792,	/* 644 */ 
20565,	/* 645 */ 
11932,	/* 646 */ 
25060,	/* 647 */ 
-27405,	/* 648 */ 
-340,	/* 649 */ 
-4566,	/* 650 */ 
-10128,	/* 651 */ 
27106,	/* 652 */ 
-22269,	/* 653 */ 
-7348,	/* 654 */ 
30616,	/* 655 */ 
-28393,	/* 656 */ 
-12010,	/* 657 */ 
-24461,	/* 658 */ 
-25177,	/* 659 */ 
-21995,	/* 660 */ 
-26609,	/* 661 */ 
2105,	/* 662 */ 
17195,	/* 663 */ 
-5407,	/* 664 */ 
21987,	/* 665 */ 
19968,	/* 666 */ 
-32164,	/* 667 */ 
9482,	/* 668 */ 
-25403,	/* 669 */ 
-18630,	/* 670 */ 
26820,	/* 671 */ 
-23285,	/* 672 */ 
-19169,	/* 673 */ 
22977,	/* 674 */ 
13964,	/* 675 */ 
-27495,	/* 676 */ 
20884,	/* 677 */ 
-9898,	/* 678 */ 
-22114,	/* 679 */ 
2604,	/* 680 */ 
27740,	/* 681 */ 
-4121,	/* 682 */ 
2629,	/* 683 */ 
12997,	/* 684 */ 
-32631,	/* 685 */ 
22057,	/* 686 */ 
25518,	/* 687 */ 
-31471,	/* 688 */ 
-26316,	/* 689 */ 
-8247,	/* 690 */ 
30633,	/* 691 */ 
7836,	/* 692 */ 
11142,	/* 693 */ 
-2873,	/* 694 */ 
22151,	/* 695 */ 
21172,	/* 696 */ 
2759,	/* 697 */ 
-26711,	/* 698 */ 
-13416,	/* 699 */ 
6699,	/* 700 */ 
-20784,	/* 701 */ 
15279,	/* 702 */ 
3203,	/* 703 */ 
-22532,	/* 704 */ 
27854,	/* 705 */ 
-19518,	/* 706 */ 
-32212,	/* 707 */ 
12392,	/* 708 */ 
-6490,	/* 709 */ 
-7891,	/* 710 */ 
26420,	/* 711 */ 
29052,	/* 712 */ 
-1706,	/* 713 */ 
-31601,	/* 714 */ 
20966,	/* 715 */ 
-29005,	/* 716 */ 
-26859,	/* 717 */ 
12886,	/* 718 */ 
-23123,	/* 719 */ 
-28992,	/* 720 */ 
-28613,	/* 721 */ 
14601,	/* 722 */ 
-30556,	/* 723 */ 
12825,	/* 724 */ 
-18272,	/* 725 */ 
8216,	/* 726 */ 
871,	/* 727 */ 
4961,	/* 728 */ 
-13942,	/* 729 */ 
25732,	/* 730 */ 
-26698,	/* 731 */ 
-13599,	/* 732 */ 
21093,	/* 733 */ 
32372,	/* 734 */ 
-28321,	/* 735 */ 
31001,	/* 736 */ 
27705,	/* 737 */ 
30060,	/* 738 */ 
4139,	/* 739 */ 
29522,	/* 740 */ 
-11912,	/* 741 */ 
-15341,	/* 742 */ 
-28762,	/* 743 */ 
-10959,	/* 744 */ 
-13603,	/* 745 */ 
-6391,	/* 746 */ 
-30530,	/* 747 */ 
-13928,	/* 748 */ 
-18374,	/* 749 */ 
4320,	/* 750 */ 
24251,	/* 751 */ 
-16056,	/* 752 */ 
6016,	/* 753 */ 
1487,	/* 754 */ 
-24302,	/* 755 */ 
-32518,	/* 756 */ 
-11415,	/* 757 */ 
-9125,	/* 758 */ 
32373,	/* 759 */ 
28830,	/* 760 */ 
-4316,	/* 761 */ 
28538,	/* 762 */ 
-208,	/* 763 */ 
30869,	/* 764 */ 
29991,	/* 765 */ 
14464,	/* 766 */ 
9695,	/* 767 */ 
23760,	/* 768 */ 
-30740,	/* 769 */ 
-8789,	/* 770 */ 
-26617,	/* 771 */ 
-10836,	/* 772 */ 
-32285,	/* 773 */ 
20676,	/* 774 */ 
-31126,	/* 775 */ 
-4967,	/* 776 */ 
-30550,	/* 777 */ 
11579,	/* 778 */ 
-11274,	/* 779 */ 
3936,	/* 780 */ 
-4928,	/* 781 */ 
-22929,	/* 782 */ 
-28548,	/* 783 */ 
7630,	/* 784 */ 
8453,	/* 785 */ 
-21190,	/* 786 */ 
-6035,	/* 787 */ 
13508,	/* 788 */ 
-4601,	/* 789 */ 
-18943,	/* 790 */ 
5962,	/* 791 */ 
22096,	/* 792 */ 
25444,	/* 793 */ 
25268,	/* 794 */ 
30334,	/* 795 */ 
17668,	/* 796 */ 
-8654,	/* 797 */ 
-28300,	/* 798 */ 
-25629,	/* 799 */ 
28624,	/* 800 */ 
724,	/* 801 */ 
-18920,	/* 802 */ 
-5170,	/* 803 */ 
21594,	/* 804 */ 
-23429,	/* 805 */ 
-11689,	/* 806 */ 
20832,	/* 807 */ 
-13540,	/* 808 */ 
-27526,	/* 809 */ 
28066,	/* 810 */ 
-21837,	/* 811 */ 
-7420,	/* 812 */ 
-917,	/* 813 */ 
20371,	/* 814 */ 
-6179,	/* 815 */ 
19332,	/* 816 */ 
-31495,	/* 817 */ 
29924,	/* 818 */ 
23257,	/* 819 */ 
31867,	/* 820 */ 
-16337,	/* 821 */ 
-1146,	/* 822 */ 
-11494,	/* 823 */ 
-29004,	/* 824 */ 
-13698,	/* 825 */ 
11538,	/* 826 */ 
29629,	/* 827 */ 
-30126,	/* 828 */ 
21075,	/* 829 */ 
-18112,	/* 830 */ 
32744,	/* 831 */ 
-15693,	/* 832 */ 
-17675,	/* 833 */ 
1644,	/* 834 */ 
3975,	/* 835 */ 
21364,	/* 836 */ 
-13863,	/* 837 */ 
-16205,	/* 838 */ 
-17022,	/* 839 */ 
3374,	/* 840 */ 
-18654,	/* 841 */ 
10844,	/* 842 */ 
-12526,	/* 843 */ 
-1981,	/* 844 */ 
380,	/* 845 */ 
12344,	/* 846 */ 
-20127,	/* 847 */ 
-14839,	/* 848 */ 
27936,	/* 849 */ 
-17383,	/* 850 */ 
-24379,	/* 851 */ 
-5727,	/* 852 */ 
8828,	/* 853 */ 
-20869,	/* 854 */ 
-6342,	/* 855 */ 
12369,	/* 856 */ 
-11410,	/* 857 */ 
27737,	/* 858 */ 
16849,	/* 859 */ 
-6481,	/* 860 */ 
-19914,	/* 861 */ 
-6535,	/* 862 */ 
-22643,	/* 863 */ 
-28534,	/* 864 */ 
-24879,	/* 865 */ 
-30842,	/* 866 */ 
23930,	/* 867 */ 
-5623,	/* 868 */ 
19130,	/* 869 */ 
20733,	/* 870 */ 
-6860,	/* 871 */ 
21359,	/* 872 */ 
-10641,	/* 873 */ 
-19833,	/* 874 */ 
659,	/* 875 */ 
-19011,	/* 876 */ 
5241,	/* 877 */ 
31402,	/* 878 */ 
-2155,	/* 879 */ 
19797,	/* 880 */ 
-4394,	/* 881 */ 
-16961,	/* 882 */ 
8821,	/* 883 */ 
-8704,	/* 884 */ 
-4492,	/* 885 */ 
-12981,	/* 886 */ 
-4445,	/* 887 */ 
12484,	/* 888 */ 
805,	/* 889 */ 
32199,	/* 890 */ 
-20703,	/* 891 */ 
3864,	/* 892 */ 
-849,	/* 893 */ 
-6718,	/* 894 */ 
-469,	/* 895 */ 
30723,	/* 896 */ 
21430,	/* 897 */ 
-24352,	/* 898 */ 
22428,	/* 899 */ 
18969,	/* 900 */ 
-10169,	/* 901 */ 
15628,	/* 902 */ 
-28866,	/* 903 */ 
3843,	/* 904 */ 
18526,	/* 905 */ 
-23541,	/* 906 */ 
3777,	/* 907 */ 
-19302,	/* 908 */ 
23622,	/* 909 */ 
-15901,	/* 910 */ 
-14572,	/* 911 */ 
-13882,	/* 912 */ 
15384,	/* 913 */ 
-196,	/* 914 */ 
-29183,	/* 915 */ 
-20230,	/* 916 */ 
14715,	/* 917 */ 
31038,	/* 918 */ 
13399,	/* 919 */ 
19758,	/* 920 */ 
-19250,	/* 921 */ 
17867,	/* 922 */ 
24422,	/* 923 */ 
20143,	/* 924 */ 
16816,	/* 925 */ 
26514,	/* 926 */ 
-5177,	/* 927 */ 
10379,	/* 928 */ 
-32680,	/* 929 */ 
31585,	/* 930 */ 
-5746,	/* 931 */ 
-9987,	/* 932 */ 
11020,	/* 933 */ 
-3691,	/* 934 */ 
22271,	/* 935 */ 
1934,	/* 936 */ 
-15915,	/* 937 */ 
-22523,	/* 938 */ 
3788,	/* 939 */ 
30228,	/* 940 */ 
29571,	/* 941 */ 
15390,	/* 942 */ 
-18181,	/* 943 */ 
-221,	/* 944 */ 
-32305,	/* 945 */ 
-12045,	/* 946 */ 
15623,	/* 947 */ 
19025,	/* 948 */ 
-6535,	/* 949 */ 
-6561,	/* 950 */ 
-16272,	/* 951 */ 
-26742,	/* 952 */ 
6697,	/* 953 */ 
21785,	/* 954 */ 
-13533,	/* 955 */ 
-2259,	/* 956 */ 
-29782,	/* 957 */ 
-27148,	/* 958 */ 
861,	/* 959 */ 
14116,	/* 960 */ 
-30443,	/* 961 */ 
31426,	/* 962 */ 
-168,	/* 963 */ 
13154,	/* 964 */ 
19863,	/* 965 */ 
1092,	/* 966 */ 
176,	/* 967 */ 
16692,	/* 968 */ 
-17162,	/* 969 */ 
29034,	/* 970 */ 
-26958,	/* 971 */ 
2818,	/* 972 */ 
26437,	/* 973 */ 
23677,	/* 974 */ 
8615,	/* 975 */ 
-15573,	/* 976 */ 
-7928,	/* 977 */ 
-10661,	/* 978 */ 
-12150,	/* 979 */ 
29298,	/* 980 */ 
2304,	/* 981 */ 
13234,	/* 982 */ 
24576,	/* 983 */ 
31863,	/* 984 */ 
25248,	/* 985 */ 
-6236,	/* 986 */ 
8331,	/* 987 */ 
-7507,	/* 988 */ 
22795,	/* 989 */ 
1759,	/* 990 */ 
20143,	/* 991 */ 
-6980,	/* 992 */ 
30257,	/* 993 */ 
-30791,	/* 994 */ 
29732,	/* 995 */ 
14048,	/* 996 */ 
9603,	/* 997 */ 
-3496,	/* 998 */ 
-21322,	/* 999 */ 
21968,	/* 1000 */ 
30804,	/* 1001 */ 
-23920,	/* 1002 */ 
-16318,	/* 1003 */ 
26867,	/* 1004 */ 
11563,	/* 1005 */ 
8070,	/* 1006 */ 
800,	/* 1007 */ 
-32537,	/* 1008 */ 
-17897,	/* 1009 */ 
31353,	/* 1010 */ 
23672,	/* 1011 */ 
-31823,	/* 1012 */ 
-933,	/* 1013 */ 
-5479,	/* 1014 */ 
17883,	/* 1015 */ 
-777,	/* 1016 */ 
1478,	/* 1017 */ 
18482,	/* 1018 */ 
5978,	/* 1019 */ 
-24483,	/* 1020 */ 
-25575,	/* 1021 */ 
10675,	/* 1022 */ 
32574,	/* 1023 */ 
};

#pragma DATA_SECTION (rtest,".test")

/* format: y(0)Re,y(N/2)Re,y(1)Re,y(1)Im,y(2)Re,y(2)Im,..y(N/2-1)Re,y(N/2-1)Im */

DATA rtest[NX] ={
140,	1274,	 /* 0Re, (N/2)Re {Nyquitst} */ 
150,	-500,	 /* 1 */ 
277,	402,	 /* 2 */ 
-155,	518,	 /* 3 */ 
215,	473,	 /* 4 */ 
37,	466,	 /* 5 */ 
-234,	69,	 /* 6 */ 
149,	508,	 /* 7 */ 
282,	-267,	 /* 8 */ 
319,	292,	 /* 9 */ 
80,	-208,	 /* 10 */ 
-391,	702,	 /* 11 */ 
-102,	-188,	 /* 12 */ 
-560,	243,	 /* 13 */ 
-313,	-133,	 /* 14 */ 
220,	52,	 /* 15 */ 
-474,	-68,	 /* 16 */ 
-407,	199,	 /* 17 */ 
36,	-754,	 /* 18 */ 
-36,	-52,	 /* 19 */ 
-425,	-138,	 /* 20 */ 
626,	46,	 /* 21 */ 
354,	-33,	 /* 22 */ 
-301,	-23,	 /* 23 */ 
177,	836,	 /* 24 */ 
315,	593,	 /* 25 */ 
-18,	-98,	 /* 26 */ 
507,	39,	 /* 27 */ 
-196,	-631,	 /* 28 */ 
-286,	959,	 /* 29 */ 
624,	-582,	 /* 30 */ 
223,	-501,	 /* 31 */ 
937,	470,	 /* 32 */ 
-509,	-145,	 /* 33 */ 
-447,	-591,	 /* 34 */ 
-49,	-75,	 /* 35 */ 
115,	1152,	 /* 36 */ 
-147,	492,	 /* 37 */ 
-343,	-709,	 /* 38 */ 
328,	77,	 /* 39 */ 
682,	878,	 /* 40 */ 
-34,	377,	 /* 41 */ 
374,	-142,	 /* 42 */ 
-56,	366,	 /* 43 */ 
19,	460,	 /* 44 */ 
-172,	322,	 /* 45 */ 
477,	-894,	 /* 46 */ 
-17,	-713,	 /* 47 */ 
-600,	87,	 /* 48 */ 
1202,	-51,	 /* 49 */ 
437,	112,	 /* 50 */ 
-205,	34,	 /* 51 */ 
363,	164,	 /* 52 */ 
336,	185,	 /* 53 */ 
331,	-310,	 /* 54 */ 
489,	559,	 /* 55 */ 
184,	-242,	 /* 56 */ 
43,	-491,	 /* 57 */ 
-404,	137,	 /* 58 */ 
683,	-449,	 /* 59 */ 
-97,	111,	 /* 60 */ 
-172,	-122,	 /* 61 */ 
-6,	-432,	 /* 62 */ 
-51,	383,	 /* 63 */ 
-86,	-212,	 /* 64 */ 
-863,	-338,	 /* 65 */ 
-154,	58,	 /* 66 */ 
-439,	233,	 /* 67 */ 
763,	57,	 /* 68 */ 
-154,	461,	 /* 69 */ 
525,	-163,	 /* 70 */ 
743,	-916,	 /* 71 */ 
-223,	314,	 /* 72 */ 
-55,	-10,	 /* 73 */ 
322,	-535,	 /* 74 */ 
270,	36,	 /* 75 */ 
-18,	1132,	 /* 76 */ 
-528,	-730,	 /* 77 */ 
-8,	-295,	 /* 78 */ 
692,	-542,	 /* 79 */ 
69,	408,	 /* 80 */ 
-38,	385,	 /* 81 */ 
345,	101,	 /* 82 */ 
690,	-581,	 /* 83 */ 
-505,	-237,	 /* 84 */ 
156,	-896,	 /* 85 */ 
23,	694,	 /* 86 */ 
22,	243,	 /* 87 */ 
111,	56,	 /* 88 */ 
-170,	-420,	 /* 89 */ 
-8,	73,	 /* 90 */ 
-133,	-40,	 /* 91 */ 
-82,	-360,	 /* 92 */ 
375,	-65,	 /* 93 */ 
453,	122,	 /* 94 */ 
-408,	-372,	 /* 95 */ 
48,	-708,	 /* 96 */ 
-137,	-632,	 /* 97 */ 
614,	-191,	 /* 98 */ 
762,	-331,	 /* 99 */ 
675,	447,	 /* 100 */ 
294,	-94,	 /* 101 */ 
345,	-521,	 /* 102 */ 
15,	-566,	 /* 103 */ 
-365,	-354,	 /* 104 */ 
621,	-722,	 /* 105 */ 
-234,	139,	 /* 106 */ 
-533,	-263,	 /* 107 */ 
-846,	362,	 /* 108 */ 
-123,	712,	 /* 109 */ 
-614,	-368,	 /* 110 */ 
334,	-541,	 /* 111 */ 
-25,	263,	 /* 112 */ 
-655,	-169,	 /* 113 */ 
551,	69,	 /* 114 */ 
-480,	-183,	 /* 115 */ 
34,	58,	 /* 116 */ 
-646,	-207,	 /* 117 */ 
-448,	222,	 /* 118 */ 
221,	-307,	 /* 119 */ 
544,	157,	 /* 120 */ 
234,	89,	 /* 121 */ 
31,	617,	 /* 122 */ 
90,	-258,	 /* 123 */ 
469,	-53,	 /* 124 */ 
1154,	500,	 /* 125 */ 
-175,	-182,	 /* 126 */ 
3,	301,	 /* 127 */ 
-22,	-438,	 /* 128 */ 
-213,	460,	 /* 129 */ 
-48,	-698,	 /* 130 */ 
96,	224,	 /* 131 */ 
-197,	-437,	 /* 132 */ 
-121,	-258,	 /* 133 */ 
450,	-564,	 /* 134 */ 
93,	-103,	 /* 135 */ 
267,	-436,	 /* 136 */ 
-469,	603,	 /* 137 */ 
-24,	-172,	 /* 138 */ 
-59,	352,	 /* 139 */ 
-371,	-157,	 /* 140 */ 
14,	135,	 /* 141 */ 
-18,	-776,	 /* 142 */ 
-348,	-366,	 /* 143 */ 
567,	7,	 /* 144 */ 
-547,	-649,	 /* 145 */ 
486,	83,	 /* 146 */ 
1668,	168,	 /* 147 */ 
-441,	11,	 /* 148 */ 
226,	63,	 /* 149 */ 
-335,	-416,	 /* 150 */ 
34,	5,	 /* 151 */ 
-133,	1024,	 /* 152 */ 
-593,	-273,	 /* 153 */ 
-3,	-202,	 /* 154 */ 
-292,	147,	 /* 155 */ 
-261,	199,	 /* 156 */ 
-57,	601,	 /* 157 */ 
377,	135,	 /* 158 */ 
558,	-438,	 /* 159 */ 
403,	220,	 /* 160 */ 
624,	-269,	 /* 161 */ 
103,	27,	 /* 162 */ 
-42,	316,	 /* 163 */ 
-146,	246,	 /* 164 */ 
345,	691,	 /* 165 */ 
120,	111,	 /* 166 */ 
131,	524,	 /* 167 */ 
-428,	-164,	 /* 168 */ 
-174,	557,	 /* 169 */ 
325,	-305,	 /* 170 */ 
86,	575,	 /* 171 */ 
149,	-1055,	 /* 172 */ 
-369,	-156,	 /* 173 */ 
425,	450,	 /* 174 */ 
824,	313,	 /* 175 */ 
714,	-180,	 /* 176 */ 
-533,	498,	 /* 177 */ 
-117,	327,	 /* 178 */ 
-428,	-344,	 /* 179 */ 
-289,	612,	 /* 180 */ 
222,	238,	 /* 181 */ 
306,	-547,	 /* 182 */ 
-223,	79,	 /* 183 */ 
607,	-266,	 /* 184 */ 
132,	311,	 /* 185 */ 
-250,	312,	 /* 186 */ 
212,	286,	 /* 187 */ 
-461,	690,	 /* 188 */ 
181,	34,	 /* 189 */ 
-169,	-18,	 /* 190 */ 
127,	31,	 /* 191 */ 
-541,	465,	 /* 192 */ 
-399,	106,	 /* 193 */ 
-51,	292,	 /* 194 */ 
-93,	-114,	 /* 195 */ 
1,	-527,	 /* 196 */ 
125,	-89,	 /* 197 */ 
-201,	86,	 /* 198 */ 
-1360,	-168,	 /* 199 */ 
259,	-399,	 /* 200 */ 
25,	21,	 /* 201 */ 
-571,	-398,	 /* 202 */ 
609,	272,	 /* 203 */ 
187,	-781,	 /* 204 */ 
345,	-402,	 /* 205 */ 
358,	-111,	 /* 206 */ 
36,	775,	 /* 207 */ 
99,	-932,	 /* 208 */ 
10,	114,	 /* 209 */ 
-172,	-89,	 /* 210 */ 
185,	34,	 /* 211 */ 
-15,	-252,	 /* 212 */ 
-100,	118,	 /* 213 */ 
-153,	13,	 /* 214 */ 
-74,	22,	 /* 215 */ 
608,	-319,	 /* 216 */ 
-495,	-205,	 /* 217 */ 
41,	183,	 /* 218 */ 
-102,	280,	 /* 219 */ 
124,	-222,	 /* 220 */ 
-12,	-46,	 /* 221 */ 
543,	443,	 /* 222 */ 
250,	828,	 /* 223 */ 
1024,	105,	 /* 224 */ 
250,	684,	 /* 225 */ 
-341,	-64,	 /* 226 */ 
-488,	-258,	 /* 227 */ 
-23,	256,	 /* 228 */ 
87,	534,	 /* 229 */ 
198,	660,	 /* 230 */ 
567,	674,	 /* 231 */ 
1055,	51,	 /* 232 */ 
-189,	-704,	 /* 233 */ 
352,	911,	 /* 234 */ 
-85,	247,	 /* 235 */ 
-516,	424,	 /* 236 */ 
-583,	-313,	 /* 237 */ 
-651,	-63,	 /* 238 */ 
-43,	-285,	 /* 239 */ 
335,	656,	 /* 240 */ 
-283,	221,	 /* 241 */ 
-292,	477,	 /* 242 */ 
273,	390,	 /* 243 */ 
-94,	619,	 /* 244 */ 
-482,	428,	 /* 245 */ 
199,	-393,	 /* 246 */ 
-36,	141,	 /* 247 */ 
-28,	-446,	 /* 248 */ 
-393,	-317,	 /* 249 */ 
213,	624,	 /* 250 */ 
341,	-287,	 /* 251 */ 
-406,	-297,	 /* 252 */ 
-475,	386,	 /* 253 */ 
-389,	20,	 /* 254 */ 
495,	271,	 /* 255 */ 
129,	367,	 /* 256 */ 
45,	-338,	 /* 257 */ 
178,	851,	 /* 258 */ 
759,	-779,	 /* 259 */ 
-452,	-64,	 /* 260 */ 
367,	544,	 /* 261 */ 
-54,	7,	 /* 262 */ 
-424,	-258,	 /* 263 */ 
202,	-369,	 /* 264 */ 
627,	1072,	 /* 265 */ 
645,	-359,	 /* 266 */ 
-625,	-34,	 /* 267 */ 
89,	-430,	 /* 268 */ 
-252,	173,	 /* 269 */ 
554,	420,	 /* 270 */ 
-438,	-525,	 /* 271 */ 
-809,	-109,	 /* 272 */ 
-590,	155,	 /* 273 */ 
-12,	-336,	 /* 274 */ 
362,	592,	 /* 275 */ 
-575,	-148,	 /* 276 */ 
-958,	-67,	 /* 277 */ 
574,	-155,	 /* 278 */ 
42,	-164,	 /* 279 */ 
232,	-33,	 /* 280 */ 
-154,	-576,	 /* 281 */ 
735,	93,	 /* 282 */ 
136,	-934,	 /* 283 */ 
-747,	-247,	 /* 284 */ 
-364,	-52,	 /* 285 */ 
891,	-129,	 /* 286 */ 
-519,	-657,	 /* 287 */ 
-57,	-637,	 /* 288 */ 
-562,	160,	 /* 289 */ 
-1067,	-431,	 /* 290 */ 
-576,	172,	 /* 291 */ 
536,	-298,	 /* 292 */ 
-140,	677,	 /* 293 */ 
374,	-494,	 /* 294 */ 
-208,	-963,	 /* 295 */ 
56,	121,	 /* 296 */ 
-497,	-273,	 /* 297 */ 
-146,	-165,	 /* 298 */ 
332,	298,	 /* 299 */ 
-11,	-46,	 /* 300 */ 
-111,	-630,	 /* 301 */ 
-326,	-479,	 /* 302 */ 
163,	-337,	 /* 303 */ 
228,	-450,	 /* 304 */ 
-281,	419,	 /* 305 */ 
420,	129,	 /* 306 */ 
-522,	142,	 /* 307 */ 
-377,	416,	 /* 308 */ 
-813,	619,	 /* 309 */ 
-200,	-138,	 /* 310 */ 
472,	668,	 /* 311 */ 
12,	334,	 /* 312 */ 
-421,	249,	 /* 313 */ 
-453,	-53,	 /* 314 */ 
190,	464,	 /* 315 */ 
778,	-258,	 /* 316 */ 
-106,	657,	 /* 317 */ 
-263,	123,	 /* 318 */ 
341,	96,	 /* 319 */ 
12,	-763,	 /* 320 */ 
305,	-286,	 /* 321 */ 
-283,	759,	 /* 322 */ 
-141,	786,	 /* 323 */ 
-447,	-595,	 /* 324 */ 
1090,	-124,	 /* 325 */ 
-1005,	229,	 /* 326 */ 
-158,	-961,	 /* 327 */ 
268,	-321,	 /* 328 */ 
-934,	491,	 /* 329 */ 
-407,	-47,	 /* 330 */ 
144,	480,	 /* 331 */ 
-447,	619,	 /* 332 */ 
-19,	-737,	 /* 333 */ 
225,	-687,	 /* 334 */ 
-141,	36,	 /* 335 */ 
-1042,	578,	 /* 336 */ 
83,	394,	 /* 337 */ 
-310,	423,	 /* 338 */ 
-65,	-262,	 /* 339 */ 
-448,	-128,	 /* 340 */ 
-345,	115,	 /* 341 */ 
-55,	14,	 /* 342 */ 
39,	-1285,	 /* 343 */ 
-235,	-687,	 /* 344 */ 
-48,	268,	 /* 345 */ 
278,	7,	 /* 346 */ 
-575,	520,	 /* 347 */ 
562,	-645,	 /* 348 */ 
414,	68,	 /* 349 */ 
-600,	-442,	 /* 350 */ 
197,	99,	 /* 351 */ 
545,	153,	 /* 352 */ 
-277,	296,	 /* 353 */ 
34,	139,	 /* 354 */ 
-276,	54,	 /* 355 */ 
79,	-586,	 /* 356 */ 
-527,	-263,	 /* 357 */ 
-165,	121,	 /* 358 */ 
722,	-345,	 /* 359 */ 
276,	-112,	 /* 360 */ 
196,	-134,	 /* 361 */ 
-690,	-164,	 /* 362 */ 
630,	55,	 /* 363 */ 
367,	636,	 /* 364 */ 
-545,	317,	 /* 365 */ 
496,	229,	 /* 366 */ 
-174,	-204,	 /* 367 */ 
-793,	-120,	 /* 368 */ 
280,	569,	 /* 369 */ 
-774,	-568,	 /* 370 */ 
-589,	390,	 /* 371 */ 
299,	594,	 /* 372 */ 
-229,	732,	 /* 373 */ 
-473,	-194,	 /* 374 */ 
-35,	509,	 /* 375 */ 
-46,	-353,	 /* 376 */ 
349,	-7,	 /* 377 */ 
-55,	213,	 /* 378 */ 
655,	6,	 /* 379 */ 
-211,	362,	 /* 380 */ 
-596,	-24,	 /* 381 */ 
289,	-357,	 /* 382 */ 
227,	13,	 /* 383 */ 
517,	524,	 /* 384 */ 
32,	-753,	 /* 385 */ 
-452,	666,	 /* 386 */ 
-484,	437,	 /* 387 */ 
-326,	87,	 /* 388 */ 
133,	629,	 /* 389 */ 
-561,	-544,	 /* 390 */ 
715,	-478,	 /* 391 */ 
467,	132,	 /* 392 */ 
600,	-882,	 /* 393 */ 
41,	-194,	 /* 394 */ 
-19,	119,	 /* 395 */ 
-348,	240,	 /* 396 */ 
309,	-164,	 /* 397 */ 
275,	399,	 /* 398 */ 
-115,	200,	 /* 399 */ 
72,	529,	 /* 400 */ 
-91,	-225,	 /* 401 */ 
-90,	-157,	 /* 402 */ 
-516,	203,	 /* 403 */ 
304,	477,	 /* 404 */ 
16,	246,	 /* 405 */ 
-363,	841,	 /* 406 */ 
-151,	376,	 /* 407 */ 
112,	-255,	 /* 408 */ 
-638,	-274,	 /* 409 */ 
-189,	-692,	 /* 410 */ 
-60,	-114,	 /* 411 */ 
-145,	-4,	 /* 412 */ 
177,	-178,	 /* 413 */ 
-293,	-17,	 /* 414 */ 
21,	277,	 /* 415 */ 
-410,	97,	 /* 416 */ 
205,	80,	 /* 417 */ 
-152,	43,	 /* 418 */ 
780,	-481,	 /* 419 */ 
-907,	557,	 /* 420 */ 
1164,	-17,	 /* 421 */ 
-757,	706,	 /* 422 */ 
-242,	-342,	 /* 423 */ 
293,	-140,	 /* 424 */ 
-362,	-469,	 /* 425 */ 
-1,	7,	 /* 426 */ 
511,	110,	 /* 427 */ 
-482,	215,	 /* 428 */ 
55,	-76,	 /* 429 */ 
-215,	0,	 /* 430 */ 
-12,	255,	 /* 431 */ 
-27,	84,	 /* 432 */ 
130,	-709,	 /* 433 */ 
166,	-943,	 /* 434 */ 
-421,	14,	 /* 435 */ 
115,	441,	 /* 436 */ 
829,	-240,	 /* 437 */ 
296,	769,	 /* 438 */ 
-392,	-173,	 /* 439 */ 
-120,	406,	 /* 440 */ 
-585,	189,	 /* 441 */ 
337,	83,	 /* 442 */ 
593,	-119,	 /* 443 */ 
-193,	-767,	 /* 444 */ 
185,	139,	 /* 445 */ 
-91,	-757,	 /* 446 */ 
-371,	242,	 /* 447 */ 
-443,	-251,	 /* 448 */ 
-172,	-635,	 /* 449 */ 
-969,	290,	 /* 450 */ 
-87,	90,	 /* 451 */ 
469,	1219,	 /* 452 */ 
-416,	-367,	 /* 453 */ 
288,	434,	 /* 454 */ 
45,	-499,	 /* 455 */ 
72,	-721,	 /* 456 */ 
163,	-508,	 /* 457 */ 
122,	126,	 /* 458 */ 
182,	381,	 /* 459 */ 
-514,	-990,	 /* 460 */ 
262,	-71,	 /* 461 */ 
698,	375,	 /* 462 */ 
811,	-424,	 /* 463 */ 
-367,	23,	 /* 464 */ 
-323,	688,	 /* 465 */ 
-224,	-592,	 /* 466 */ 
379,	-82,	 /* 467 */ 
-352,	293,	 /* 468 */ 
492,	421,	 /* 469 */ 
-217,	-108,	 /* 470 */ 
-255,	-685,	 /* 471 */ 
524,	947,	 /* 472 */ 
335,	-266,	 /* 473 */ 
-97,	292,	 /* 474 */ 
-803,	609,	 /* 475 */ 
165,	302,	 /* 476 */ 
-460,	-178,	 /* 477 */ 
231,	79,	 /* 478 */ 
-102,	-168,	 /* 479 */ 
-37,	402,	 /* 480 */ 
17,	32,	 /* 481 */ 
-123,	-178,	 /* 482 */ 
11,	-239,	 /* 483 */ 
178,	682,	 /* 484 */ 
-674,	390,	 /* 485 */ 
-807,	-542,	 /* 486 */ 
-161,	-786,	 /* 487 */ 
-39,	-186,	 /* 488 */ 
13,	487,	 /* 489 */ 
-215,	-393,	 /* 490 */ 
455,	-311,	 /* 491 */ 
-25,	15,	 /* 492 */ 
-213,	172,	 /* 493 */ 
-167,	325,	 /* 494 */ 
652,	277,	 /* 495 */ 
81,	-283,	 /* 496 */ 
-688,	124,	 /* 497 */ 
708,	740,	 /* 498 */ 
257,	663,	 /* 499 */ 
185,	140,	 /* 500 */ 
-57,	430,	 /* 501 */ 
429,	520,	 /* 502 */ 
-13,	-112,	 /* 503 */ 
-307,	-109,	 /* 504 */ 
-459,	214,	 /* 505 */ 
-721,	582,	 /* 506 */ 
-413,	-582,	 /* 507 */ 
183,	389,	 /* 508 */ 
-157,	749,	 /* 509 */ 
-234,	269,	 /* 510 */ 
784,	-310,	 /* 511 */ 
};

DATA error;

