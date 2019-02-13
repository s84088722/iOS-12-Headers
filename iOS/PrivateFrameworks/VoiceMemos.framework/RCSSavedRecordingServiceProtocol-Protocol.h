//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VoiceMemos/NSObject-Protocol.h>

@class AVAudioPCMBuffer, NSArray, NSDate, NSDictionary, NSString, NSURL, RCSSavedRecordingAccessToken;

@protocol RCSSavedRecordingServiceProtocol <NSObject>
- (oneway void)updateSearchMetadataWithRecordingURIsToInsert:(NSArray *)arg1 recordingURIsToUpdate:(NSArray *)arg2 recordingURIsToDelete:(NSArray *)arg3 completionBlock:(void (^)(NSError *))arg4;
- (oneway void)clearAndReloadSearchMetadataWithCompletionBlock:(void (^)(NSError *))arg1;
- (oneway void)reloadExistingSearchMetadataWithCompletionBlock:(void (^)(NSError *))arg1;
- (oneway void)_fetchAllAccessTokens:(void (^)(NSSet *))arg1;
- (oneway void)fetchCompositionAVURLsBeingModified:(void (^)(NSSet *))arg1;
- (oneway void)fetchCompositionAVURLsBeingExported:(void (^)(NSSet *))arg1;
- (oneway void)enableOrphanHandlingWithCompletionBlock:(void (^)(NSError *))arg1;
- (oneway void)disableOrphanHandlingWithCompletionBlock:(void (^)(NSError *))arg1;
- (oneway void)enableOrphanedFragmentCleanupForCompositionAVURL:(NSURL *)arg1;
- (oneway void)disableOrphanedFragmentCleanupForCompositionAVURL:(NSURL *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (oneway void)endAccessSessionWithToken:(RCSSavedRecordingAccessToken *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (oneway void)removeAllUserDataWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)prepareToTrimCompositionAVURL:(NSURL *)arg1 accessRequestHandler:(void (^)(RCSSavedRecordingAccessToken *, NSError *))arg2;
- (oneway void)prepareToExportCompositionAVURL:(NSURL *)arg1 cacheWaveform:(_Bool)arg2 accessRequestHandler:(void (^)(RCSSavedRecordingAccessToken *, NSError *))arg3;
- (oneway void)prepareToPreviewCompositionAVURL:(NSURL *)arg1 accessRequestHandler:(void (^)(RCSSavedRecordingAccessToken *, NSError *))arg2;
- (oneway void)writeAudioFile:(NSURL *)arg1 buffer:(AVAudioPCMBuffer *)arg2 completionBlock:(void (^)(NSError *))arg3;
- (oneway void)closeAudioFile:(RCSSavedRecordingAccessToken *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (oneway void)openAudioFile:(NSURL *)arg1 settings:(NSDictionary *)arg2 accessRequestHandler:(void (^)(RCSSavedRecordingAccessToken *, NSError *))arg3;
- (oneway void)prepareToCaptureToCompositionAVURL:(NSURL *)arg1 accessRequestHandler:(void (^)(RCSSavedRecordingAccessToken *, NSError *))arg2;
- (oneway void)expungeRecordingsFromCloud:(void (^)(NSNumber *, NSError *))arg1;
- (oneway void)exportRecordingsToCloud:(void (^)(NSNumber *, NSError *))arg1;
- (oneway void)importRecordingsFromCloud:(void (^)(NSNumber *, NSError *))arg1;
- (oneway void)disableCloudRecordingsSaveLocalCopies:(_Bool)arg1 withCompletionBlock:(void (^)(NSError *))arg2;
- (oneway void)enableCloudRecordingsWithCompletionBlock:(void (^)(NSError *))arg1;
- (oneway void)importRecordingWithSourceAudioURL:(NSURL *)arg1 name:(NSString *)arg2 date:(NSDate *)arg3 importCompletionBlock:(void (^)(NSURL *, NSError *))arg4;
- (oneway void)performDatabaseMigrationWithCompletionBlock:(void (^)(NSError *))arg1;
@end

