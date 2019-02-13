//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, AMSProcessInfo, NSString, NSURL;
@protocol DAAPRequestDataProvider;

@interface DAAPURLRequest : NSObject
{
    id <DAAPRequestDataProvider> _dataProvider;
    NSURL *_URL;
    ACAccount *_account;
    long long _accountID;
    AMSProcessInfo *_clientInfo;
    NSString *_logUUID;
}

@property(retain) NSString *logUUID; // @synthesize logUUID=_logUUID;
@property(retain) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property long long accountID; // @synthesize accountID=_accountID;
@property(retain) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithDataProvider:(id)arg1 URL:(id)arg2;

@end

