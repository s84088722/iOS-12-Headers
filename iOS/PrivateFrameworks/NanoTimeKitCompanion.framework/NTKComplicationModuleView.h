//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKModuleView.h>

#import <NanoTimeKitCompanion/NTKComplicationDisplay-Protocol.h>

@class NSString;
@protocol NTKComplicationDisplayObserver;

@interface NTKComplicationModuleView : NTKModuleView <NTKComplicationDisplay>
{
    _Bool canUseCurvedText;
    _Bool _isXL;
    id <NTKComplicationDisplayObserver> displayObserver;
}

+ (id)_extraLargeStopwatchImageProvider;
+ (id)_modularSmallStopwatchImageProvider;
+ (id)_extraLargeTimerImageProvider;
+ (id)_modularSmallTimerImageProvider;
+ (id)_extraLargeAlarmImageProvider;
+ (id)_modularSmallAlarmImageProvider;
+ (id)largeModuleViewForComplicationType:(unsigned long long)arg1;
+ (id)smallModuleViewForComplicationType:(unsigned long long)arg1;
@property(nonatomic) _Bool canUseCurvedText; // @synthesize canUseCurvedText;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver; // @synthesize displayObserver;
- (void).cxx_destruct;
- (void)_setTypographicTracking:(double)arg1 andFont:(id)arg2 onAttributedString:(id *)arg3 inRange:(struct _NSRange)arg4;
- (id)_attributedStringWithText:(id)arg1 typographicTracking:(double)arg2 baseFont:(id)arg3;
- (id)_attributeEnDashesWithinString:(id)arg1 typographicTracking:(double)arg2 baseFont:(id)arg3;
- (id)_newImageViewSubview;
- (id)_newLabelSubviewWithFont:(id)arg1;
- (id)_newLabelSubview;
@property(nonatomic) _Bool isXL; // @synthesize isXL=_isXL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end

