//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BKSTouchStream : NSObject
{
    unsigned int _reference;
}

@property unsigned int reference; // @synthesize reference=_reference;
- (void)invalidate;
- (void)setEventDispatchMode:(unsigned char)arg1 ambiguityRecommendation:(unsigned char)arg2 lastTouchTimestamp:(double)arg3;
- (void)setEventDispatchMode:(unsigned char)arg1 lastTouchTimestamp:(double)arg2;
- (id)initWithContextID:(unsigned int)arg1 displayUUID:(id)arg2 identifier:(unsigned char)arg3 policy:(id)arg4;

@end

