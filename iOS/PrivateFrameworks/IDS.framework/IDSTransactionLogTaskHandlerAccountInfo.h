//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ENAccountIdentity, NSDictionary, NSString;

@interface IDSTransactionLogTaskHandlerAccountInfo : NSObject
{
    ENAccountIdentity *_accountIdentity;
    NSDictionary *_aliasToAccountsMap;
    NSString *_serviceName;
}

@property(readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(readonly, nonatomic) NSDictionary *aliasToAccountsMap; // @synthesize aliasToAccountsMap=_aliasToAccountsMap;
@property(readonly, nonatomic) ENAccountIdentity *accountIdentity; // @synthesize accountIdentity=_accountIdentity;
- (void).cxx_destruct;
- (id)accountForAlias:(id)arg1;
- (id)initWithAccountIdentity:(id)arg1 aliasToAccountsMap:(id)arg2 serviceName:(id)arg3;

@end

