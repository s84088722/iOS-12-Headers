//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSTStrokeRunArray : NSObject
{
    _Bool mHasCustomStrokes;
    double mMaxWidth;
    unsigned int mCount;
    unsigned int mAllocCount;
    unsigned int mLastLookup;
    struct TSTStrokeRun *mStrokes;
    struct _opaque_pthread_rwlock_t mRWLock;
}

@property(readonly, nonatomic) double maxWidth; // @synthesize maxWidth=mMaxWidth;
- (id)description;
- (void)dealloc;
- (id)initWithCount:(unsigned int)arg1;

@end

