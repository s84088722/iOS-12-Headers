/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:13 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSNumber;

@interface CMMetMinute : NSObject <NSSecureCoding, NSCopying> {

	NSDate* fStartDate;
	NSNumber* fAverageIntensity;

}

@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSNumber * averageIntensity; 
+(BOOL)supportsSecureCoding;
-(id)initWithStartDate:(id)arg1 averageIntensity:(id)arg2 ;
-(NSNumber *)averageIntensity;
-(NSDate *)startDate;
-(id)initWithSample:(CLMetMinute)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
