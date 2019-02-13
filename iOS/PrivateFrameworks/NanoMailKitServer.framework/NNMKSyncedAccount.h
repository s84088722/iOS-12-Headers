//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NNMKSyncedAccount : NSObject
{
    _Bool _shouldArchive;
    _Bool _resendRequested;
    NSString *_accountId;
    NSString *_displayName;
    NSArray *_emailAddresses;
    unsigned long long _resendInterval;
    unsigned long long _sourceType;
    NSString *_username;
    NSString *_localId;
}

@property(retain, nonatomic) NSString *localId; // @synthesize localId=_localId;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) unsigned long long resendInterval; // @synthesize resendInterval=_resendInterval;
@property(nonatomic) _Bool resendRequested; // @synthesize resendRequested=_resendRequested;
@property(retain, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(nonatomic) _Bool shouldArchive; // @synthesize shouldArchive=_shouldArchive;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
- (void).cxx_destruct;
- (id)account;
- (id)init;
- (id)initWithAccount:(id)arg1;

@end
