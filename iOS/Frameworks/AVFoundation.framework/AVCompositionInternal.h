//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetInspector, AVAssetInspectorLoader, NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVCompositionInternal : NSObject
{
    struct OpaqueFigMutableComposition *mutableComposition;
    long long formatReaderInitializationOnce;
    long long assetInspectorInitializationOnce;
    long long tracksInitializationOnce;
    struct OpaqueFigFormatReader *formatReader;
    AVAssetInspectorLoader *assetInspectorLoader;
    AVAssetInspector *assetInspector;
    struct CGSize naturalSize;
    NSDictionary *URLAssetInitializationOptions;
    NSMutableArray *tracks;
    long long figAssetInitializationOnce;
    struct OpaqueFigAsset *figAsset;
}

@end

