//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDMediaInfo.h>

#import <iWorkImport/KNImplicitAmbientAnimating-Protocol.h>
#import <iWorkImport/TSDCompatibilityAwareMediaContainer-Protocol.h>
#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSDPlayableInfo-Protocol.h>

@class NSString, NSURL, TSDMediaStyle, TSPData;

__attribute__((visibility("hidden")))
@interface TSDMovieInfo : TSDMediaInfo <KNImplicitAmbientAnimating, TSDMixing, TSDCompatibilityAwareMediaContainer, TSDPlayableInfo>
{
    TSPData *mMovieData;
    NSURL *mMovieRemoteURL;
    TSPData *mImportedAuxiliaryMovieData;
    NSString *mImportedAuxiliaryMovieDataOriginalFilename;
    TSPData *mAudioOnlyImageData;
    double mStartTime;
    double mEndTime;
    double mPosterTime;
    TSPData *mPosterImageData;
    _Bool mPosterImageGeneratedWithAlphaSupport;
    struct CGSize mNaturalSize;
    long long mLoopOption;
    float mVolume;
    _Bool mAudioOnly;
    _Bool mStreaming;
    _Bool mNativeAudioRecording;
    TSDMediaStyle *mStyle;
}

+ (id)presetKinds;
+ (double)defaultPosterTimeForDuration:(double)arg1;
@property(nonatomic) long long loopOption; // @synthesize loopOption=mLoopOption;
@property(nonatomic, getter=isStreaming) _Bool streaming; // @synthesize streaming=mStreaming;
@property(retain, nonatomic) TSPData *posterImageData; // @synthesize posterImageData=mPosterImageData;
- (id)style;
- (void).cxx_destruct;
- (_Bool)willRenderContentViaImager;
- (id)typesToPromiseWhenCopyingSingleDrawable;
- (id)promisedTSPDataForType:(id)arg1;
- (id)promisedDataForType:(id)arg1;
- (id)mediaDataForDragging;
- (_Bool)needsDownload;
- (_Bool)supportsHyperlinks;
- (int)intValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1;
- (double)doubleValueForProperty:(int)arg1;
- (id)objectForProperty:(int)arg1;
- (_Bool)containsProperty:(int)arg1;
- (_Bool)supportsAttachedComments;
- (id)p_makePosterImageDataWithAVAsset:(id)arg1 inContext:(id)arg2 time:(double)arg3;
- (id)synchronouslyGenerateNewPosterImageForAsset:(id)arg1 time:(double)arg2;
- (id)synchronouslyGenerateDefaultPosterImageForContext:(id)arg1;
- (id)generateEmptyPosterImageForContext:(id)arg1;
- (id)makePosterImageGeneratorWithAVAsset:(id)arg1;
- (id)makeAVAssetWithOptions:(id)arg1;
- (id)makeAVAsset;
- (void)acceptVisitor:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)animationFilters;
@property(readonly, nonatomic) _Bool supportsLoopingBackAndForth;
@property(readonly, nonatomic) _Bool supportsLooping;
@property(readonly, nonatomic) _Bool supportsStartTimeAndEndTime;
- (_Bool)isAllowedInGroups;
- (_Bool)canChangeWrapType;
- (Class)repClass;
- (Class)layoutClass;
- (Class)styleClass;
- (void)p_setPropertiesFromLoadedAsset:(id)arg1;
- (_Bool)canBeReplaced;
- (_Bool)canBeMediaPlaceholder;
- (_Bool)canResetMediaSize;
- (struct CGSize)rawDataSize;
- (id)styleIdentifierTemplateForNewPreset;
- (id)presetKind;
- (_Bool)supportsStyleInspecting;
- (void)setStyle:(id)arg1;
- (id)mediaFileType;
- (id)mediaDisplayName;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 movieRemoteURL:(id)arg4 loadedAsset:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 movieData:(id)arg4 loadedAsset:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
@property(nonatomic, getter=isNativeAudioRecording) _Bool nativeAudioRecording;
@property(nonatomic, getter=isAudioOnly) _Bool audioOnly;
@property(nonatomic) float volume;
@property(nonatomic) double posterTime;
@property(nonatomic) double endTime;
@property(nonatomic) double startTime;
@property(retain, nonatomic) TSPData *audioOnlyImageData;
@property(copy, nonatomic) NSString *importedAuxiliaryMovieDataOriginalFilename;
@property(retain, nonatomic) TSPData *importedAuxiliaryMovieData;
@property(retain, nonatomic) NSURL *movieRemoteURL;
@property(retain, nonatomic) TSPData *movieData;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct MovieArchive *)arg1 archiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct MovieArchive *)arg1 unarchiver:(id)arg2;
- (_Bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
@property(readonly, nonatomic, getter=isImplicitAmbientAnimationInteractive) _Bool implicitAmbientAnimationInteractive;
- (id)newImplicitAmbientBuildRendererWithAnimatedBuild:(id)arg1 buildChunk:(id)arg2 session:(id)arg3 animatedSlideView:(id)arg4;
@property(readonly, nonatomic) _Bool canAddImplicitAmbientAnimations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

