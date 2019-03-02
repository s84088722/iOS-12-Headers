/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:01 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@interface SaliencyExtrema : NSObject {

	CGPoint _extrema[4];
	float _extremeValues[4];

}
-(void)updateExtrema:(float)arg1 x:(int)arg2 y:(int)arg3 ;
-(CGRect)computeRectFromExtremaUsingThreshold:(float)arg1 vImage:(vImage_Buffer*)arg2 ;
-(id)init;
@end
