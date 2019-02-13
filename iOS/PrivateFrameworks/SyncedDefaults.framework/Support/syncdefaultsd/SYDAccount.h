//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSDictionary, NSString, NSURL;

@interface SYDAccount : NSObject
{
    ACAccount *_account;
    _Bool _allowsCellular;
    NSDictionary *_accountProperties;
    _Bool _needsToReloadAccount;
    NSString *_invalidCredential;
}

+ (id)enabledAccount;
+ (id)primaryAccount;
+ (id)sharedAccountStore;
@property(readonly, nonatomic) _Bool allowsCellular; // @synthesize allowsCellular=_allowsCellular;
- (void).cxx_destruct;
- (id)description;
- (id)credentials;
@property(retain, nonatomic) NSString *invalidCredential;
@property(readonly, nonatomic) NSURL *serverURL;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)_passwordChangedNotification;
- (void)_accountsChangedNotification;
- (void)_loadAccountIfNecessary;
- (id)init;

@end

