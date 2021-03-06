// Prediction rules generated by Zorro

int eqF(float);
double eq0(float);
double belowF(double,double);

int EURUSD_L(float* sig)
{
  if(sig[1]<sig[5] && sig[5]<sig[6] && sig[6]<sig[2] && sig[2]<sig[7] && sig[7]<sig[4] && sig[4]<sig[3] && sig[3]<sig[0] && sig[13]<sig[9] && sig[9]<sig[10] && sig[10]<sig[14] && sig[14]<sig[11] && sig[11]<sig[8] && sig[8]<sig[15] && sig[15]<sig[12])
    return 91;
  if(sig[5]<sig[6] && sig[6]<sig[3] && sig[3]<sig[7] && sig[7]<sig[4] && sig[4]<sig[1] && sig[1]<sig[2] && sig[2]<sig[0] && sig[9]<sig[13] && sig[13]<sig[14] && sig[14]<sig[10] && sig[10]<sig[15] && sig[15]<sig[12] && sig[12]<sig[11] && sig[11]<sig[8])
    return 87;
  if(sig[1]<sig[7] && sig[7]<sig[2] && sig[2]<sig[3] && sig[3]<sig[0] && sig[0]<sig[5] && sig[5]<sig[6] && sig[6]<sig[4] && sig[13]<sig[14] && sig[14]<sig[11] && sig[11]<sig[15] && sig[15]<sig[12] && sig[12]<sig[9] && sig[9]<sig[10] && sig[10]<sig[8])
    return 8;
  return 0;
}

int EURUSD_S(float* sig)
{
  if(sig[1]<sig[5] && sig[5]<sig[2] && sig[2]<sig[6] && sig[6]<sig[7] && sig[7]<sig[4] && sig[4]<sig[3] && sig[3]<sig[0] && sig[9]<sig[13] && sig[13]<sig[14] && sig[14]<sig[15] && sig[15]<sig[12] && sig[12]<sig[10] && sig[10]<sig[11] && sig[11]<sig[8])
    return 39;
  if(sig[1]<sig[5] && sig[5]<sig[6] && sig[6]<sig[7] && sig[7]<sig[4] && sig[4]<sig[2] && sig[2]<sig[3] && sig[3]<sig[0] && sig[13]<sig[9] && sig[9]<sig[10] && sig[10]<sig[11] && sig[11]<sig[8] && sig[8]<sig[14] && sig[14]<sig[15] && sig[15]<sig[12])
    return 28;
  if(sig[1]<sig[2] && sig[2]<sig[7] && sig[7]<sig[3] && sig[3]<sig[0] && sig[0]<sig[5] && sig[5]<sig[6] && sig[6]<sig[4] && sig[13]<sig[11] && sig[11]<sig[14] && sig[14]<sig[15] && sig[15]<sig[12] && sig[12]<sig[9] && sig[9]<sig[10] && sig[10]<sig[8])
    return 130;
  return 0;
}
