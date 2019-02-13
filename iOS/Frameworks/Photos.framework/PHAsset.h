//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHObject.h>

#import <Photos/PLAssetID-Protocol.h>
#import <Photos/_PLImageLoadingAsset-Protocol.h>

@class CLLocation, NSArray, NSData, NSDate, NSSet, NSString, NSURL;

@interface PHAsset : PHObject <_PLImageLoadingAsset, PLAssetID>
{
    CLLocation *_cachedLocation;
    NSString *_cloudAssetGUID;
    NSSet *_sceneClassifications;
    _Bool _hidden;
    _Bool _favorite;
    _Bool _cloudIsDeletable;
    _Bool _complete;
    _Bool _hasAdjustments;
    _Bool _assetDescriptionWasSet;
    _Bool _canUseLocationCoordinateForLocation;
    _Bool _isPhotoIris;
    short _savedAssetType;
    unsigned short _videoCpVisibilityState;
    unsigned short _playbackVariation;
    int _avalanchePickType;
    int _exifOrientation;
    float _overallAestheticScore;
    float _hdrGain;
    long long _playbackStyle;
    long long _mediaType;
    unsigned long long _mediaSubtypes;
    unsigned long long _pixelWidth;
    unsigned long long _pixelHeight;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    double _duration;
    NSString *_burstIdentifier;
    unsigned long long _localResourcesState;
    unsigned long long _groupingState;
    NSString *_groupingUUID;
    NSData *_locationData;
    NSString *_uniformTypeIdentifier;
    unsigned long long _persistenceState;
    unsigned long long _thumbnailIndex;
    NSString *_directory;
    NSString *_filename;
    NSDate *_trashedDate;
    NSDate *_adjustmentTimestamp;
    NSString *_originalColorSpace;
    NSData *_imageRequestHints;
    double _curationScore;
    long long _cloudPlaceholderKind;
    long long _videoCpDurationValue;
    NSArray *_faceRegions;
    double _faceAreaMinX;
    double _faceAreaMaxX;
    double _faceAreaMinY;
    double _faceAreaMaxY;
    id _faceAdjustmentVersion;
    struct CLLocationCoordinate2D _locationCoordinate;
    struct CGRect _preferredCropRect;
    struct CGRect _acceptableCropRect;
}

