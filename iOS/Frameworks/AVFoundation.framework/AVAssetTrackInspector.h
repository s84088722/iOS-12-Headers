//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVFigObjectInspector.h>

#import <AVFoundation/AVAsynchronousKeyValueLoading-Protocol.h>

@class AVWeakReference, NSArray, NSDictionary, NSLocale, NSString;

__attribute__((visibility("hidden")))
@interface AVAssetTrackInspector : AVFigObjectInspector <AVAsynchronousKeyValueLoading>
{
    AVWeakReference *_weakReference;
    long long _synthesizeMediaCharacteristicsOnce;
    NSArray *_cachedMediaCharacteristics;
}

+ (id)assetTrackInspectorWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;
@property(readonly, nonatomic) _Bool hasProtectedContent;
@property(readonly, nonatomic, getter=_trackReferences) NSDictionary *trackReferences;
@property(readonly, nonatomic, getter=isExcludedFromAutoselectionInTrackGroup) _Bool excludedFromAutoselectionInTrackGroup;
@property(readonly, nonatomic) long long provisionalAlternateGroupID;
@property(readonly, nonatomic) long long defaultAlternateGroupID;
@property(readonly, nonatomic) long long alternateGroupID;
- (id)metadataForFormat:(id)arg1;
@property(readonly, nonatomic) NSArray *availableMetadataFormats;
@property(readonly, nonatomic) NSArray *commonMetadata;
- (CDStruct_1b6d18a9)samplePresentationTimeForTrackTime:(CDStruct_1b6d18a9)arg1;
- (id)segmentForTrackTime:(CDStruct_1b6d18a9)arg1;
@property(readonly, copy, nonatomic) NSArray *segments;
@property(readonly, nonatomic) CDStruct_1b6d18a9 minSampleDuration;
@property(readonly, nonatomic) float nominalFrameRate;
@property(readonly, nonatomic) NSDictionary *loudnessInfo;
@property(readonly, nonatomic) float preferredVolume;
@property(readonly, nonatomic) long long layer;
@property(readonly, nonatomic) struct CGAffineTransform preferredTransform;
@property(readonly, nonatomic) struct CGSize dimensions;
@property(readonly, nonatomic) struct CGSize naturalSize;
@property(readonly, nonatomic) NSLocale *locale;
@property(readonly, nonatomic) NSString *extendedLanguageTag;
@property(readonly, nonatomic) NSArray *mediaCharacteristics;
@property(readonly, nonatomic) NSString *languageCode;
@property(readonly, nonatomic) float estimatedDataRate;
@property(readonly, nonatomic) int naturalTimeScale;
@property(readonly, nonatomic) _Bool requiresFrameReordering;
@property(readonly, nonatomic) CDStruct_e83c9415 mediaDecodeTimeRange;
@property(readonly, nonatomic) CDStruct_e83c9415 mediaPresentationTimeRange;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange;
@property(readonly, nonatomic) long long totalSampleDataLength;
@property(readonly, nonatomic, getter=isSelfContained) _Bool selfContained;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic) int playabilityValidationResult;
@property(readonly, nonatomic, getter=isDecodable) _Bool decodable;
@property(readonly, nonatomic, getter=isPlayable) _Bool playable;
@property(readonly, nonatomic) NSArray *formatDescriptions;
@property(readonly, nonatomic) NSString *mediaType;
@property(readonly, nonatomic, getter=_figAssetTrack) struct OpaqueFigAssetTrack *figAssetTrack;
@property(readonly, nonatomic, getter=_figTrackReader) struct OpaqueFigTrackReader *figTrackReader;
@property(readonly, nonatomic, getter=_figMediaType) unsigned int figMediaType;
@property(readonly, nonatomic) int trackID;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)_weakReference;
- (id)init;
- (id)_initWithAsset:(id)arg1 trackIndex:(long long)arg2;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;

@end

