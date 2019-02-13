//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDAbstractLayout.h>

#import <TSReading/TSDAdaptiveLayout-Protocol.h>

@class TSDLayoutController, TSUPointerKeyDictionary;

@interface TSDRootLayout : TSDAbstractLayout <TSDAdaptiveLayout>
{
    TSDLayoutController *mLayoutController;
    _Bool mSupportsAdaptiveLayout;
    TSUPointerKeyDictionary *mShiftedObjects;
}

- (struct CGPoint)applyAdaptiveLayoutTo:(id)arg1 info:(id)arg2 offset:(struct CGPoint)arg3;
- (void)endDynamicAdaptiveLayout;
- (void)beginDynamicAdaptiveLayout;
- (id)p_shiftedObjects;
- (_Bool)isRootLayoutForInspectorGeometry;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (_Bool)providesGuidesForChildLayouts;
- (id)childLayoutsInRect:(struct CGRect)arg1;
- (id)layoutController;
- (void)dealloc;
- (id)initWithLayoutController:(id)arg1;

@end

