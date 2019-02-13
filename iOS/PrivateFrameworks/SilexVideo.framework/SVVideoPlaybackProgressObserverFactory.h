//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoPlaybackProgressObserverFactory-Protocol.h>

@class NSString;
@protocol SVVideoDurationObserverFactory, SVVideoPeriodicTimeObserverFactory;

@interface SVVideoPlaybackProgressObserverFactory : NSObject <SVVideoPlaybackProgressObserverFactory>
{
    id <SVVideoPeriodicTimeObserverFactory> _periodicTimeObserverFactory;
    id <SVVideoDurationObserverFactory> _durationObserverFactory;
}

@property(readonly, nonatomic) id <SVVideoDurationObserverFactory> durationObserverFactory; // @synthesize durationObserverFactory=_durationObserverFactory;
@property(readonly, nonatomic) id <SVVideoPeriodicTimeObserverFactory> periodicTimeObserverFactory; // @synthesize periodicTimeObserverFactory=_periodicTimeObserverFactory;
- (void).cxx_destruct;
- (id)createPlaybackProgressObserverForVideo:(id)arg1;
- (id)initWithPeriodicTimeObserverFactory:(id)arg1 durationObserverFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

