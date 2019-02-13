//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAsset.h>

@class AVAssetInspectorLoader, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface AVDataAsset : AVAsset
{
    NSDictionary *_initializationOptions;
    AVAssetInspectorLoader *_loader;
    long long _allocateTracksOnceOnly;
    NSArray *_tracks;
}

+ (id)_getFigAssetCreationOptionsFromDataAssetInitializationOptions:(id)arg1 figAssetCreationFlags:(unsigned long long *)arg2;
+ (unsigned long long)_dataLengthLimit;
- (unsigned long long)referenceRestrictions;
- (id)tracks;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigFormatReader *)_formatReader;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (void)dealloc;
- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (id)initWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3;

@end

