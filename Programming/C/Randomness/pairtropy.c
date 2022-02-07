f64 pairtropy(u8* data,size_t len){
//return  pair density 1.0+
 u64 dev[65536]={0};f64 lenm=1.0;
for(size_t i=0;i<len-1;i++)dev[(data[i]<<8)+data[i+1]]++;
for(size_t i=0;i<65536;i++){
f64 r=1.0/(dev[i]+1);lenm+=r*r*r;}
return ((65536.0/lenm));
}
