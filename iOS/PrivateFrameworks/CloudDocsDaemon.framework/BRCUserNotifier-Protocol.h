//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/NSObject-Protocol.h>

@class BRCAccountSession, CKShareMetadata, NSURL;

@protocol BRCUserNotifier <NSObject>
- (void)showErrorDocumentsAppNotVisibleForShareURL:(NSURL *)arg1 reply:(void (^)(void))arg2;
- (void)showErrorParticipantLimitReachedForShareMetadata:(CKShareMetadata *)arg1 reply:(void (^)(_Bool))arg2;
- (void)showErrorItemUnavailableOrAccessRestrictedForShareMetadata:(CKShareMetadata *)arg1 reply:(void (^)(void))arg2;
- (void)showErrorServerNotReachableForShareMetadata:(CKShareMetadata *)arg1 reply:(void (^)(void))arg2;
- (void)showErrorDeviceOfflineForShareMetadata:(CKShareMetadata *)arg1 reply:(void (^)(void))arg2;
- (void)showErrorReasonUnknownForShareMetadata:(CKShareMetadata *)arg1 reply:(void (^)(void))arg2;
- (void)showErrorNativeAppDisabledByProfileForShareMetadata:(CKShareMetadata *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)showErrorInstallNativeAppForShareMetadata:(CKShareMetadata *)arg1 reply:(void (^)(_Bool, _Bool, NSError *))arg2;
- (void)showErrorTurnOniCloudDriveForShareMetadata:(CKShareMetadata *)arg1 reply:(void (^)(_Bool, _Bool, NSError *))arg2;
- (void)showErrorSignInToiCloudForShareMetadata:(CKShareMetadata *)arg1 reply:(void (^)(_Bool, _Bool, NSError *))arg2;
- (void)showJoinDialogForShareMetadata:(CKShareMetadata *)arg1 session:(BRCAccountSession *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)close;
- (void)moveToFront;
@end

