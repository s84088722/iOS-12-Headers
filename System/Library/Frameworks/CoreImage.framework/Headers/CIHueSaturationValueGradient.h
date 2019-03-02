/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:23:42 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class NSNumber;

@interface CIHueSaturationValueGradient : CIFilter {

	NSNumber* inputValue;
	NSNumber* inputRadius;
	NSNumber* inputSoftness;
	NSNumber* inputDither;
	id inputColorSpace;

}

@property (nonatomic,retain) NSNumber * inputValue; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputSoftness; 
@property (nonatomic,retain) NSNumber * inputDither; 
@property (nonatomic,retain) id inputColorSpace; 
+(id)customAttributes;
-(id)inputColorSpace;
-(void)setInputColorSpace:(id)arg1 ;
-(NSNumber *)inputSoftness;
-(id)_kernelD;
-(void)setInputSoftness:(NSNumber *)arg1 ;
-(NSNumber *)inputDither;
-(void)setInputDither:(NSNumber *)arg1 ;
-(NSNumber *)inputValue;
-(id)_kernel;
-(void)setInputValue:(NSNumber *)arg1 ;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius;
-(id)outputImage;
@end
