//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/ICCloudSyncingObject.h>

#import <NotesShared/ICCloudObject-Protocol.h>
#import <NotesShared/ICSearchIndexable-Protocol.h>

@class AVAsset, ICAttachmentLocation, ICAttachmentModel, ICMedia, ICNote, NSData, NSDate, NSDictionary, NSSet, NSString, NSURL;

@interface ICAttachment : ICCloudSyncingObject <ICCloudObject, ICSearchIndexable>
{
    short _attachmentType;
    ICAttachmentModel *_attachmentModel;
    _Bool settingMergeableData;
    NSURL *_remoteFileURL;
    NSDictionary *_metadata;
    NSURL *_URL;
    struct AVAsset *_movie;
}

+ (id)keyPathsForValuesAffectingParentCloudObject;
+ (_Bool)isPathExtensionSupportedForPasswordProtectedNotes:(id)arg1;
+ (_Bool)isTypeUTISupportedForPasswordProtectedNotes:(id)arg1;
+ (id)isBeingEditedLocallyOnDeviceSet;
+ (id)defaultTitleForAttachmentType:(short)arg1;
+ (_Bool)typeUTIIsDrawing:(id)arg1;
+ (_Bool)typeUTIIsPlayableAudio:(id)arg1;
+ (_Bool)typeUTIIsPlayableMovie:(id)arg1;
+ (id)mimeTypeFromUTI:(id)arg1;
+ (id)filenameFromUTI:(id)arg1;
+ (id)filenameExtensionForUTI:(id)arg1;
+ (short)sectionFromTypeUTI:(id)arg1 url:(id)arg2;
+ (id)internalImageCache;
+ (void)purgeAttachmentFilesForIdentifiers:(id)arg1;
+ (id)attachmentIdentifiersForAccount:(id)arg1;
+ (void)initialize;
+ (id)attachmentSectionSortOrder;
+ (void)addPreviewImages:(id)arg1 toRecord:(id)arg2;
+ (id)newCloudObjectForRecord:(id)arg1 context:(id)arg2;
+ (id)noteFromAttachmentRecord:(id)arg1 context:(id)arg2;
+ (id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;
+ (id)fallbackImageEncryptedURLForIdentifier:(id)arg1;
+ (id)fallbackImageURLForIdentifier:(id)arg1;
+ (void)ensureFallbackImageDirectoryExists;
+ (id)fallbackImageDirectoryURL;
+ (id)newFetchRequestForAttachments;
+ (id)predicateForSearchableAttachments;
+ (id)predicateForAttachmentBrowser;
+ (id)predicateForVisibleAttachments;
+ (id)attachmentTypeUTIsToHideFromAttachmentBrowser;
+ (id)attachmentsMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)visibleAttachmentsInContext:(id)arg1;
+ (id)allAttachmentsInContext:(id)arg1;
+ (id)attachmentWithIdentifier:(id)arg1 includeDeleted:(_Bool)arg2 context:(id)arg3;
+ (id)attachmentWithIdentifier:(id)arg1 context:(id)arg2;
+ (void)purgeAllAttachmentsInContext:(id)arg1;
+ (void)purgeAttachment:(id)arg1;
+ (void)undeleteAttachment:(id)arg1;
+ (void)deleteAttachment:(id)arg1;
+ (id)newAttachmentWithIdentifier:(id)arg1 context:(id)arg2;
@property(retain, nonatomic) AVAsset *movie; // @synthesize movie=_movie;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic, getter=isSettingMergeableData) _Bool settingMergeableData; // @synthesize settingMergeableData;
- (void).cxx_destruct;
- (id)ic_loggingValues;
- (_Bool)locationNeedsUpdate;
- (void)attachmentDidChange;
- (_Bool)supportsQuickLook;
- (id)previewItemTitle;
- (id)previewItemURL;
- (void)didTurnIntoFault;
- (void)unmarkForDeletion;
- (void)markForDeletion;
- (id)childCloudObjects;
- (id)parentCloudObject;
- (id)croppingQuad;
- (void)setCroppingQuad:(id)arg1;
- (void)saveAndClearDecryptedData;
- (id)mergeDecryptedValue:(id)arg1 withOldValue:(id)arg2 forKey:(id)arg3;
- (_Bool)isEncryptableKeyBinaryData:(id)arg1;
- (id)parentEncryptableObject;
@property(retain, nonatomic) NSData *mergeableData; // @dynamic mergeableData;
- (_Bool)shouldEmbedMarkupDataInMedia;
@property(retain, nonatomic) NSData *markupModelData; // @dynamic markupModelData;
- (_Bool)isBeingEditedLocallyOnDevice;
- (void)setIsBeingEditedLocallyOnDevice:(_Bool)arg1;
@property(retain, nonatomic) NSString *additionalIndexableText; // @dynamic additionalIndexableText;
@property(retain, nonatomic) NSString *summary; // @dynamic summary;
- (_Bool)hasMetadata;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSURL *remoteFileURL; // @synthesize remoteFileURL=_remoteFileURL;
- (id)unsupportedAttachmentSubtitle;
- (id)unsupportedAttachmentTitle;
@property(retain, nonatomic) NSString *fallbackSubtitleMac; // @dynamic fallbackSubtitleMac;
@property(retain, nonatomic) NSString *fallbackSubtitleIOS; // @dynamic fallbackSubtitleIOS;
@property(retain, nonatomic) NSString *fallbackTitle; // @dynamic fallbackTitle;
@property(retain, nonatomic) NSString *userTitle; // @dynamic userTitle;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *urlString; // @dynamic urlString;
- (_Bool)isLoadingFromCloud;
- (void)willSave;
- (id)attachmentModel;
- (short)attachmentType;
- (_Bool)supportsSavingAttachmentToExternalFile;
- (_Bool)isInNoteTitleOrSnippet;
- (struct _NSRange)rangeInNote;
- (_Bool)needsToBeRequested;
- (_Bool)isVisible;
- (struct CGSize)intrinsicContentSize;
- (void)updateMarkedForDeletionStateAttachmentIsInNote:(_Bool)arg1;
- (void)saveMergeableDataIfNeeded;
@property(retain, nonatomic) NSString *typeUTI; // @dynamic typeUTI;
- (void)updateAttachmentSectionWithTypeUTI:(id)arg1;
@property(retain, nonatomic) ICAttachment *parentAttachment; // @dynamic parentAttachment;
- (id)fileSizeString;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGRect)bounds;
- (void)clearCachedImages;
- (id)previewImageCacheKey;
- (id)imageCacheKey;
@property(nonatomic) short orientation; // @dynamic orientation;
@property(nonatomic) short imageFilterType; // @dynamic imageFilterType;
@property(retain, nonatomic) ICNote *note; // @dynamic note;
- (id)defaultTitle;
- (_Bool)supportsRenaming;
- (_Bool)isTable;
- (_Bool)isChildOfDocumentGallery;
- (_Bool)isNews;
- (_Bool)isAppStore;
- (_Bool)isiTunes;
- (_Bool)isMap;
- (_Bool)isURL;
- (_Bool)isFolder;
- (void)didRefresh:(_Bool)arg1;
- (void)willRefresh:(_Bool)arg1;
- (void)willTurnIntoFault;
- (void)awakeFromFetch;
- (void)prepareForDeletion;
- (void)dealloc;
- (unsigned long long)approximateArchiveSizeIncludingPreviews:(_Bool)arg1;
- (void)savePreview:(id)arg1 toArchive:(struct PreviewImage *)arg2 previewDataIdentifier:(id)arg3 dataPersister:(id)arg4;
- (void)saveToArchive:(struct Attachment *)arg1 dataPersister:(id)arg2 stripImageMarkupMetadata:(_Bool)arg3;
- (void)loadPreviewArchive:(const struct PreviewImage *)arg1 previewDataIdentifier:(id)arg2 dataPersister:(id)arg3;
- (void)loadFromArchive:(const struct Attachment *)arg1 dataPersister:(id)arg2 withIdentifierMap:(id)arg3;
- (void)resetUniqueIdentifier;
- (void)updatePreviewsFromRecord:(id)arg1;
- (_Bool)preferLocalPreviewImages;
- (void)objectWasFetchedFromCloudWithRecord:(id)arg1;
- (void)updateParentReferenceIfNecessary;
- (_Bool)supportsDeletionByTTL;
- (id)objectsToBeDeletedBeforeThisObject;
- (void)deleteFromLocalDatabase;
- (_Bool)needsToBePushedToCloud;
- (_Bool)hasAllMandatoryFields;
- (void)fixBrokenReferences;
- (void)fixMarkedForDeletionForScannedDocuments;
- (_Bool)isInICloudAccount;
- (id)parentAttachmentFromRecord:(id)arg1 context:(id)arg2;
- (id)newlyCreatedRecord;
- (void)mergeDataFromRecord:(id)arg1 newAttachment:(_Bool)arg2;
- (void)mergeDataFromRecord:(id)arg1;
- (id)recordZoneName;
- (id)recordType;
- (void)updatePlaceInLocationIfNeededHandler:(CDUnknownBlockType)arg1;
- (id)addLocationWithLatitude:(double)arg1 longitude:(double)arg2;
- (void)addLocationIfNeeded;
- (id)fallbackImageUTI;
- (id)fallbackImageData;
- (id)fallbackImageEncryptedURL;
- (id)fallbackImageURL;
- (_Bool)hasFallbackImage;
- (void)writeFallbackImageData:(id)arg1;
- (void)requireMinimumVersionIncludingChildObjects:(long long)arg1;
- (id)addMediaWithURL:(id)arg1 updateFileBasedAttributes:(_Bool)arg2;
- (id)addMediaWithURL:(id)arg1;
- (id)addMediaWithFileWrapper:(id)arg1;
- (id)addMediaWithData:(id)arg1 filename:(id)arg2 updateFileBasedAttributes:(_Bool)arg3;
- (id)addMediaWithData:(id)arg1 filename:(id)arg2;
- (void)updateAfterMediaChange;
@property(readonly, copy) NSString *description;
- (id)tableModel;
- (id)inlineDrawingModel;
- (id)galleryModel;
- (id)drawingModel;
- (id)attachmentPreviewImageWithMinSize:(struct CGSize)arg1 scale:(double)arg2 matchScale:(_Bool)arg3;
- (id)attachmentPreviewImageWithMinSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)attachmentPreviewImageCreatingIfNecessaryWithWidth:(double)arg1 height:(double)arg2 scale:(double)arg3 scaleWhenDrawing:(_Bool)arg4 metadata:(id)arg5 save:(_Bool)arg6;
- (id)attachmentPreviewImageCreatingIfNecessaryWithWidth:(double)arg1 height:(double)arg2 scale:(double)arg3 scaleWhenDrawing:(_Bool)arg4 metadata:(id)arg5;
- (id)updateAttachmentPreviewImageWithImageSrc:(struct CGImageSource *)arg1 maxDimension:(double)arg2 scale:(double)arg3 scaleWhenDrawing:(_Bool)arg4 metadata:(id)arg5 sendNotification:(_Bool)arg6;
- (id)updateAttachmentPreviewImageWithImageData:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 scaleWhenDrawing:(_Bool)arg4 metadata:(id)arg5 sendNotification:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (id)checkPreviewImagesIntegrityOperation;
- (_Bool)checkPreviewImagesIntegrity;
- (void)invalidateAttachmentPreviewImages;
- (void)purgeAttachmentPreviewImages;
- (void)undeleteAttachmentPreviewImages;
- (void)deleteAttachmentPreviewImages;
- (_Bool)hasAnyPNGPreviewImageFiles;
- (id)fileURLForTypeIdentifier:(id)arg1;
- (id)dataForTypeIdentifier:(id)arg1;
- (_Bool)ignoreInSearchIndexer;
- (id)searchableTextContentWithoutTitle;
- (id)searchableTextContent;
- (id)searchableItemAttributeSet;
- (id)searchDomainIdentifier;
- (id)searchableItemIdentifier;
- (_Bool)isHiddenFromSearch;
- (_Bool)searchResultCanBeDeletedFromNoteContext;
- (id)authorsExcludingCurrentUser;
- (unsigned long long)searchResultType;
- (unsigned long long)searchResultsSection;
- (long long)visibilityTestingType;

