//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexText/TSDRepDirectLayerHostProvider-Protocol.h>

@class CALayer, NSString;

@interface STTangierRepDirectLayerHostProvider : NSObject <TSDRepDirectLayerHostProvider>
{
    CALayer *_aboveRepsLayerHost;
    CALayer *_underRepsLayerHost;
    CALayer *_overlayLayerHost;
}

@property(retain, nonatomic) CALayer *overlayLayerHost; // @synthesize overlayLayerHost=_overlayLayerHost;
@property(retain, nonatomic) CALayer *underRepsLayerHost; // @synthesize underRepsLayerHost=_underRepsLayerHost;
@property(retain, nonatomic) CALayer *aboveRepsLayerHost; // @synthesize aboveRepsLayerHost=_aboveRepsLayerHost;
- (void).cxx_destruct;
- (void)directLayerHostUpdateRepOverlayLayers:(id)arg1;
- (void)directLayerHostUpdateAdditionalLayersAboveRepLayers:(id)arg1;
- (void)directLayerHostUpdateAdditionalLayersUnderRepLayers:(id)arg1;
- (id)directLayerHostForRep:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

