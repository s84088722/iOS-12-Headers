/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:42:32 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDateInterval, CLSLocationOfInterest;

@interface CLSLocationOfInterestVisit : NSObject <NSSecureCoding> {

	NSUUID* _identifier;
	NSDateInterval* _visitInterval;
	double _confidence;
	CLSLocationOfInterest* _locationOfInterest;

}

@property (nonatomic,readonly) NSUUID * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDateInterval * visitInterval;                               //@synthesize visitInterval=_visitInterval - In the implementation block
@property (nonatomic,readonly) double confidence;                                            //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic,__weak) CLSLocationOfInterest * locationOfInterest;              //@synthesize locationOfInterest=_locationOfInterest - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithIdentifier:(id)arg1 visitInterval:(id)arg2 confidence:(double)arg3 ;
-(void)setLocationOfInterest:(CLSLocationOfInterest *)arg1 ;
-(CLSLocationOfInterest *)locationOfInterest;
-(NSDateInterval *)visitInterval;
-(NSUUID *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)confidence;
@end