// Remaining properties
@property(nonatomic) _Bool checkedForLocation; // @dynamic checkedForLocation;
@property(retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(nonatomic) double croppingQuadBottomLeftX; // @dynamic croppingQuadBottomLeftX;
@property(nonatomic) double croppingQuadBottomLeftY; // @dynamic croppingQuadBottomLeftY;
@property(nonatomic) double croppingQuadBottomRightX; // @dynamic croppingQuadBottomRightX;
@property(nonatomic) double croppingQuadBottomRightY; // @dynamic croppingQuadBottomRightY;
@property(nonatomic) double croppingQuadTopLeftX; // @dynamic croppingQuadTopLeftX;
@property(nonatomic) double croppingQuadTopLeftY; // @dynamic croppingQuadTopLeftY;
@property(nonatomic) double croppingQuadTopRightX; // @dynamic croppingQuadTopRightX;
@property(nonatomic) double croppingQuadTopRightY; // @dynamic croppingQuadTopRightY;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) double duration; // @dynamic duration;
@property(retain, nonatomic) NSData *fallbackImageCryptoInitializationVector; // @dynamic fallbackImageCryptoInitializationVector;
@property(retain, nonatomic) NSData *fallbackImageCryptoTag; // @dynamic fallbackImageCryptoTag;
@property(nonatomic) long long fileSize; // @dynamic fileSize;
@property(nonatomic) _Bool hasMarkupData; // @dynamic hasMarkupData;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) ICAttachmentLocation *location; // @dynamic location;
@property(retain, nonatomic) ICMedia *media; // @dynamic media;
@property(retain, nonatomic) NSData *metadataData; // @dynamic metadataData;
@property(retain, nonatomic) NSDate *modificationDate; // @dynamic modificationDate;
@property(retain, nonatomic) ICNote *noteUsingTitleForNoteTitle; // @dynamic noteUsingTitleForNoteTitle;
@property(nonatomic) double originX; // @dynamic originX;
@property(nonatomic) double originY; // @dynamic originY;
@property(retain, nonatomic) NSSet *previewImages; // @dynamic previewImages;
@property(retain, nonatomic) NSDate *previewUpdateDate; // @dynamic previewUpdateDate;
@property(retain, nonatomic) NSString *remoteFileURLString; // @dynamic remoteFileURLString;
@property(nonatomic) short section; // @dynamic section;
@property(nonatomic) double sizeHeight; // @dynamic sizeHeight;
@property(nonatomic) double sizeWidth; // @dynamic sizeWidth;
@property(retain, nonatomic) NSSet *subAttachments; // @dynamic subAttachments;
@property(readonly) Class superclass;

@end

