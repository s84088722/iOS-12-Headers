//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UILAConfigurationHistory.h>

#import <UIKitCore/_UIALAPropertySource-Protocol.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIALAConfigurationHistory : _UILAConfigurationHistory <_UIALAPropertySource>
{
    _Bool _hasEstablishedAlignmentValues;
    _Bool _inAlignmentLayoutUpdateSection;
    unsigned long long _alignment;
}

@property(nonatomic, getter=isInAlignmentLayoutUpdateSection) _Bool inAlignmentLayoutUpdateSection; // @synthesize inAlignmentLayoutUpdateSection=_inAlignmentLayoutUpdateSection;
@property(nonatomic) _Bool hasEstablishedAlignmentValues; // @synthesize hasEstablishedAlignmentValues=_hasEstablishedAlignmentValues;
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, nonatomic) NSSet *_newlyHiddenItems;
@property(readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property(nonatomic) long long axis;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool layoutFillsCanvas;
@property(nonatomic) _Bool layoutUsesCanvasMarginsWhenFilling;
@property(readonly) Class superclass;

@end

