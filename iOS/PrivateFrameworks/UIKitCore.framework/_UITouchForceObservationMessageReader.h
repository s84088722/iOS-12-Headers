//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UITouchForceObservationMessageReading-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITouchForceObservationMessageReader : NSObject <_UITouchForceObservationMessageReading>
{
    _Bool _shouldFilterDueToSystemGestures;
    double _touchForce;
    double _timestamp;
    struct CGPoint _centroid;
}

@property(nonatomic) _Bool shouldFilterDueToSystemGestures; // @synthesize shouldFilterDueToSystemGestures=_shouldFilterDueToSystemGestures;
@property(nonatomic) struct CGPoint centroid; // @synthesize centroid=_centroid;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double touchForce; // @synthesize touchForce=_touchForce;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

