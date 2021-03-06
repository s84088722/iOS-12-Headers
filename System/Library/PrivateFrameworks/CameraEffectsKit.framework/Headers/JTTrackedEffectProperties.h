/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:59:38 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface JTTrackedEffectProperties : NSObject <NSCopying, NSSecureCoding> {

	BOOL _disableTracking;
	int _internalTrackingType;

}

@property (assign) int internalTrackingType;                             //@synthesize internalTrackingType=_internalTrackingType - In the implementation block
@property (getter=isTrackingDisabled) BOOL disableTracking;              //@synthesize disableTracking=_disableTracking - In the implementation block
@property (assign,nonatomic) int trackingType; 
+(BOOL)supportsSecureCoding;
-(int)trackingType;
-(void)setTrackingType:(int)arg1 ;
-(void)setDisableTracking:(BOOL)arg1 ;
-(void)setInternalTrackingType:(int)arg1 ;
-(BOOL)isTrackingDisabled;
-(int)internalTrackingType;
-(void)enableTrackingState:(BOOL)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

