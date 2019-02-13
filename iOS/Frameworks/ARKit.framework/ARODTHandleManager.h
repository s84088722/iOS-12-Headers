//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ARODTHandleManager : NSObject
{
    _Bool _continuousDetection;
    _Bool _deterministicMode;
    long long _maximumNumberOfTrackedImages;
}

+ (long long)actualNumberOfImagesTracked:(long long)arg1;
@property(readonly, nonatomic) _Bool deterministicMode; // @synthesize deterministicMode=_deterministicMode;
@property(readonly, nonatomic) _Bool continuousDetection; // @synthesize continuousDetection=_continuousDetection;
@property(readonly, nonatomic) long long maximumNumberOfTrackedImages; // @synthesize maximumNumberOfTrackedImages=_maximumNumberOfTrackedImages;
- (void)releaseODTHandle;
- (id)initWithMaximumNumberOfTrackedImages:(long long)arg1 continuousDetection:(_Bool)arg2 deterministicMode:(_Bool)arg3;
- (id)initWithMaximumNumberOfTrackedImages:(long long)arg1;

@end

