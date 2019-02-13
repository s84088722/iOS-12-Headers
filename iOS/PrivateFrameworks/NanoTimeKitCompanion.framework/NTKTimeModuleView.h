//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKModuleView.h>

#import <NanoTimeKitCompanion/NTKTimeView-Protocol.h>

@class CLKFont, CLKUITimeLabelStyle, NSString, NTKDigitalTimeLabel;
@protocol NTKTimeModuleViewTapClient;

@interface NTKTimeModuleView : NTKModuleView <NTKTimeView>
{
    CLKUITimeLabelStyle *_defaultStyle;
    CLKFont *_timeTravelFont;
    _Bool _usesTimeTravelStyle;
    _Bool _frozen;
    NTKDigitalTimeLabel *_timeLabel;
    id <NTKTimeModuleViewTapClient> _tapDelegate;
}

@property(nonatomic) __weak id <NTKTimeModuleViewTapClient> tapDelegate; // @synthesize tapDelegate=_tapDelegate;
@property(readonly) NTKDigitalTimeLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic, getter=isFrozen) _Bool frozen; // @synthesize frozen=_frozen;
- (void).cxx_destruct;
@property(nonatomic) _Bool pausedForZooming;
- (void)setTimeOffset:(double)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setUsesTimeTravelStyle:(_Bool)arg1;
- (id)_timeTravelFont;
- (id)_defaultStyle;
- (struct CGRect)_idealTimeLabelFrame;
- (void)_layoutContentView;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

