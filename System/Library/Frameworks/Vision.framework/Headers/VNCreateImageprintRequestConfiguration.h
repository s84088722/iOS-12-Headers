/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:03 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSNumber;

@interface VNCreateImageprintRequestConfiguration : VNImageBasedRequestConfiguration {

	NSNumber* _timeStamp;

}

@property (nonatomic,copy) NSNumber * timeStamp;              //@synthesize timeStamp=_timeStamp - In the implementation block
-(id)initWithRequestClass:(Class)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)timeStamp;
-(void)setTimeStamp:(NSNumber *)arg1 ;
@end
