//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoLoadingProgressObserving-Protocol.h>

@class NSString, SVKeyValueObserver;
@protocol SVPlayerItemObserving, SVVideoDurationObserving;

@interface SVVideoLoadingProgressObserver : NSObject <SVVideoLoadingProgressObserving>
{
    double _progress;
    CDUnknownBlockType _progressChangedBlock;
    id <SVPlayerItemObserving> _playerItemObserver;
    id <SVVideoDurationObserving> _durationObserver;
    SVKeyValueObserver *_loadedTimeRangesObserver;
}

@property(readonly, nonatomic) SVKeyValueObserver *loadedTimeRangesObserver; // @synthesize loadedTimeRangesObserver=_loadedTimeRangesObserver;
@property(readonly, nonatomic) id <SVVideoDurationObserving> durationObserver; // @synthesize durationObserver=_durationObserver;
@property(readonly, nonatomic) id <SVPlayerItemObserving> playerItemObserver; // @synthesize playerItemObserver=_playerItemObserver;
@property(copy, nonatomic, setter=onProgressChanged:) CDUnknownBlockType progressChangedBlock; // @synthesize progressChangedBlock=_progressChangedBlock;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)updateProgressWithLoadedTimeRanges:(id)arg1 duration:(double)arg2;
- (id)initWithPlayerItemObserver:(id)arg1 durationObserver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

