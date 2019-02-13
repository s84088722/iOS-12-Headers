//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/NSObject-Protocol.h>

@class NSString, UIViewController, VSAccountManager;

@protocol VSAccountManagerDelegate <NSObject>
- (void)accountManager:(VSAccountManager *)arg1 dismissViewController:(UIViewController *)arg2;
- (void)accountManager:(VSAccountManager *)arg1 presentViewController:(UIViewController *)arg2;

@optional
- (_Bool)accountManager:(VSAccountManager *)arg1 shouldAuthenticateAccountProviderWithIdentifier:(NSString *)arg2;
@end

