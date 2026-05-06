// AUTO-GENERATED RANDOM FOREST MODEL
// Trained on: Aluminium, Bakir, Bos, Celik
// Accuracy: 90.38%

#ifndef RF_MODEL_H
#define RF_MODEL_H

#include <stdint.h>

#include <string.h>
void add_vectors(double *v1, double *v2, int size, double *result) {
    for(int i = 0; i < size; ++i)
        result[i] = v1[i] + v2[i];
}
void mul_vector_number(double *v1, double num, int size, double *result) {
    for(int i = 0; i < size; ++i)
        result[i] = v1[i] * num;
}
void score(double * input, double * output) {
    double var0[4];
    double var1[4];
    double var2[4];
    double var3[4];
    double var4[4];
    double var5[4];
    double var6[4];
    double var7[4];
    double var8[4];
    double var9[4];
    double var10[4];
    double var11[4];
    double var12[4];
    double var13[4];
    double var14[4];
    double var15[4];
    double var16[4];
    double var17[4];
    double var18[4];
    double var19[4];
    double var20[4];
    double var21[4];
    double var22[4];
    double var23[4];
    double var24[4];
    double var25[4];
    double var26[4];
    double var27[4];
    double var28[4];
    double var29[4];
    double var30[4];
    if (input[0] <= 616.6500244140625) {
        if (input[1] <= 545.4500122070312) {
            if (input[2] <= 539.1999816894531) {
                memcpy(var30, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                if (input[2] <= 539.5499877929688) {
                    if (input[0] <= 540.4500122070312) {
                        memcpy(var30, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var30, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 543.3000183105469) {
                        memcpy(var30, (double[]){0.9090909090909091, 0.0, 0.0, 0.09090909090909091}, 4 * sizeof(double));
                    } else {
                        memcpy(var30, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[0] <= 605.3999938964844) {
                if (input[1] <= 573.7000122070312) {
                    if (input[2] <= 565.8500061035156) {
                        memcpy(var30, (double[]){0.5663716814159292, 0.0, 0.0, 0.4336283185840708}, 4 * sizeof(double));
                    } else {
                        memcpy(var30, (double[]){0.28, 0.0, 0.0, 0.72}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var30, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            } else {
                if (input[2] <= 613.0499877929688) {
                    if (input[0] <= 608.0) {
                        memcpy(var30, (double[]){0.9375, 0.0, 0.0, 0.0625}, 4 * sizeof(double));
                    } else {
                        memcpy(var30, (double[]){0.5, 0.0, 0.0, 0.5}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var30, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        if (input[1] <= 646.4500122070312) {
            memcpy(var30, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var30, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    double var31[4];
    if (input[2] <= 616.1000061035156) {
        if (input[2] <= 547.6000061035156) {
            if (input[2] <= 539.1999816894531) {
                memcpy(var31, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                if (input[2] <= 542.1499938964844) {
                    if (input[1] <= 539.1000061035156) {
                        memcpy(var31, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var31, (double[]){0.7142857142857143, 0.0, 0.0, 0.2857142857142857}, 4 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 544.6000061035156) {
                        memcpy(var31, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var31, (double[]){0.75, 0.0, 0.0, 0.25}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[2] <= 604.8000183105469) {
                if (input[2] <= 566.0) {
                    if (input[2] <= 558.0500183105469) {
                        memcpy(var31, (double[]){0.5172413793103449, 0.0, 0.0, 0.4827586206896552}, 4 * sizeof(double));
                    } else {
                        memcpy(var31, (double[]){0.7333333333333333, 0.0, 0.0, 0.26666666666666666}, 4 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 572.8500061035156) {
                        memcpy(var31, (double[]){0.12, 0.0, 0.0, 0.88}, 4 * sizeof(double));
                    } else {
                        memcpy(var31, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 610.75) {
                    if (input[0] <= 607.9499816894531) {
                        memcpy(var31, (double[]){0.96, 0.0, 0.0, 0.04}, 4 * sizeof(double));
                    } else {
                        memcpy(var31, (double[]){0.6086956521739131, 0.0, 0.0, 0.391304347826087}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var31, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        if (input[0] <= 647.1499938964844) {
            memcpy(var31, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var31, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var30, var31, 4, var29);
    double var32[4];
    if (input[1] <= 646.4500122070312) {
        if (input[1] <= 615.9499816894531) {
            if (input[1] <= 544.8499755859375) {
                if (input[0] <= 540.2999877929688) {
                    memcpy(var32, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[2] <= 541.3500061035156) {
                        memcpy(var32, (double[]){0.42857142857142855, 0.0, 0.0, 0.5714285714285714}, 4 * sizeof(double));
                    } else {
                        memcpy(var32, (double[]){0.9090909090909091, 0.0, 0.0, 0.09090909090909091}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 605.7999877929688) {
                    if (input[2] <= 563.5) {
                        memcpy(var32, (double[]){0.4811320754716981, 0.0, 0.0, 0.5188679245283019}, 4 * sizeof(double));
                    } else {
                        memcpy(var32, (double[]){0.04046242774566474, 0.0, 0.0, 0.9595375722543352}, 4 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 611.0499877929688) {
                        memcpy(var32, (double[]){0.896551724137931, 0.0, 0.0, 0.10344827586206896}, 4 * sizeof(double));
                    } else {
                        memcpy(var32, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            memcpy(var32, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        }
    } else {
        memcpy(var32, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
    }
    add_vectors(var29, var32, 4, var28);
    double var33[4];
    if (input[2] <= 616.0500183105469) {
        if (input[1] <= 551.7000122070312) {
            if (input[0] <= 540.3500061035156) {
                memcpy(var33, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                if (input[0] <= 543.3000183105469) {
                    if (input[1] <= 540.7999877929688) {
                        memcpy(var33, (double[]){0.875, 0.0, 0.0, 0.125}, 4 * sizeof(double));
                    } else {
                        memcpy(var33, (double[]){0.46153846153846156, 0.0, 0.0, 0.5384615384615384}, 4 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 544.6000061035156) {
                        memcpy(var33, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var33, (double[]){0.8333333333333334, 0.0, 0.0, 0.16666666666666666}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= 605.1499938964844) {
                if (input[2] <= 563.7000122070312) {
                    if (input[0] <= 557.75) {
                        memcpy(var33, (double[]){0.3125, 0.0, 0.0, 0.6875}, 4 * sizeof(double));
                    } else {
                        memcpy(var33, (double[]){0.7627118644067796, 0.0, 0.0, 0.23728813559322035}, 4 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 573.5) {
                        memcpy(var33, (double[]){0.18181818181818182, 0.0, 0.0, 0.8181818181818182}, 4 * sizeof(double));
                    } else {
                        memcpy(var33, (double[]){0.006896551724137931, 0.0, 0.0, 0.993103448275862}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 613.0499877929688) {
                    if (input[2] <= 607.3500061035156) {
                        memcpy(var33, (double[]){0.9565217391304348, 0.0, 0.0, 0.043478260869565216}, 4 * sizeof(double));
                    } else {
                        memcpy(var33, (double[]){0.6153846153846154, 0.0, 0.0, 0.38461538461538464}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var33, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        if (input[0] <= 647.1499938964844) {
            memcpy(var33, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var33, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var28, var33, 4, var27);
    double var34[4];
    if (input[2] <= 616.0500183105469) {
        if (input[1] <= 559.1999816894531) {
            if (input[0] <= 549.75) {
                if (input[0] <= 543.1499938964844) {
                    memcpy(var34, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[0] <= 543.3000183105469) {
                        memcpy(var34, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var34, (double[]){0.9090909090909091, 0.0, 0.0, 0.09090909090909091}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 550.1999816894531) {
                    memcpy(var34, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    if (input[2] <= 554.5499877929688) {
                        memcpy(var34, (double[]){0.5862068965517241, 0.0, 0.0, 0.41379310344827586}, 4 * sizeof(double));
                    } else {
                        memcpy(var34, (double[]){0.8048780487804879, 0.0, 0.0, 0.1951219512195122}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[2] <= 604.8000183105469) {
                if (input[2] <= 565.0) {
                    if (input[0] <= 561.6000061035156) {
                        memcpy(var34, (double[]){0.125, 0.0, 0.0, 0.875}, 4 * sizeof(double));
                    } else {
                        memcpy(var34, (double[]){0.8571428571428571, 0.0, 0.0, 0.14285714285714285}, 4 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 572.9500122070312) {
                        memcpy(var34, (double[]){0.19230769230769232, 0.0, 0.0, 0.8076923076923077}, 4 * sizeof(double));
                    } else {
                        memcpy(var34, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= 613.1499938964844) {
                    if (input[2] <= 607.1499938964844) {
                        memcpy(var34, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var34, (double[]){0.7555555555555555, 0.0, 0.0, 0.24444444444444444}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var34, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        if (input[2] <= 646.7000122070312) {
            memcpy(var34, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var34, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var27, var34, 4, var26);
    double var35[4];
    if (input[1] <= 615.9499816894531) {
        if (input[1] <= 545.0) {
            if (input[1] <= 538.9500122070312) {
                memcpy(var35, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                if (input[1] <= 539.0499877929688) {
                    if (input[0] <= 540.1000061035156) {
                        memcpy(var35, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var35, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 541.6499938964844) {
                        memcpy(var35, (double[]){0.9375, 0.0, 0.0, 0.0625}, 4 * sizeof(double));
                    } else {
                        memcpy(var35, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= 605.1499938964844) {
                if (input[0] <= 565.8500061035156) {
                    if (input[2] <= 555.5) {
                        memcpy(var35, (double[]){0.35, 0.0, 0.0, 0.65}, 4 * sizeof(double));
                    } else {
                        memcpy(var35, (double[]){0.6162790697674418, 0.0, 0.0, 0.38372093023255816}, 4 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 604.8500061035156) {
                        memcpy(var35, (double[]){0.005291005291005291, 0.0, 0.0, 0.9947089947089947}, 4 * sizeof(double));
                    } else {
                        memcpy(var35, (double[]){0.3333333333333333, 0.0, 0.0, 0.6666666666666666}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= 611.0499877929688) {
                    if (input[1] <= 608.3999938964844) {
                        memcpy(var35, (double[]){0.8636363636363636, 0.0, 0.0, 0.13636363636363635}, 4 * sizeof(double));
                    } else {
                        memcpy(var35, (double[]){0.3333333333333333, 0.0, 0.0, 0.6666666666666666}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var35, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        if (input[1] <= 646.5) {
            memcpy(var35, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var35, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var26, var35, 4, var25);
    double var36[4];
    if (input[1] <= 615.9499816894531) {
        if (input[2] <= 545.1000061035156) {
            if (input[2] <= 541.1999816894531) {
                memcpy(var36, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                if (input[1] <= 541.5) {
                    memcpy(var36, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    if (input[2] <= 542.1499938964844) {
                        memcpy(var36, (double[]){0.8571428571428571, 0.0, 0.0, 0.14285714285714285}, 4 * sizeof(double));
                    } else {
                        memcpy(var36, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= 605.1499938964844) {
                if (input[1] <= 563.6499938964844) {
                    if (input[2] <= 547.1000061035156) {
                        memcpy(var36, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var36, (double[]){0.6111111111111112, 0.0, 0.0, 0.3888888888888889}, 4 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 574.6000061035156) {
                        memcpy(var36, (double[]){0.14285714285714285, 0.0, 0.0, 0.8571428571428571}, 4 * sizeof(double));
                    } else {
                        memcpy(var36, (double[]){0.006802721088435374, 0.0, 0.0, 0.9931972789115646}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 612.8999938964844) {
                    if (input[0] <= 609.5499877929688) {
                        memcpy(var36, (double[]){0.8409090909090909, 0.0, 0.0, 0.1590909090909091}, 4 * sizeof(double));
                    } else {
                        memcpy(var36, (double[]){0.35714285714285715, 0.0, 0.0, 0.6428571428571429}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var36, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        if (input[0] <= 647.0499877929688) {
            memcpy(var36, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var36, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var25, var36, 4, var24);
    double var37[4];
    if (input[0] <= 616.6500244140625) {
        if (input[1] <= 563.5499877929688) {
            if (input[2] <= 545.3500061035156) {
                if (input[1] <= 538.9500122070312) {
                    memcpy(var37, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[0] <= 540.6499938964844) {
                        memcpy(var37, (double[]){0.8, 0.0, 0.0, 0.2}, 4 * sizeof(double));
                    } else {
                        memcpy(var37, (double[]){0.9767441860465116, 0.0, 0.0, 0.023255813953488372}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 553.9500122070312) {
                    if (input[2] <= 553.1499938964844) {
                        memcpy(var37, (double[]){0.5882352941176471, 0.0, 0.0, 0.4117647058823529}, 4 * sizeof(double));
                    } else {
                        memcpy(var37, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 555.6499938964844) {
                        memcpy(var37, (double[]){0.5714285714285714, 0.0, 0.0, 0.42857142857142855}, 4 * sizeof(double));
                    } else {
                        memcpy(var37, (double[]){0.8235294117647058, 0.0, 0.0, 0.17647058823529413}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[2] <= 605.25) {
                if (input[1] <= 573.5) {
                    if (input[0] <= 573.3500061035156) {
                        memcpy(var37, (double[]){0.16, 0.0, 0.0, 0.84}, 4 * sizeof(double));
                    } else {
                        memcpy(var37, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 604.0500183105469) {
                        memcpy(var37, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var37, (double[]){0.4, 0.0, 0.0, 0.6}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 613.0499877929688) {
                    if (input[2] <= 607.3500061035156) {
                        memcpy(var37, (double[]){0.8888888888888888, 0.0, 0.0, 0.1111111111111111}, 4 * sizeof(double));
                    } else {
                        memcpy(var37, (double[]){0.5555555555555556, 0.0, 0.0, 0.4444444444444444}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var37, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        if (input[0] <= 647.0499877929688) {
            memcpy(var37, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var37, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var24, var37, 4, var23);
    double var38[4];
    if (input[2] <= 616.1000061035156) {
        if (input[1] <= 545.0) {
            if (input[0] <= 544.6000061035156) {
                if (input[0] <= 540.4500122070312) {
                    memcpy(var38, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[1] <= 539.3500061035156) {
                        memcpy(var38, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var38, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= 544.25) {
                    if (input[2] <= 544.25) {
                        memcpy(var38, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var38, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var38, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        } else {
            if (input[1] <= 604.8000183105469) {
                if (input[2] <= 565.0) {
                    if (input[2] <= 554.5499877929688) {
                        memcpy(var38, (double[]){0.4411764705882353, 0.0, 0.0, 0.5588235294117647}, 4 * sizeof(double));
                    } else {
                        memcpy(var38, (double[]){0.675, 0.0, 0.0, 0.325}, 4 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 572.8999938964844) {
                        memcpy(var38, (double[]){0.23809523809523808, 0.0, 0.0, 0.7619047619047619}, 4 * sizeof(double));
                    } else {
                        memcpy(var38, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= 613.1499938964844) {
                    if (input[1] <= 613.0) {
                        memcpy(var38, (double[]){0.8076923076923077, 0.0, 0.0, 0.19230769230769232}, 4 * sizeof(double));
                    } else {
                        memcpy(var38, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var38, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        if (input[0] <= 647.1499938964844) {
            memcpy(var38, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var38, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var23, var38, 4, var22);
    double var39[4];
    if (input[0] <= 616.6500244140625) {
        if (input[1] <= 544.7999877929688) {
            if (input[0] <= 542.4500122070312) {
                memcpy(var39, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                if (input[0] <= 542.5499877929688) {
                    memcpy(var39, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    if (input[2] <= 544.3999938964844) {
                        memcpy(var39, (double[]){0.9047619047619048, 0.0, 0.0, 0.09523809523809523}, 4 * sizeof(double));
                    } else {
                        memcpy(var39, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[0] <= 605.1499938964844) {
                if (input[0] <= 564.6999816894531) {
                    if (input[0] <= 555.6500244140625) {
                        memcpy(var39, (double[]){0.34146341463414637, 0.0, 0.0, 0.6585365853658537}, 4 * sizeof(double));
                    } else {
                        memcpy(var39, (double[]){0.6956521739130435, 0.0, 0.0, 0.30434782608695654}, 4 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 574.1000061035156) {
                        memcpy(var39, (double[]){0.125, 0.0, 0.0, 0.875}, 4 * sizeof(double));
                    } else {
                        memcpy(var39, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 605.25) {
                    if (input[2] <= 605.0) {
                        memcpy(var39, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var39, (double[]){0.5714285714285714, 0.0, 0.0, 0.42857142857142855}, 4 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 613.0499877929688) {
                        memcpy(var39, (double[]){0.875, 0.0, 0.0, 0.125}, 4 * sizeof(double));
                    } else {
                        memcpy(var39, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[0] <= 647.0499877929688) {
            memcpy(var39, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var39, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var22, var39, 4, var21);
    double var40[4];
    if (input[0] <= 616.6500244140625) {
        if (input[2] <= 545.5) {
            if (input[0] <= 540.4500122070312) {
                memcpy(var40, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                if (input[2] <= 539.5499877929688) {
                    memcpy(var40, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    memcpy(var40, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        } else {
            if (input[2] <= 605.8999938964844) {
                if (input[1] <= 563.5499877929688) {
                    if (input[1] <= 556.4500122070312) {
                        memcpy(var40, (double[]){0.35555555555555557, 0.0, 0.0, 0.6444444444444445}, 4 * sizeof(double));
                    } else {
                        memcpy(var40, (double[]){0.65625, 0.0, 0.0, 0.34375}, 4 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 572.9500122070312) {
                        memcpy(var40, (double[]){0.2903225806451613, 0.0, 0.0, 0.7096774193548387}, 4 * sizeof(double));
                    } else {
                        memcpy(var40, (double[]){0.017964071856287425, 0.0, 0.0, 0.9820359281437125}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 614.0499877929688) {
                    if (input[0] <= 609.1499938964844) {
                        memcpy(var40, (double[]){0.967741935483871, 0.0, 0.0, 0.03225806451612903}, 4 * sizeof(double));
                    } else {
                        memcpy(var40, (double[]){0.76, 0.0, 0.0, 0.24}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var40, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        if (input[2] <= 646.6000061035156) {
            memcpy(var40, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var40, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var21, var40, 4, var20);
    double var41[4];
    if (input[2] <= 616.1000061035156) {
        if (input[1] <= 547.3999938964844) {
            if (input[0] <= 540.4500122070312) {
                memcpy(var41, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                if (input[1] <= 542.0) {
                    if (input[2] <= 542.0499877929688) {
                        memcpy(var41, (double[]){0.875, 0.0, 0.0, 0.125}, 4 * sizeof(double));
                    } else {
                        memcpy(var41, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var41, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        } else {
            if (input[2] <= 605.25) {
                if (input[2] <= 564.75) {
                    if (input[2] <= 556.6500244140625) {
                        memcpy(var41, (double[]){0.38, 0.0, 0.0, 0.62}, 4 * sizeof(double));
                    } else {
                        memcpy(var41, (double[]){0.6612903225806451, 0.0, 0.0, 0.3387096774193548}, 4 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 574.1000061035156) {
                        memcpy(var41, (double[]){0.23076923076923078, 0.0, 0.0, 0.7692307692307693}, 4 * sizeof(double));
                    } else {
                        memcpy(var41, (double[]){0.006944444444444444, 0.0, 0.0, 0.9930555555555556}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 607.1499938964844) {
                    memcpy(var41, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[1] <= 608.1999816894531) {
                        memcpy(var41, (double[]){0.5882352941176471, 0.0, 0.0, 0.4117647058823529}, 4 * sizeof(double));
                    } else {
                        memcpy(var41, (double[]){0.9523809523809523, 0.0, 0.0, 0.047619047619047616}, 4 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[2] <= 646.6000061035156) {
            memcpy(var41, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var41, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var20, var41, 4, var19);
    double var42[4];
    if (input[2] <= 616.1000061035156) {
        if (input[0] <= 546.0499877929688) {
            if (input[0] <= 544.6000061035156) {
                if (input[1] <= 538.9500122070312) {
                    memcpy(var42, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[1] <= 539.1000061035156) {
                        memcpy(var42, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var42, (double[]){0.967741935483871, 0.0, 0.0, 0.03225806451612903}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= 544.25) {
                    if (input[2] <= 544.25) {
                        memcpy(var42, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var42, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var42, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        } else {
            if (input[0] <= 605.75) {
                if (input[2] <= 564.75) {
                    if (input[0] <= 559.25) {
                        memcpy(var42, (double[]){0.4696969696969697, 0.0, 0.0, 0.5303030303030303}, 4 * sizeof(double));
                    } else {
                        memcpy(var42, (double[]){0.7333333333333333, 0.0, 0.0, 0.26666666666666666}, 4 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 605.0) {
                        memcpy(var42, (double[]){0.026455026455026454, 0.0, 0.0, 0.9735449735449735}, 4 * sizeof(double));
                    } else {
                        memcpy(var42, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= 605.1499938964844) {
                    memcpy(var42, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    if (input[1] <= 607.1499938964844) {
                        memcpy(var42, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var42, (double[]){0.72, 0.0, 0.0, 0.28}, 4 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[1] <= 646.5) {
            memcpy(var42, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var42, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var19, var42, 4, var18);
    double var43[4];
    if (input[2] <= 616.0500183105469) {
        if (input[0] <= 564.8999938964844) {
            if (input[1] <= 544.8499755859375) {
                if (input[0] <= 540.4500122070312) {
                    memcpy(var43, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[1] <= 539.3500061035156) {
                        memcpy(var43, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var43, (double[]){0.96, 0.0, 0.0, 0.04}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 548.0499877929688) {
                    if (input[0] <= 547.75) {
                        memcpy(var43, (double[]){0.5, 0.0, 0.0, 0.5}, 4 * sizeof(double));
                    } else {
                        memcpy(var43, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 549.5499877929688) {
                        memcpy(var43, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var43, (double[]){0.6506024096385542, 0.0, 0.0, 0.3493975903614458}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[2] <= 605.25) {
                if (input[0] <= 574.1000061035156) {
                    if (input[0] <= 572.5) {
                        memcpy(var43, (double[]){0.041666666666666664, 0.0, 0.0, 0.9583333333333334}, 4 * sizeof(double));
                    } else {
                        memcpy(var43, (double[]){0.8571428571428571, 0.0, 0.0, 0.14285714285714285}, 4 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 604.8499755859375) {
                        memcpy(var43, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var43, (double[]){0.3333333333333333, 0.0, 0.0, 0.6666666666666666}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 609.6999816894531) {
                    if (input[0] <= 609.5499877929688) {
                        memcpy(var43, (double[]){0.8260869565217391, 0.0, 0.0, 0.17391304347826086}, 4 * sizeof(double));
                    } else {
                        memcpy(var43, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var43, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        if (input[0] <= 647.1499938964844) {
            memcpy(var43, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var43, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var18, var43, 4, var17);
    double var44[4];
    if (input[1] <= 615.9499816894531) {
        if (input[1] <= 543.5) {
            if (input[0] <= 540.4500122070312) {
                memcpy(var44, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                if (input[1] <= 539.3999938964844) {
                    memcpy(var44, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    if (input[1] <= 542.0) {
                        memcpy(var44, (double[]){0.8571428571428571, 0.0, 0.0, 0.14285714285714285}, 4 * sizeof(double));
                    } else {
                        memcpy(var44, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[2] <= 604.8000183105469) {
                if (input[2] <= 564.0499877929688) {
                    if (input[1] <= 557.8500061035156) {
                        memcpy(var44, (double[]){0.47761194029850745, 0.0, 0.0, 0.5223880597014925}, 4 * sizeof(double));
                    } else {
                        memcpy(var44, (double[]){0.7619047619047619, 0.0, 0.0, 0.23809523809523808}, 4 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 572.8500061035156) {
                        memcpy(var44, (double[]){0.06896551724137931, 0.0, 0.0, 0.9310344827586207}, 4 * sizeof(double));
                    } else {
                        memcpy(var44, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 612.8999938964844) {
                    if (input[0] <= 612.3500061035156) {
                        memcpy(var44, (double[]){0.8636363636363636, 0.0, 0.0, 0.13636363636363635}, 4 * sizeof(double));
                    } else {
                        memcpy(var44, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var44, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        if (input[2] <= 646.7000122070312) {
            memcpy(var44, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var44, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var17, var44, 4, var16);
    double var45[4];
    if (input[1] <= 615.9499816894531) {
        if (input[2] <= 548.1000061035156) {
            if (input[0] <= 542.4500122070312) {
                memcpy(var45, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                if (input[2] <= 541.4499816894531) {
                    memcpy(var45, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    if (input[0] <= 544.6000061035156) {
                        memcpy(var45, (double[]){0.95, 0.0, 0.0, 0.05}, 4 * sizeof(double));
                    } else {
                        memcpy(var45, (double[]){0.8461538461538461, 0.0, 0.0, 0.15384615384615385}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[2] <= 605.3000183105469) {
                if (input[2] <= 572.9500122070312) {
                    if (input[0] <= 566.25) {
                        memcpy(var45, (double[]){0.6148148148148148, 0.0, 0.0, 0.3851851851851852}, 4 * sizeof(double));
                    } else {
                        memcpy(var45, (double[]){0.3181818181818182, 0.0, 0.0, 0.6818181818181818}, 4 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 604.6499938964844) {
                        memcpy(var45, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var45, (double[]){0.3333333333333333, 0.0, 0.0, 0.6666666666666666}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= 612.0500183105469) {
                    if (input[0] <= 608.1499938964844) {
                        memcpy(var45, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var45, (double[]){0.5769230769230769, 0.0, 0.0, 0.4230769230769231}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var45, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        if (input[1] <= 646.3500061035156) {
            memcpy(var45, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var45, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var16, var45, 4, var15);
    double var46[4];
    if (input[0] <= 616.6500244140625) {
        if (input[2] <= 545.25) {
            if (input[2] <= 541.1999816894531) {
                memcpy(var46, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                if (input[2] <= 541.3500061035156) {
                    memcpy(var46, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    memcpy(var46, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        } else {
            if (input[1] <= 605.1499938964844) {
                if (input[2] <= 565.8500061035156) {
                    if (input[1] <= 555.25) {
                        memcpy(var46, (double[]){0.375, 0.0, 0.0, 0.625}, 4 * sizeof(double));
                    } else {
                        memcpy(var46, (double[]){0.6521739130434783, 0.0, 0.0, 0.34782608695652173}, 4 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 604.3500061035156) {
                        memcpy(var46, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var46, (double[]){0.5, 0.0, 0.0, 0.5}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 609.6499938964844) {
                    if (input[0] <= 609.5499877929688) {
                        memcpy(var46, (double[]){0.918918918918919, 0.0, 0.0, 0.08108108108108109}, 4 * sizeof(double));
                    } else {
                        memcpy(var46, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 613.0499877929688) {
                        memcpy(var46, (double[]){0.9285714285714286, 0.0, 0.0, 0.07142857142857142}, 4 * sizeof(double));
                    } else {
                        memcpy(var46, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[1] <= 646.4500122070312) {
            memcpy(var46, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var46, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var15, var46, 4, var14);
    double var47[4];
    if (input[0] <= 616.6500244140625) {
        if (input[1] <= 544.5499877929688) {
            if (input[1] <= 543.6499938964844) {
                if (input[0] <= 540.4500122070312) {
                    memcpy(var47, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[2] <= 539.6999816894531) {
                        memcpy(var47, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var47, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 544.25) {
                    memcpy(var47, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    memcpy(var47, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            }
        } else {
            if (input[0] <= 605.1499938964844) {
                if (input[2] <= 563.7000122070312) {
                    if (input[1] <= 547.0) {
                        memcpy(var47, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var47, (double[]){0.6160714285714286, 0.0, 0.0, 0.38392857142857145}, 4 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 572.9500122070312) {
                        memcpy(var47, (double[]){0.25, 0.0, 0.0, 0.75}, 4 * sizeof(double));
                    } else {
                        memcpy(var47, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 605.8999938964844) {
                    if (input[1] <= 604.8000183105469) {
                        memcpy(var47, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var47, (double[]){0.6470588235294118, 0.0, 0.0, 0.35294117647058826}, 4 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 613.1000061035156) {
                        memcpy(var47, (double[]){0.8611111111111112, 0.0, 0.0, 0.1388888888888889}, 4 * sizeof(double));
                    } else {
                        memcpy(var47, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[0] <= 647.0499877929688) {
            memcpy(var47, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var47, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var14, var47, 4, var13);
    double var48[4];
    if (input[1] <= 615.9499816894531) {
        if (input[0] <= 551.8999938964844) {
            if (input[0] <= 546.7000122070312) {
                if (input[0] <= 540.3500061035156) {
                    memcpy(var48, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[2] <= 539.5499877929688) {
                        memcpy(var48, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var48, (double[]){0.9411764705882353, 0.0, 0.0, 0.058823529411764705}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 546.5500183105469) {
                    memcpy(var48, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    if (input[2] <= 548.1000061035156) {
                        memcpy(var48, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var48, (double[]){0.625, 0.0, 0.0, 0.375}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= 604.3500061035156) {
                if (input[2] <= 572.9500122070312) {
                    if (input[2] <= 554.8000183105469) {
                        memcpy(var48, (double[]){0.19047619047619047, 0.0, 0.0, 0.8095238095238095}, 4 * sizeof(double));
                    } else {
                        memcpy(var48, (double[]){0.51, 0.0, 0.0, 0.49}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var48, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            } else {
                if (input[2] <= 611.0499877929688) {
                    if (input[2] <= 610.5499877929688) {
                        memcpy(var48, (double[]){0.7674418604651163, 0.0, 0.0, 0.23255813953488372}, 4 * sizeof(double));
                    } else {
                        memcpy(var48, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 613.0499877929688) {
                        memcpy(var48, (double[]){0.9285714285714286, 0.0, 0.0, 0.07142857142857142}, 4 * sizeof(double));
                    } else {
                        memcpy(var48, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[0] <= 647.1499938964844) {
            memcpy(var48, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var48, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var13, var48, 4, var12);
    double var49[4];
    if (input[2] <= 616.1000061035156) {
        if (input[2] <= 546.7000122070312) {
            if (input[1] <= 540.8999938964844) {
                memcpy(var49, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                if (input[0] <= 542.5499877929688) {
                    memcpy(var49, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    if (input[1] <= 542.0) {
                        memcpy(var49, (double[]){0.6666666666666666, 0.0, 0.0, 0.3333333333333333}, 4 * sizeof(double));
                    } else {
                        memcpy(var49, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[2] <= 605.0) {
                if (input[1] <= 565.9500122070312) {
                    if (input[2] <= 558.0) {
                        memcpy(var49, (double[]){0.4626865671641791, 0.0, 0.0, 0.5373134328358209}, 4 * sizeof(double));
                    } else {
                        memcpy(var49, (double[]){0.717391304347826, 0.0, 0.0, 0.2826086956521739}, 4 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 573.5) {
                        memcpy(var49, (double[]){0.16129032258064516, 0.0, 0.0, 0.8387096774193549}, 4 * sizeof(double));
                    } else {
                        memcpy(var49, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= 611.0499877929688) {
                    if (input[1] <= 607.1499938964844) {
                        memcpy(var49, (double[]){0.896551724137931, 0.0, 0.0, 0.10344827586206896}, 4 * sizeof(double));
                    } else {
                        memcpy(var49, (double[]){0.47058823529411764, 0.0, 0.0, 0.5294117647058824}, 4 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 613.1499938964844) {
                        memcpy(var49, (double[]){0.9, 0.0, 0.0, 0.1}, 4 * sizeof(double));
                    } else {
                        memcpy(var49, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[2] <= 646.6499938964844) {
            memcpy(var49, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var49, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var12, var49, 4, var11);
    double var50[4];
    if (input[1] <= 615.9499816894531) {
        if (input[2] <= 544.3999938964844) {
            if (input[2] <= 539.25) {
                memcpy(var50, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                if (input[0] <= 542.6000061035156) {
                    if (input[0] <= 542.1000061035156) {
                        memcpy(var50, (double[]){0.8888888888888888, 0.0, 0.0, 0.1111111111111111}, 4 * sizeof(double));
                    } else {
                        memcpy(var50, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var50, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        } else {
            if (input[2] <= 605.0) {
                if (input[2] <= 563.7000122070312) {
                    if (input[1] <= 557.7999877929688) {
                        memcpy(var50, (double[]){0.42424242424242425, 0.0, 0.0, 0.5757575757575758}, 4 * sizeof(double));
                    } else {
                        memcpy(var50, (double[]){0.782608695652174, 0.0, 0.0, 0.21739130434782608}, 4 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 574.1000061035156) {
                        memcpy(var50, (double[]){0.17647058823529413, 0.0, 0.0, 0.8235294117647058}, 4 * sizeof(double));
                    } else {
                        memcpy(var50, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 613.0499877929688) {
                    if (input[1] <= 608.3999938964844) {
                        memcpy(var50, (double[]){0.8378378378378378, 0.0, 0.0, 0.16216216216216217}, 4 * sizeof(double));
                    } else {
                        memcpy(var50, (double[]){0.2727272727272727, 0.0, 0.0, 0.7272727272727273}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var50, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        if (input[1] <= 646.4500122070312) {
            memcpy(var50, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var50, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var11, var50, 4, var10);
    double var51[4];
    if (input[0] <= 616.6500244140625) {
        if (input[0] <= 549.6499938964844) {
            if (input[0] <= 540.3500061035156) {
                memcpy(var51, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                if (input[1] <= 539.3999938964844) {
                    memcpy(var51, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    if (input[2] <= 541.1999816894531) {
                        memcpy(var51, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var51, (double[]){0.8292682926829268, 0.0, 0.0, 0.17073170731707318}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[0] <= 605.3999938964844) {
                if (input[2] <= 565.8500061035156) {
                    if (input[2] <= 557.9500122070312) {
                        memcpy(var51, (double[]){0.3728813559322034, 0.0, 0.0, 0.6271186440677966}, 4 * sizeof(double));
                    } else {
                        memcpy(var51, (double[]){0.74, 0.0, 0.0, 0.26}, 4 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 574.3000183105469) {
                        memcpy(var51, (double[]){0.18181818181818182, 0.0, 0.0, 0.8181818181818182}, 4 * sizeof(double));
                    } else {
                        memcpy(var51, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 613.1000061035156) {
                    if (input[1] <= 610.7999877929688) {
                        memcpy(var51, (double[]){0.8620689655172413, 0.0, 0.0, 0.13793103448275862}, 4 * sizeof(double));
                    } else {
                        memcpy(var51, (double[]){0.2222222222222222, 0.0, 0.0, 0.7777777777777778}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var51, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        if (input[1] <= 646.5) {
            memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var51, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var10, var51, 4, var9);
    double var52[4];
    if (input[1] <= 615.9499816894531) {
        if (input[2] <= 547.6000061035156) {
            if (input[2] <= 539.25) {
                memcpy(var52, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                if (input[2] <= 539.3500061035156) {
                    memcpy(var52, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    if (input[1] <= 545.2000122070312) {
                        memcpy(var52, (double[]){0.9722222222222222, 0.0, 0.0, 0.027777777777777776}, 4 * sizeof(double));
                    } else {
                        memcpy(var52, (double[]){0.7142857142857143, 0.0, 0.0, 0.2857142857142857}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= 604.8500061035156) {
                if (input[1] <= 563.2999877929688) {
                    if (input[0] <= 553.5) {
                        memcpy(var52, (double[]){0.25, 0.0, 0.0, 0.75}, 4 * sizeof(double));
                    } else {
                        memcpy(var52, (double[]){0.6666666666666666, 0.0, 0.0, 0.3333333333333333}, 4 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 572.9500122070312) {
                        memcpy(var52, (double[]){0.1111111111111111, 0.0, 0.0, 0.8888888888888888}, 4 * sizeof(double));
                    } else {
                        memcpy(var52, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= 613.1499938964844) {
                    if (input[2] <= 607.4500122070312) {
                        memcpy(var52, (double[]){0.8823529411764706, 0.0, 0.0, 0.11764705882352941}, 4 * sizeof(double));
                    } else {
                        memcpy(var52, (double[]){0.7666666666666667, 0.0, 0.0, 0.23333333333333334}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var52, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        if (input[2] <= 646.5500183105469) {
            memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var52, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var9, var52, 4, var8);
    double var53[4];
    if (input[1] <= 615.9499816894531) {
        if (input[2] <= 545.3500061035156) {
            if (input[2] <= 539.1999816894531) {
                memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                if (input[0] <= 543.3000183105469) {
                    if (input[2] <= 542.0499877929688) {
                        memcpy(var53, (double[]){0.8125, 0.0, 0.0, 0.1875}, 4 * sizeof(double));
                    } else {
                        memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 544.6000061035156) {
                        memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var53, (double[]){0.875, 0.0, 0.0, 0.125}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[2] <= 605.25) {
                if (input[2] <= 563.7000122070312) {
                    if (input[1] <= 561.8500061035156) {
                        memcpy(var53, (double[]){0.4536082474226804, 0.0, 0.0, 0.5463917525773195}, 4 * sizeof(double));
                    } else {
                        memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 605.0) {
                        memcpy(var53, (double[]){0.02702702702702703, 0.0, 0.0, 0.972972972972973}, 4 * sizeof(double));
                    } else {
                        memcpy(var53, (double[]){0.5, 0.0, 0.0, 0.5}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= 613.1499938964844) {
                    if (input[0] <= 613.8999938964844) {
                        memcpy(var53, (double[]){0.7884615384615384, 0.0, 0.0, 0.21153846153846154}, 4 * sizeof(double));
                    } else {
                        memcpy(var53, (double[]){0.2, 0.0, 0.0, 0.8}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        if (input[2] <= 646.7000122070312) {
            memcpy(var53, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var53, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var8, var53, 4, var7);
    double var54[4];
    if (input[1] <= 615.9499816894531) {
        if (input[2] <= 546.7000122070312) {
            if (input[0] <= 540.3500061035156) {
                memcpy(var54, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                if (input[0] <= 540.6499938964844) {
                    memcpy(var54, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    if (input[0] <= 543.3000183105469) {
                        memcpy(var54, (double[]){0.8571428571428571, 0.0, 0.0, 0.14285714285714285}, 4 * sizeof(double));
                    } else {
                        memcpy(var54, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= 605.8999938964844) {
                if (input[2] <= 564.75) {
                    if (input[0] <= 557.2000122070312) {
                        memcpy(var54, (double[]){0.38636363636363635, 0.0, 0.0, 0.6136363636363636}, 4 * sizeof(double));
                    } else {
                        memcpy(var54, (double[]){0.6896551724137931, 0.0, 0.0, 0.3103448275862069}, 4 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 604.9000244140625) {
                        memcpy(var54, (double[]){0.016574585635359115, 0.0, 0.0, 0.9834254143646409}, 4 * sizeof(double));
                    } else {
                        memcpy(var54, (double[]){0.2857142857142857, 0.0, 0.0, 0.7142857142857143}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 613.0499877929688) {
                    if (input[2] <= 612.9500122070312) {
                        memcpy(var54, (double[]){0.8222222222222222, 0.0, 0.0, 0.17777777777777778}, 4 * sizeof(double));
                    } else {
                        memcpy(var54, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var54, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        if (input[2] <= 646.6000061035156) {
            memcpy(var54, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var54, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var7, var54, 4, var6);
    double var55[4];
    if (input[0] <= 616.6500244140625) {
        if (input[1] <= 561.2000122070312) {
            if (input[2] <= 544.25) {
                if (input[0] <= 540.2999877929688) {
                    memcpy(var55, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[0] <= 540.7000122070312) {
                        memcpy(var55, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var55, (double[]){0.9428571428571428, 0.0, 0.0, 0.05714285714285714}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 554.75) {
                    if (input[0] <= 553.0999755859375) {
                        memcpy(var55, (double[]){0.5217391304347826, 0.0, 0.0, 0.4782608695652174}, 4 * sizeof(double));
                    } else {
                        memcpy(var55, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 559.25) {
                        memcpy(var55, (double[]){0.6904761904761905, 0.0, 0.0, 0.30952380952380953}, 4 * sizeof(double));
                    } else {
                        memcpy(var55, (double[]){0.9473684210526315, 0.0, 0.0, 0.05263157894736842}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= 604.8500061035156) {
                if (input[2] <= 573.5) {
                    if (input[2] <= 572.6999816894531) {
                        memcpy(var55, (double[]){0.34, 0.0, 0.0, 0.66}, 4 * sizeof(double));
                    } else {
                        memcpy(var55, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var55, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            } else {
                if (input[2] <= 612.1000061035156) {
                    if (input[1] <= 610.9500122070312) {
                        memcpy(var55, (double[]){0.9361702127659575, 0.0, 0.0, 0.06382978723404255}, 4 * sizeof(double));
                    } else {
                        memcpy(var55, (double[]){0.4444444444444444, 0.0, 0.0, 0.5555555555555556}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var55, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        if (input[0] <= 646.8999938964844) {
            memcpy(var55, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var55, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var6, var55, 4, var5);
    double var56[4];
    if (input[2] <= 616.1000061035156) {
        if (input[1] <= 547.3999938964844) {
            if (input[2] <= 539.25) {
                memcpy(var56, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                if (input[0] <= 542.5499877929688) {
                    if (input[0] <= 542.1000061035156) {
                        memcpy(var56, (double[]){0.8333333333333334, 0.0, 0.0, 0.16666666666666666}, 4 * sizeof(double));
                    } else {
                        memcpy(var56, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 546.2000122070312) {
                        memcpy(var56, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var56, (double[]){0.75, 0.0, 0.0, 0.25}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[2] <= 604.8000183105469) {
                if (input[1] <= 564.8999938964844) {
                    if (input[2] <= 554.8000183105469) {
                        memcpy(var56, (double[]){0.34375, 0.0, 0.0, 0.65625}, 4 * sizeof(double));
                    } else {
                        memcpy(var56, (double[]){0.6172839506172839, 0.0, 0.0, 0.38271604938271603}, 4 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 573.5) {
                        memcpy(var56, (double[]){0.13793103448275862, 0.0, 0.0, 0.8620689655172413}, 4 * sizeof(double));
                    } else {
                        memcpy(var56, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 612.0) {
                    if (input[2] <= 608.0499877929688) {
                        memcpy(var56, (double[]){0.8529411764705882, 0.0, 0.0, 0.14705882352941177}, 4 * sizeof(double));
                    } else {
                        memcpy(var56, (double[]){0.5, 0.0, 0.0, 0.5}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var56, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        if (input[2] <= 646.5500183105469) {
            memcpy(var56, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var56, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var5, var56, 4, var4);
    double var57[4];
    if (input[1] <= 615.9499816894531) {
        if (input[1] <= 549.5499877929688) {
            if (input[0] <= 540.2999877929688) {
                memcpy(var57, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                if (input[1] <= 539.3999938964844) {
                    memcpy(var57, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    if (input[1] <= 547.6000061035156) {
                        memcpy(var57, (double[]){0.8157894736842105, 0.0, 0.0, 0.18421052631578946}, 4 * sizeof(double));
                    } else {
                        memcpy(var57, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= 604.0500183105469) {
                if (input[1] <= 565.9500122070312) {
                    if (input[2] <= 553.0) {
                        memcpy(var57, (double[]){0.21428571428571427, 0.0, 0.0, 0.7857142857142857}, 4 * sizeof(double));
                    } else {
                        memcpy(var57, (double[]){0.6185567010309279, 0.0, 0.0, 0.38144329896907214}, 4 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 573.5) {
                        memcpy(var57, (double[]){0.13793103448275862, 0.0, 0.0, 0.8620689655172413}, 4 * sizeof(double));
                    } else {
                        memcpy(var57, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= 612.0500183105469) {
                    if (input[1] <= 608.8500061035156) {
                        memcpy(var57, (double[]){0.9230769230769231, 0.0, 0.0, 0.07692307692307693}, 4 * sizeof(double));
                    } else {
                        memcpy(var57, (double[]){0.36363636363636365, 0.0, 0.0, 0.6363636363636364}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var57, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        if (input[2] <= 646.7000122070312) {
            memcpy(var57, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var57, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var4, var57, 4, var3);
    double var58[4];
    if (input[0] <= 616.6500244140625) {
        if (input[2] <= 549.1999816894531) {
            if (input[2] <= 539.25) {
                memcpy(var58, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                if (input[0] <= 540.6499938964844) {
                    if (input[0] <= 540.2999877929688) {
                        memcpy(var58, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var58, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 545.4500122070312) {
                        memcpy(var58, (double[]){0.9024390243902439, 0.0, 0.0, 0.0975609756097561}, 4 * sizeof(double));
                    } else {
                        memcpy(var58, (double[]){0.7272727272727273, 0.0, 0.0, 0.2727272727272727}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= 604.3500061035156) {
                if (input[0] <= 567.1000061035156) {
                    if (input[0] <= 553.8999938964844) {
                        memcpy(var58, (double[]){0.2727272727272727, 0.0, 0.0, 0.7272727272727273}, 4 * sizeof(double));
                    } else {
                        memcpy(var58, (double[]){0.5769230769230769, 0.0, 0.0, 0.4230769230769231}, 4 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 572.25) {
                        memcpy(var58, (double[]){0.038461538461538464, 0.0, 0.0, 0.9615384615384616}, 4 * sizeof(double));
                    } else {
                        memcpy(var58, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= 612.0500183105469) {
                    if (input[2] <= 611.8000183105469) {
                        memcpy(var58, (double[]){0.8333333333333334, 0.0, 0.0, 0.16666666666666666}, 4 * sizeof(double));
                    } else {
                        memcpy(var58, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 613.0499877929688) {
                        memcpy(var58, (double[]){0.8333333333333334, 0.0, 0.0, 0.16666666666666666}, 4 * sizeof(double));
                    } else {
                        memcpy(var58, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[1] <= 646.4500122070312) {
            memcpy(var58, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var58, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var3, var58, 4, var2);
    double var59[4];
    if (input[1] <= 615.9499816894531) {
        if (input[1] <= 549.3999938964844) {
            if (input[1] <= 540.7999877929688) {
                if (input[1] <= 538.9500122070312) {
                    memcpy(var59, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[2] <= 539.5499877929688) {
                        memcpy(var59, (double[]){0.8333333333333334, 0.0, 0.0, 0.16666666666666666}, 4 * sizeof(double));
                    } else {
                        memcpy(var59, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= 541.1999816894531) {
                    memcpy(var59, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    if (input[0] <= 546.0499877929688) {
                        memcpy(var59, (double[]){0.9259259259259259, 0.0, 0.0, 0.07407407407407407}, 4 * sizeof(double));
                    } else {
                        memcpy(var59, (double[]){0.7777777777777778, 0.0, 0.0, 0.2222222222222222}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= 604.8000183105469) {
                if (input[1] <= 565.3500061035156) {
                    if (input[0] <= 555.6500244140625) {
                        memcpy(var59, (double[]){0.3333333333333333, 0.0, 0.0, 0.6666666666666666}, 4 * sizeof(double));
                    } else {
                        memcpy(var59, (double[]){0.6363636363636364, 0.0, 0.0, 0.36363636363636365}, 4 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 573.1499938964844) {
                        memcpy(var59, (double[]){0.09523809523809523, 0.0, 0.0, 0.9047619047619048}, 4 * sizeof(double));
                    } else {
                        memcpy(var59, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 612.1000061035156) {
                    if (input[0] <= 608.0) {
                        memcpy(var59, (double[]){0.9333333333333333, 0.0, 0.0, 0.06666666666666667}, 4 * sizeof(double));
                    } else {
                        memcpy(var59, (double[]){0.6086956521739131, 0.0, 0.0, 0.391304347826087}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var59, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        if (input[1] <= 646.4500122070312) {
            memcpy(var59, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var59, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var2, var59, 4, var1);
    mul_vector_number(var1, 0.03333333333333333, 4, var0);
    memcpy(output, var0, 4 * sizeof(double));
}


// Wrapper function to match your ESP32 Arduino code
int rf_model_predict(int16_t* input_features, int length) {
    // Convert int16_t array from Arduino to double array for the model
    double model_input[3];
    model_input[0] = (double)input_features[0];
    model_input[1] = (double)input_features[1];
    model_input[2] = (double)input_features[2];

    // Array to hold the probability scores for each class
    double scores[4];

    // Call the m2cgen generated function
    score(model_input, scores);

    // Find the class with the highest probability
    int best_class = 0;
    double max_score = scores[0];

    for(int i = 1; i < 4; i++) {
        if(scores[i] > max_score) {
            max_score = scores[i];
            best_class = i;
        }
    }

    return best_class;
}

#endif