+ (_Bool)isOriginalVideoComplementKnownUnsupportedFormatForAsset:(id)arg1 failureInfo:(id *)arg2;
+ (_Bool)isOriginalKnownUnsupportedFormatForAsset:(id)arg1 failureInfo:(id *)arg2;
+ (id)originalUniformTypeIdentifierForAsset:(id)arg1;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)_descriptionForVariationSuggestionStates:(unsigned long long)arg1;
+ (id)_descriptionForVariationSuggestionType:(unsigned long long)arg1;
+ (id)fetchKeyAssetForSceneIdentifier:(unsigned int)arg1 withConfidenceThreshold:(double)arg2;
+ (id)fetchQuarantinedAsssetsWithOptions:(id)arg1;
+ (id)fetchAssetsForFaceGroups:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsForFaces:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsForPersons:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithOptions:(id)arg1;
+ (id)fetchKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithBurstIdentifier:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithALAssetURLs:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithCloudIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithMediaType:(long long)arg1 options:(id)arg2;
+ (id)fetchAssetsWithoutOriginalsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsInImportSessions:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsInBoundingBoxWithTopLeftLocation:(id)arg1 bottomRightLocation:(id)arg2 options:(id)arg3;
+ (id)fetchAssetsGroupedByFaceUUIDForFaces:(id)arg1;
+ (long long)countOfAssetsWithLocationFromUUIDs:(id)arg1;
+ (_Bool)_isLivePhotoWithPhotoIris:(_Bool)arg1 hasAdjustments:(_Bool)arg2 videoCpDuration:(long long)arg3 videoCPVisibility:(unsigned short)arg4 sourceType:(unsigned long long)arg5;
+ (void)_batchFetchAdditionalPropertySetsIfNeeded:(id)arg1 forAssets:(id)arg2;
+ (id)_unfetchedPropertySetsForAssets:(id)arg1 fromPropertySets:(id)arg2;
+ (id)propertySetAccessorsByPropertySet;
+ (Class)propertySetClassForPropertySet:(id)arg1;
+ (id)identifierCode;
+ (id)_transformMediaSubtypeComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)entityKeyMap;
+ (_Bool)managedObjectSupportsMontage;
+ (_Bool)managedObjectSupportsSavedAssetType;
+ (_Bool)managedObjectSupportsBursts;
+ (_Bool)managedObjectSupportsVisibilityState;
+ (_Bool)managedObjectSupportsHiddenState;
+ (_Bool)managedObjectSupportsTrashedState;
+ (id)fetchType;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)_composePropertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)imageManagerPropertiesToFetch;
+ (id)faceWorkerPropertiesToFetch;
+ (id)locationPropertiesToFetch;
+ (id)corePropertiesToFetch;
+ (id)propertySetsForPropertyFetchHints:(unsigned long long)arg1;
+ (unsigned long long)propertyFetchHintsForPropertySets:(id)arg1;
+ (unsigned long long)_extendedPropertyFetchHintsForPropertySets:(id)arg1;
+ (id)_fetchAssetsMatchingAdjustedFingerPrint:(id)arg1;
+ (id)_fetchAssetsMatchingMasterFingerPrint:(id)arg1;
+ (void)_computeFingerPrintsOfAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)pl_managedAssetsForAssets:(id)arg1;
+ (id)fetchCuratedAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchReducedCuratedAssetsInMemory:(id)arg1 options:(id)arg2;
+ (id)fetchRepresentativeAssetsInAssetCollection:(id)arg1;
+ (id)fetchMovieCuratedAssetsInMemory:(id)arg1;
+ (id)fetchCuratedAssetsInAssetCollection:(id)arg1 referencePersons:(id)arg2;
+ (id)fetchExtendedCuratedAssetsInAssetCollection:(id)arg1;
+ (id)fetchCuratedAssetsInAssetCollection:(id)arg1;
+ (id)fetchKeyCuratedAssetInAssetCollection:(id)arg1 referencePersons:(id)arg2;
+ (id)fetchKeyCuratedAssetInAssetCollection:(id)arg1 referenceAsset:(id)arg2;
+ (id)_fetchRepresentativeAssetInAssetCollection:(id)arg1;
+ (id)_fetchCuratedAssetInAssetCollection:(id)arg1 referenceAsset:(id)arg2 referencePersons:(id)arg3 fetchOptions:(id)arg4 onlyKey:(_Bool)arg5;
+ (id)_requestResultInfoForImageInfo:(id)arg1 videoInfo:(id)arg2 adjustmentInfo:(id)arg3 renderingError:(id)arg4;
+ (void)_inq_trimToMostRecentImageManagerMessages;
+ (id)_currentTimestampString;
+ (void)_inq_recordRequestID:(long long)arg1;
+ (id)_inq_imageManagerRequestMessagesByRequestIDForAssetUUID:(id)arg1 requestID:(long long)arg2;
+ (id)_inq_highestImageManagerRequestIDsObserved;
+ (id)_inq_imageManagerRequestLogsByAssetUUID;
+ (id)_imageManagerRequestLoggingQueue;
@property(readonly, nonatomic) _Bool isPhotoIris; // @synthesize isPhotoIris=_isPhotoIris;
@property(nonatomic) _Bool canUseLocationCoordinateForLocation; // @synthesize canUseLocationCoordinateForLocation=_canUseLocationCoordinateForLocation;
@property(nonatomic) _Bool assetDescriptionWasSet; // @synthesize assetDescriptionWasSet=_assetDescriptionWasSet;
@property(readonly, nonatomic) id faceAdjustmentVersion; // @synthesize faceAdjustmentVersion=_faceAdjustmentVersion;
@property(readonly, nonatomic) double faceAreaMaxY; // @synthesize faceAreaMaxY=_faceAreaMaxY;
@property(readonly, nonatomic) double faceAreaMinY; // @synthesize faceAreaMinY=_faceAreaMinY;
@property(readonly, nonatomic) double faceAreaMaxX; // @synthesize faceAreaMaxX=_faceAreaMaxX;
@property(readonly, nonatomic) double faceAreaMinX; // @synthesize faceAreaMinX=_faceAreaMinX;
@property(readonly, nonatomic) NSArray *faceRegions; // @synthesize faceRegions=_faceRegions;
@property(readonly, nonatomic) struct CGRect acceptableCropRect; // @synthesize acceptableCropRect=_acceptableCropRect;
@property(readonly, nonatomic) struct CGRect preferredCropRect; // @synthesize preferredCropRect=_preferredCropRect;
@property(readonly, nonatomic) float hdrGain; // @synthesize hdrGain=_hdrGain;
@property(readonly, nonatomic) unsigned short playbackVariation; // @synthesize playbackVariation=_playbackVariation;
@property(readonly, nonatomic) struct CLLocationCoordinate2D locationCoordinate; // @synthesize locationCoordinate=_locationCoordinate;
@property(readonly, nonatomic) long long videoCpDurationValue; // @synthesize videoCpDurationValue=_videoCpDurationValue;
@property(readonly, nonatomic) _Bool hasAdjustments; // @synthesize hasAdjustments=_hasAdjustments;
@property(readonly, nonatomic) long long cloudPlaceholderKind; // @synthesize cloudPlaceholderKind=_cloudPlaceholderKind;
@property(readonly, nonatomic) float overallAestheticScore; // @synthesize overallAestheticScore=_overallAestheticScore;
@property(readonly, nonatomic) double curationScore; // @synthesize curationScore=_curationScore;
@property(readonly, nonatomic) NSData *imageRequestHints; // @synthesize imageRequestHints=_imageRequestHints;
@property(readonly, nonatomic) NSString *originalColorSpace; // @synthesize originalColorSpace=_originalColorSpace;
@property(readonly, nonatomic) int exifOrientation; // @synthesize exifOrientation=_exifOrientation;
@property(readonly, nonatomic) _Bool complete; // @synthesize complete=_complete;
@property(readonly, nonatomic) NSDate *adjustmentTimestamp; // @synthesize adjustmentTimestamp=_adjustmentTimestamp;
@property(readonly, nonatomic) NSDate *trashedDate; // @synthesize trashedDate=_trashedDate;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, nonatomic) NSString *directory; // @synthesize directory=_directory;
@property(readonly, nonatomic) unsigned long long thumbnailIndex; // @synthesize thumbnailIndex=_thumbnailIndex;
@property(readonly, nonatomic) unsigned long long persistenceState; // @synthesize persistenceState=_persistenceState;
@property(readonly, nonatomic) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;
@property(readonly, nonatomic) _Bool cloudIsDeletable; // @synthesize cloudIsDeletable=_cloudIsDeletable;
@property(readonly, nonatomic) unsigned short videoCpVisibilityState; // @synthesize videoCpVisibilityState=_videoCpVisibilityState;
@property(readonly, nonatomic) short savedAssetType; // @synthesize savedAssetType=_savedAssetType;
@property(readonly, nonatomic) NSData *locationData; // @synthesize locationData=_locationData;
@property(readonly, nonatomic) NSString *groupingUUID; // @synthesize groupingUUID=_groupingUUID;
@property(readonly, nonatomic) unsigned long long groupingState; // @synthesize groupingState=_groupingState;
@property(readonly, nonatomic) int avalanchePickType; // @synthesize avalanchePickType=_avalanchePickType;
@property(readonly, nonatomic) unsigned long long localResourcesState; // @synthesize localResourcesState=_localResourcesState;
@property(readonly, nonatomic) NSString *burstIdentifier; // @synthesize burstIdentifier=_burstIdentifier;
@property(readonly, nonatomic, getter=isFavorite) _Bool favorite; // @synthesize favorite=_favorite;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) unsigned long long pixelHeight; // @synthesize pixelHeight=_pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth; // @synthesize pixelWidth=_pixelWidth;
@property(readonly, nonatomic) unsigned long long mediaSubtypes; // @synthesize mediaSubtypes=_mediaSubtypes;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) long long playbackStyle; // @synthesize playbackStyle=_playbackStyle;
- (void).cxx_destruct;
- (void)_reportUsage;
@property(readonly, nonatomic) NSString *variationSuggestionStatesDetails;
@property(readonly, nonatomic) NSString *metadataDebugDescription;
@property(readonly, nonatomic) NSString *resourcesDebugDescription;
- (id)detailedDebugDescriptionInLibrary:(id)arg1;
- (id)adjustmentsDebugMetadata;
- (id)__dictionaryWithContentsOfData:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)fileURLForPenultimateFullsizeRenderVideo;
- (id)fileURLForPenultimateFullsizeRenderImage;
- (id)fileURLForVideoComplementFile;
- (id)fileURLForFullsizeRenderVideo;
- (id)fileURLForSubstandardFullsizeRenderImage;
- (id)fileURLForFullsizeRenderImage;
- (id)fileURLForUnadjustedFullsizeImage;
- (id)fileURLForAdjustedFullsizeImage;
- (id)fileURLForFullsizeImage;
- (id)fileURLForAdjustmentsDirectory;
- (id)fileURLForMutationsDirectory;
- (id)pathForAdjustmentDirectory;
- (id)pathForMutationsDirectory;
- (id)fileURLForDiagnosticFile;
- (id)fileURLForXMPFile;
- (id)fileURLForVideoPreviewFile;
- (id)fileURLForPrebakedPortraitScrubberThumbnails;
- (id)fileURLForPrebakedLandscapeScrubberThumbnails;
- (id)fileURLForMediumPreview;
- (id)fileURLForLargePreview;
- (id)_fileURLForMetadataWithExtension:(id)arg1;
- (id)mainFileURL;
- (id)adjustmentVersion;
@property(readonly, nonatomic) _Bool canPerformSharingAction;
- (_Bool)canPerformEditOperation:(long long)arg1;
- (void)getFingerPrintForAssetType:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getMasterFingerPrintWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isTrashed) _Bool trashed;
@property(readonly, nonatomic) _Bool isTimelapsePlaceholder;
@property(readonly, nonatomic) _Bool isIncludedInCloudFeeds;
@property(readonly, nonatomic) _Bool isIncludedInMoments;
@property(readonly, nonatomic) _Bool isHighFrameRateVideo;
@property(readonly, nonatomic) _Bool isStreamedVideo;
@property(readonly, copy, nonatomic) NSString *cloudIdentifier;
@property(readonly, nonatomic) _Bool isCloudPlaceholder;
@property(readonly, nonatomic) _Bool isCloudPhotoLibraryAsset;
- (long long)cloudSharedAssetPlaceholderKind;
@property(readonly, nonatomic) _Bool isMomentSharedAsset;
@property(readonly, nonatomic) _Bool isCloudSharedAsset;
@property(readonly, nonatomic) _Bool isPhotoStreamPhoto;
@property(readonly, nonatomic) _Bool isAudio;
@property(readonly, nonatomic) _Bool isPhoto;
@property(readonly, nonatomic) _Bool isLoopingVideo;
@property(readonly, nonatomic) _Bool isVideo;
@property(readonly, nonatomic) _Bool hasPhotoColorAdjustments;
@property(readonly, nonatomic) _Bool canPlayLoopingVideo;
@property(readonly, nonatomic) _Bool canPlayMirror;
@property(readonly, nonatomic) _Bool canPlayLongExposure;
@property(readonly, nonatomic) _Bool canPlayAutoloop;
@property(readonly, nonatomic) _Bool canPlayPhotoIris;
@property(readonly, nonatomic) _Bool isPhotoIrisPlaceholder;
@property(readonly, nonatomic) _Bool isPrimaryInGroup;
@property(readonly, nonatomic) _Bool isPartOfGroup;
@property(readonly, nonatomic) _Bool isPartOfBurst;
@property(readonly, nonatomic) _Bool representsBurst;
@property(readonly, nonatomic) unsigned long long burstSelectionTypes;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) NSString *thumbnailIdentifier;
- (void)generateLargeThumbnailFileIfNecessary;
- (id)managedAssetForPhotoLibrary:(id)arg1;
- (_Bool)isInFlight;
- (id)pathForNonAdjustedSRGBLargeThumbnailFile;
- (id)pathForAdjustedSRGBLargeThumbnailFile;
- (id)pathForSRGBLargeThumbnailFile;
- (id)pathForVideoPreviewFile;
- (id)pathForMediumThumbnailFile;
- (id)pathForLargeThumbnailFile;
- (id)pathForNonAdjustedFullsizeImageFile;
- (id)pathForFullsizeRenderImageFile;
- (id)pathForAdjustmentDataFile;
- (id)pathForAdjustmentFile;
- (id)pathForPenultimateFullsizeRenderVideoFile;
- (id)pathForPenultimateFullsizeRenderImageFile;
- (id)pathForSubstandardFullsizeRenderImageFile;
- (id)pathForOriginalFile;
- (id)originalFileName;
- (int)orientation;
- (struct CGSize)imageSize;
- (short)kindSubtype;
- (short)kind;
- (unsigned long long)effectiveThumbnailIndex;
- (_Bool)hasLegacyAdjustments;
- (id)debugFilename;
- (_Bool)isOriginalSRGB;
- (struct CGSize)originalImageSize;
- (long long)originalImageOrientation;
@property(readonly, nonatomic) NSURL *ALAssetURL;
- (id)assetsLibraryURL;
@property(readonly, nonatomic) double aspectRatio;
- (id)pl_photoLibrary;
- (Class)changeRequestClass;
- (_Bool)isLocatedAtCoordinates:(struct CLLocationCoordinate2D)arg1;
@property(readonly, nonatomic) _Bool isRAW;
@property(readonly, nonatomic) _Bool isAnimatedGIF;
- (_Bool)isPrimaryImageFormat;
@property(readonly, nonatomic) _Bool isJPEG;
@property(readonly, nonatomic) _Bool isHDVideo;
@property(readonly, nonatomic) long long imageOrientation;
- (id)_unfetchedPropertySetsFromPropertySets:(id)arg1;
- (_Bool)isVariationSuggestionStatesUnknown;
- (unsigned long long)variationSuggestionStatesForVariationType:(unsigned long long)arg1;
- (int)analysisStateForWorkerType:(short)arg1 outLastIgnoreDate:(id *)arg2 outIgnoreUntilDate:(id *)arg3;
@property(readonly, nonatomic) NSData *distanceIdentity;
@property(readonly, nonatomic) NSSet *sceneClassifications;
@property(readonly, nonatomic) unsigned long long originalResourceChoice;
- (id)destinationAssetCopyProperties;
- (id)sceneprintProperties;
- (id)importProperties;
- (id)mediaAnalysisProperties;
- (id)aestheticProperties;
- (id)curationProperties;
- (id)adjustmentProperties;
- (id)assetUserActivityProperties;
- (id)assetAnalysisStateProperties;
- (id)sceneAnalysisProperties;
- (id)commentProperties;
- (id)descriptionProperties;
- (id)photoIrisProperties;
- (id)photosOneUpProperties;
- (id)originalMetadataProperties;
- (id)_createAnalysisStatePropertyObject;
- (id)_createCommentPropertyObject;
- (id)_createPropertyObjectOfClass:(Class)arg1;
- (id)_createPropertyObjectOfClass:(Class)arg1 preFetchedProperties:(id)arg2;
- (void)fetchPropertySetsIfNeeded;
- (void)_createExtendedPropertySetsIfNeededWithPropertyHint:(unsigned long long)arg1 fetchDictionary:(id)arg2;
- (_Bool)isMediaSubtype:(unsigned long long)arg1;
- (short)assetSource;
@property(readonly, nonatomic) unsigned long long sourceType;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (id)pl_managedAsset;
- (void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)_requestRenderedVideoForVideoURL:(id)arg1 adjustmentData:(id)arg2 canHandleAdjustmentData:(_Bool)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)cancelContentEditingInputRequest:(unsigned long long)arg1;
- (unsigned long long)requestContentEditingInputWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_imageRequestOptionsForBaseVersion:(long long)arg1 options:(id)arg2 progressEstimateForImageProgress:(CDUnknownBlockType)arg3;
- (id)_videoRequestOptionsForBaseVersion:(long long)arg1 options:(id)arg2 progressEstimateForVideoProgress:(CDUnknownBlockType)arg3;
- (long long)_baseVersionForAdjustmentData:(id)arg1 canHandleAdjustmentData:(_Bool)arg2;
- (_Bool)_canHandleAdjustmentData:(id)arg1 withOptions:(id)arg2;
- (_Bool)isOriginalRaw;
- (id)originalUTI;
- (_Bool)shouldUseRAWResourceAsUnadjustedEditBase;
- (unsigned long long)originalChoiceToFallbackForUnsupportRAW;
- (id)messagesForRecentImageManagerRequests;
- (void)recordImageManagerMessageForRequestID:(int)arg1 message:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

