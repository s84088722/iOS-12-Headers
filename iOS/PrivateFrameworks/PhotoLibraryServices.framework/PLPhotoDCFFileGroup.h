//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLPhotoDCFObject.h>

@class NSDate, NSMutableSet, NSString, PLPhotoDCFDirectory;

@interface PLPhotoDCFFileGroup : PLPhotoDCFObject
{
    id _delegate;
    PLPhotoDCFDirectory *_directory;
    NSString *_directoryPath;
    NSString *_prebakedThumbnailPath;
    NSString *_videoFileExtension;
    NSMutableSet *_extensions;
    NSDate *_date;
    NSString *_preferredExtension;
    unsigned long long _hash;
    unsigned int _hashComputed:1;
    unsigned int _addedExtensions:1;
    unsigned int _writeIsPending:1;
}

+ (id)allMetadataFileExtensions;
- (_Bool)isWritePending;
- (void)setWriteIsPending:(_Bool)arg1;
- (void)deleteFiles;
- (_Bool)hasPrebakedWildcatThumbnails;
- (_Bool)hasPrebakedPortraitScrubberThumbnails;
- (_Bool)hasPrebakedLandscapeScrubberThumbnails;
- (_Bool)hasPrebakedThumbnail;
- (_Bool)hasVideoFile;
- (_Bool)hasThumbnail;
- (id)pathForVideoPreviewFile;
- (id)pathForLowResolutionFile;
- (id)pathForPrebakedWildcatThumbnailsFile;
- (id)pathForPrebakedPortraitScrubberThumbnails;
- (id)pathForPrebakedLandscapeScrubberThumbnails;
- (id)pathForPrebakedThumbnail;
- (id)pathForThumbnailFile;
- (id)videoPreviewFilename;
- (id)lowResolutionFilename;
- (id)prebakedWildcatThumbnailsFilename;
- (id)prebakedPortraitScrubberThumbnailsFilename;
- (id)prebakedLandscapeScrubberThumbnailsFilename;
- (id)prebakedThumbnailFilename;
- (id)thumbnailFilename;
- (id)pathForTrimmedVideoFile;
- (id)pathForVideoFile;
- (id)pathForFullSizeImage;
- (void)createMetadataDirectoryIfNecessary;
- (id)pathForMetadataWithGroupName;
- (id)pathForMetadata;
- (id)pathForGroupWithoutExtension;
- (id)pathForContainingDirectory;
- (id)extensions;
- (void)forceAddExtensionsFromMetadataDirectory;
- (void)addExtensionsFromMetadataDirectory;
- (id)description;
- (long long)compare:(id)arg1;
- (void)setDate:(id)arg1;
- (id)date;
- (void)addExtension:(id)arg1;
- (_Bool)hasObsoleteFiles;
- (void)deleteObsoleteFiles;
- (_Bool)isValid;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)imageSourceTypeHint;
- (id)directory;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 number:(int)arg2 directory:(id)arg3;

@end

