//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocs/NSFileProviderItem-Protocol.h>

@class NSArray, NSNumber, NSString, NSURL;

@protocol NSFileProviderItem_Private <NSFileProviderItem>

@optional
@property(readonly, nonatomic) NSString *preformattedMostRecentEditorName;
@property(readonly, nonatomic) NSString *preformattedOwnerName;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) _Bool fp_isContainer;
@property(readonly, copy) NSString *fp_appContainerBundleIdentifier;
@property(readonly, copy) NSArray *tags;
@property(readonly, getter=fp_isUbiquitous) _Bool fp_ubiquitous;
@property(readonly, copy) NSString *fp_domainIdentifier;
@property(readonly, copy) NSString *fp_spotlightDomainIdentifier;
@property(readonly, copy) NSString *sharingPermissions;
@property(readonly, copy) NSString *providerIdentifier;
@property(readonly, getter=isHidden) _Bool hidden;
@property(readonly, copy, getter=isDownloadRequested) NSNumber *downloadRequested;
@property(readonly, copy) NSString *containerDisplayName;
@property(readonly, copy) NSNumber *hasUnresolvedConflicts;
@property(readonly, copy) NSURL *fileURL;
@end

