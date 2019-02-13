//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKZeusComplicationView.h>

#import <NanoTimeKitCompanion/NTKMoonPhaseComplicationDisplay-Protocol.h>

@class NSString, UIImageView;
@protocol NTKComplicationDisplayObserver;

@interface NTKZeusMoonPhaseComplicationView : NTKZeusComplicationView <NTKMoonPhaseComplicationDisplay>
{
    UIImageView *_imageView;
    long long _moonPhaseHemisphere;
    unsigned long long _phaseNumber;
}

- (void).cxx_destruct;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3;
- (void)applyPalette:(id)arg1;
- (void)_updateImages;
- (void)setPhaseNumber:(unsigned long long)arg1 hemisphere:(long long)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) _Bool canUseCurvedText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end

