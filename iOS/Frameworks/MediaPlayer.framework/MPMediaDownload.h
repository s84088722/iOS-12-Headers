//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPMediaDownload : NSObject
{
    long long _deviceLibraryID;
    long long _storeItemID;
    long long _downloadReason;
    double _downloadProgress;
    long long _libraryID;
    long long _storeSagaID;
}

+ (id)MPMediaDownloadsFromATAssets:(id)arg1;
+ (id)MPMediaDownloadsFromMPStoreDownloads:(id)arg1;
@property long long storeSagaID; // @synthesize storeSagaID=_storeSagaID;
@property long long libraryID; // @synthesize libraryID=_libraryID;
@property(nonatomic) double downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(nonatomic) long long downloadReason; // @synthesize downloadReason=_downloadReason;
@property(readonly, nonatomic) long long storeItemID; // @synthesize storeItemID=_storeItemID;
@property(readonly, nonatomic) long long deviceLibraryID; // @synthesize deviceLibraryID=_deviceLibraryID;
- (id)initWithATAsset:(id)arg1;
- (id)initWithMPStoreDownload:(id)arg1;
- (id)init;

@end

