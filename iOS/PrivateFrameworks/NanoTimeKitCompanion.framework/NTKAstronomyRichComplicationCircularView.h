//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKAstronomyRichComplicationContentView;

@interface NTKAstronomyRichComplicationCircularView : NTKRichComplicationCircularBaseView
{
    NTKAstronomyRichComplicationContentView *_astronomyContentView;
}

- (void).cxx_destruct;
- (void)renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_applyPausedUpdate;
- (void)layoutSubviews;
- (id)init;

@end

