f32 pairtropy(u8* data,size_t len){
//return maxpairs/0pairs+1
 u64 dev[65536]={0};u64 lenm=1;
for(size_t i=0;i<len-1;i++)dev[(data[i]<<8)+data[i+1]]++;
for(size_t i=0;i<65536;i++){lenm+=(dev[i]==0);}
return (65536.0/lenm);
}
