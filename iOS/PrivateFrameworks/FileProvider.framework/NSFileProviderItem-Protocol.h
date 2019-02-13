//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FileProvider/NSObject-Protocol.h>

@class NSData, NSDate, NSDictionary, NSError, NSNumber, NSPersonNameComponents, NSString;

@protocol NSFileProviderItem <NSObject>
@property(readonly, copy, nonatomic) NSString *typeIdentifier;
@property(readonly, copy, nonatomic) NSString *filename;
@property(readonly, copy, nonatomic) NSString *parentItemIdentifier;
@property(readonly, copy, nonatomic) NSString *itemIdentifier;

@optional
@property(readonly, nonatomic) NSDictionary *userInfo;
@property(readonly, nonatomic) NSData *versionIdentifier;
@property(readonly, nonatomic) NSPersonNameComponents *mostRecentEditorNameComponents;
@property(readonly, nonatomic) NSPersonNameComponents *ownerNameComponents;
@property(readonly, nonatomic, getter=isSharedByCurrentUser) _Bool sharedByCurrentUser;
@property(readonly, nonatomic, getter=isShared) _Bool shared;
@property(readonly, nonatomic, getter=isMostRecentVersionDownloaded) _Bool mostRecentVersionDownloaded;
@property(readonly, copy, nonatomic) NSError *downloadingError;
@property(readonly, nonatomic, getter=isDownloading) _Bool downloading;
@property(readonly, nonatomic, getter=isDownloaded) _Bool downloaded;
@property(readonly, copy, nonatomic) NSError *uploadingError;
@property(readonly, nonatomic, getter=isUploading) _Bool uploading;
@property(readonly, nonatomic, getter=isUploaded) _Bool uploaded;
@property(readonly, nonatomic, getter=isTrashed) _Bool trashed;
@property(readonly, copy, nonatomic) NSNumber *favoriteRank;
@property(readonly, copy, nonatomic) NSData *tagData;
@property(readonly, copy, nonatomic) NSDate *lastUsedDate;
@property(readonly, copy, nonatomic) NSDate *contentModificationDate;
@property(readonly, copy, nonatomic) NSDate *creationDate;
@property(readonly, copy, nonatomic) NSNumber *childItemCount;
@property(readonly, copy, nonatomic) NSNumber *documentSize;
@property(readonly, nonatomic) unsigned long long capabilities;
@end

