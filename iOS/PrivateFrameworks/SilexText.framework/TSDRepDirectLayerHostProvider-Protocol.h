//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SilexText/NSObject-Protocol.h>

@class NSArray, TSDRep;
@protocol TSDRepDirectLayerHosting;

@protocol TSDRepDirectLayerHostProvider <NSObject>
- (void)directLayerHostUpdateRepOverlayLayers:(NSArray *)arg1;
- (void)directLayerHostUpdateAdditionalLayersAboveRepLayers:(NSArray *)arg1;
- (void)directLayerHostUpdateAdditionalLayersUnderRepLayers:(NSArray *)arg1;
- (id <TSDRepDirectLayerHosting>)directLayerHostForRep:(TSDRep *)arg1;
@end

