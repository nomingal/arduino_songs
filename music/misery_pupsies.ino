const int buzzer = 8;

const int NC1 = 33, NCS1 = 35, ND1 = 37, NDS1 = 39;
const int NE1 = 41, NF1 = 44, NFS1 = 46, NG1 = 49;
const int NGS1 = 52, NA1 = 55, NAS1 = 58, NB1 = 62;

const int NC2 = 65, NCS2 = 69, ND2 = 73, NDS2 = 78;
const int NE2 = 82, NF2 = 87, NFS2 = 93, NG2 = 98;
const int NGS2 = 104, NA2 = 110, NAS2 = 117, NB2 = 123;

const int NC3 = 131, NCS3 = 139, ND3 = 147, NDS3 = 156;
const int NE3 = 165, NF3 = 175, NFS3 = 185, NG3 = 196;
const int NGS3 = 208, NA3 = 220, NAS3 = 233, NB3 = 247;

const int NC4 = 262, NCS4 = 277, ND4 = 294, NDS4 = 311;
const int NE4 = 330, NF4 = 349, NFS4 = 370, NG4 = 392;
const int NGS4 = 415, NA4 = 440, NAS4 = 466, NB4 = 494;

const int NC5 = 523, NCS5 = 554, ND5 = 587, NDS5 = 622;
const int NE5 = 659, NF5 = 698, NFS5 = 740, NG5 = 784;
const int NGS5 = 831, NA5 = 880, NAS5 = 932, NB5 = 988;
const int NC6 = 1047;

const int melody[] = {
  NB2, NB3, NB2, NB3, NB2, NB3, NB2, NB3, 
  NDS2, NDS3, NDS2, NDS3, NDS2, NDS3, NDS2, NDS3, 
  NGS2, NGS3, NGS2, NGS3, NGS2, NGS3, NGS2, NGS3,
  NFS2, NFS3, NFS2, NFS3, NFS2, NFS3, NFS2, NFS3,
  
  NB2, NB3, NB2, NB3, NB4, NDS5, NFS5, NDS5,
  NDS2, NDS3, NDS2, NDS3, NCS5, NDS5, NCS5, NB4,
  NGS2, NGS3, NGS2, NGS3, NFS4, NB4, NCS5, NB4,
  NFS2, NFS3, NFS4, NFS3, NB4, NFS3, NFS2, NFS3,
  
  NB4, NB3, NDS4, NB3, NB4, NDS5, NFS5, NDS5,
  NAS4, NDS3, NDS4, NDS3, NCS5, NDS5, NGS4, NFS4,
  NGS4, NB4, NGS2, NGS4, NGS2, NGS3, NGS4, NFS4,
  NGS4, NB4, NFS2, NGS4, NDS5, NCS5, NB4, NCS5,

  NB4, NB3, NB2, NFS5, NDS5, NB3, NDS5, NE5, 
  NDS5, NCS5, NDS2, NB4, NFS5, NFS5, NDS2, NDS5, 
  NGS2, NGS3, NCS5, NDS5, NGS2, NB4, NCS5, NB4,
  NFS2, NFS3, NFS2, NB4, NDS5, NCS5, NB4, NCS5, NB4
};

const int durations[] = {
  240, 240, 240, 240, 240, 240, 240, 240,
  240, 240, 240, 240, 240, 240, 240, 240,
  240, 240, 240, 240, 240, 240, 240, 240,
  240, 240, 240, 240, 240, 240, 240, 240,

  240, 240, 240, 240, 240, 240, 240, 240,
  240, 240, 240, 240, 240, 240, 240, 240,
  240, 240, 240, 240, 240, 240, 240, 240,
  240, 240, 240, 240, 240, 240, 240, 240,
  
  240, 240, 240, 240, 240, 240, 240, 240,
  240, 240, 240, 240, 240, 240, 240, 240,
  240, 240, 240, 240, 240, 240, 240, 240,
  240, 240, 240, 240, 240, 240, 240, 240,

  240, 240, 240, 240, 240, 240, 240, 240,
  240, 240, 240, 240, 240, 240, 240, 240,
  240, 240, 240, 240, 240, 240, 240, 240,
  240, 240, 240, 240, 240, 240, 240, 240, 240
};

const int pauses[] = {
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,

  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,

  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0
};

void setup() {
}

void loop() {
  int count = sizeof(melody) / sizeof(melody[0]);

  for (int i = 0; i < count; i++) {
    tone(buzzer, melody[i]);
    delay(durations[i]);
    noTone(buzzer);
    delay(pauses[i]);
  }

  delay(1000);
}
