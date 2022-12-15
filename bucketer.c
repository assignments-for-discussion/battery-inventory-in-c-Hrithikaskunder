#include <stdio.h>
#include <assert.h>
int i;
struct CountsByUsage {
  int lowCount;
  int mediumCount;
  int highCount;
};

struct CountsByUsage countBatteriesByUsage(const int* cycles, int nBatteries) {
  struct CountsByUsage counts = {0, 0, 0};
  return counts;
}

void testBucketingByNumberOfCycles() {
  const int chargeCycleCounts[] = {100, 300, 500, 600, 900, 1000};
  const int numberOfBatteries = sizeof(chargeCycleCounts) / sizeof(chargeCycleCounts[0]);
  printf("Counting batteries by usage cycles...\n");
  
  struct CountsByUsage counts = countBatteriesByUsage(chargeCycleCounts, numberOfBatteries);
//   assert(counts.lowCount == 2);
//   assert(counts.mediumCount == 3);
//   assert(counts.highCount == 1);
for(i=0;i<sizeof(chargeCycleCounts);i++){
    
    if(chargeCycleCounts[i]<310 && chargeCycleCounts[i]>=0){
    
      assert(counts.lowCount == counts.lowCount+1 );
      
    }
    else if(chargeCycleCounts[i]>=310 && chargeCycleCounts[i]<929){
    
      assert(counts.mediumCount == counts.mediumCount+1 );
    
    }
    else if(chargeCycleCounts[i]>=930){
    
      assert(counts.highCount == counts.highCount+1 );
    }
    
    else {
    print("invalid charge cycle counts");
      i++;
    }
  printf("Done counting :)\n");
}
}

int main() {
  testBucketingByNumberOfCycles();
  return 0;
}
