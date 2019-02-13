//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FRNotificationManager, NSDate, NSString, UNNotificationResponse;
@protocol FCHeadlineProviding;

@protocol FRNotificationManagerDelegateType <NSObject>
- (void)notificationManagerPresentNotificationSettings:(UNNotificationResponse *)arg1;
- (void)notificationManagerNavigateToSpotlight:(FRNotificationManager *)arg1 notificationID:(NSString *)arg2 userActionDate:(NSDate *)arg3;
- (void)notificationManager:(FRNotificationManager *)arg1 shareArticleWithID:(NSString *)arg2 notificationID:(NSString *)arg3 forceArticleUpdate:(_Bool)arg4 userActionDate:(NSDate *)arg5;
- (void)notificationManager:(FRNotificationManager *)arg1 saveArticleWithID:(NSString *)arg2 notificationID:(NSString *)arg3 sourceChannelID:(NSString *)arg4 isFreeArticle:(_Bool)arg5 headline:(id <FCHeadlineProviding>)arg6 userActionDate:(NSDate *)arg7;
- (void)notificationManager:(FRNotificationManager *)arg1 showArticleWithID:(NSString *)arg2 notificationID:(NSString *)arg3 forceArticleUpdate:(_Bool)arg4 userActionDate:(NSDate *)arg5;
- (void)notificationManager:(FRNotificationManager *)arg1 shareHeadline:(id <FCHeadlineProviding>)arg2 notificationID:(NSString *)arg3 userActionDate:(NSDate *)arg4;
- (void)notificationManager:(FRNotificationManager *)arg1 showHeadline:(id <FCHeadlineProviding>)arg2 notificationID:(NSString *)arg3 userActionDate:(NSDate *)arg4;
@end

