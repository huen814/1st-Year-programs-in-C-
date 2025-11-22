#include<stdio.h>

float calculatePaintableArea(float length,float width, float height,float doors,float windows);
float calculateTotalCost(float paintableArea,float paintPrice,float laborRate);
void displayProjectSummary(float length,float width, float height, float wallArea, float excludedArea, float paintableArea, float totalProjectCost);


int main(){
    
    float l,w,h,d,win,ppg,lbr_per_sqr;
        
        printf("=== Room Painting Cost Calculator ===\n");
        printf("This program calculates the total cost to paint a room\n");
        printf("\n");
        printf("Enter room length (feet): ");
        scanf("%f",&l);
        printf("Enter room width (feet): ");
        scanf("%f",&w);
        printf("Enter room height (feet): ");
        scanf("%f",&h);
        printf("Enter total door area to exclude (sq ft): ");
        scanf("%f",&d);
        printf("Enter total window area to exclude (sq ft): ");
        scanf("%f",&win);
        printf("Enter paint price per gallon ($): ");
        scanf("%f",&ppg);
        printf("Enter labor rate per square foot ($): ");
        scanf("%f",&lbr_per_sqr);
    
    float wallArea = 2 * h * (l + w);
    float excludedArea = d + win;
    
        float paintableArea = calculatePaintableArea(l,w,h,d,win);
        float totalProjectCost = calculateTotalCost(paintableArea,ppg,lbr_per_sqr);
        displayProjectSummary(l,w,h,wallArea,excludedArea,paintableArea,totalProjectCost);
        
    return 0;
}
float calculatePaintableArea(float length,float width, float height, float doors, float windows){
    
    float wallArea, minus_doors_windows, paintableArea;
    
        printf("\nCalculating paintable area: \n");
        
        wallArea = 2 * height * (length + width);
        
        printf("Total wall area: %.2f sq ft\n",wallArea);
        
        minus_doors_windows = doors + windows;
        
        printf("Minus doors and windows: %.2f sq ft\n",minus_doors_windows);
        
        paintableArea = wallArea - doors - windows;
        
        printf("Net paintable area: %.2f sq ft\n",paintableArea);
        
    return paintableArea;
}
float calculateTotalCost(float paintableArea,float paintPrice,float laborRate){
    
        printf("\nCost breakdown:\n");
        
        float galloons_needed = paintableArea / 350.0;
        
        printf("Paint needed: %.2f gallons\n",galloons_needed);
        
        float paintCost = galloons_needed * paintPrice;
        
        printf("Paint cost: $%.2f\n",paintCost);
        
        float laborCost = paintableArea * laborRate;
        
        printf("Labor cost: $%.2f\n",laborCost);
        
        float totalProjectCost = paintCost + laborCost;
        
        printf("Total project cost: $%.2f\n",totalProjectCost);
        
        return totalProjectCost;
}
void displayProjectSummary(float length,float width, float height, float wallArea, float excludedArea, float paintableArea, float totalProjectCost){
        
        float roomVolume = length * width * height;
        
        printf("\n=== PROJECT SUMMARY ===\n");
        printf("Room Dimensions:\n");
        printf("  Length: %.2f feet\n",length);
        printf("  Width:  %.2f feet\n",width);
        printf("  Height: %.2f feet\n",height);
        printf("  Room Volume: %.2f cubic feet\n",roomVolume);
        printf("\n");
        printf("Painting Details:\n");
        printf("  Total wall area: %.2f sq ft\n",wallArea);
        printf("  Doors and windows: %.2f sq ft\n",excludedArea);
        printf("  Net paintable area: %.2f sq ft\n",paintableArea);
        printf("  Total project cost: $%.2f\n",totalProjectCost);
        printf("==============================");
        printf("\n\n");
        printf("Note: Paint coverage assumed at 350 sq ft per gallon");
}
        
    
    
    
    



