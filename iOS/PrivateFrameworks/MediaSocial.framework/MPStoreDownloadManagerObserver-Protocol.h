//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaSocial/NSObject-Protocol.h>

@class MPStoreDownload, MPStoreDownloadManager, NSArray;

@protocol MPStoreDownloadManagerObserver <NSObject>

@optional
- (void)downloadManagerNetworkUsageDidChange:(MPStoreDownloadManager *)arg1;
- (void)downloadManager:(MPStoreDownloadManager *)arg1 downloadsDidProgress:(NSArray *)arg2;
- (void)downloadManager:(MPStoreDownloadManager *)arg1 downloadPurchaseDidFinish:(MPStoreDownload *)arg2;
- (void)downloadManager:(MPStoreDownloadManager *)arg1 downloadDidProgress:(MPStoreDownload *)arg2;
- (void)downloadManager:(MPStoreDownloadManager *)arg1 downloadDidFinish:(MPStoreDownload *)arg2;
- (void)downloadManager:(MPStoreDownloadManager *)arg1 didAddActiveDownloads:(NSArray *)arg2 removeActiveDownloads:(NSArray *)arg3;
- (void)downloadManager:(MPStoreDownloadManager *)arg1 didAddDownloads:(NSArray *)arg2 removeDownloads:(NSArray *)arg3;
@end

