//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AskPermission/NSObject-Protocol.h>

@class FAFamilyMember, NSString, PRRequest;

@protocol PRRequestDelegate <NSObject>
- (NSString *)responseNotificationStringForRequest:(PRRequest *)arg1 fromFamilyMember:(FAFamilyMember *)arg2;
- (NSString *)requestNotificationStringForRequest:(PRRequest *)arg1 fromFamilyMember:(FAFamilyMember *)arg2;
- (NSString *)requestStringForRequest:(PRRequest *)arg1 fromFamilyMember:(FAFamilyMember *)arg2 shownInNotification:(_Bool)arg3;
- (void)attemptLocalApprovalForRequest:(PRRequest *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)performCancellationForDeclinedRequest:(PRRequest *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)performAuthorizationForApprovedRequest:(PRRequest *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)_shouldDownloadAssetsFromPurchaseWithBuyParameters:(NSString *)arg1 forApprovedRequest:(PRRequest *)arg2 withHandler:(void (^)(_Bool))arg3;
- (void)_willPerformStorePurchaseWithBuyParameters:(NSString *)arg1 forApprovedRequest:(PRRequest *)arg2 withHandler:(void (^)(NSString *))arg3;
- (void)permissionRequest:(PRRequest *)arg1 didChangeStatusTo:(unsigned long long)arg2;
- (void)didCreateNewPermissionRequest:(PRRequest *)arg1;
@end

