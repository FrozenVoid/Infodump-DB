static inline float
fastlog2 (float x)
{
  union { float f; uint32_t i; } vx = { x };
  union { uint32_t i; float f; } mx = { (vx.i & 0x007FFFFF) | 0x3f000000 };
  float y = vx.i;
  y *= 1.1920928955078125e-7f;

  return y - 124.22551499f
           - 1.498030302f * mx.f
           - 1.72587999f / (0.3520887068f + mx.f);
}

f32 entropy(u8* data,size_t len){
 u64 freq[256]={0};f32 ent=len*fastlog2(len); 
for(size_t i=0;i<len;i++)freq[data[i]]++;
for(size_t i=0;i<256;i++){
ent-= freq[i] * (fastlog2(freq[i]));
} return ent/len;}
