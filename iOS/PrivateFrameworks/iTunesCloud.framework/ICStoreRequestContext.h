//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesCloud/ICRequestContext.h>

@class ICStoreDialogResponseHandler, ICUserIdentity, ICUserIdentityStore;

@interface ICStoreRequestContext : ICRequestContext
{
    ICUserIdentity *_delegatedIdentity;
    ICUserIdentity *_identity;
    ICUserIdentityStore *_identityStore;
    ICStoreDialogResponseHandler *_storeDialogResponseHandler;
    long long _personalizationStyle;
    _Bool _allowsExpiredBags;
}

+ (id)activeStoreAccountRequestContext;
@property(readonly, nonatomic) long long personalizationStyle; // @synthesize personalizationStyle=_personalizationStyle;
@property(readonly, nonatomic) _Bool allowsExpiredBags; // @synthesize allowsExpiredBags=_allowsExpiredBags;
@property(readonly, copy, nonatomic) ICStoreDialogResponseHandler *storeDialogResponseHandler; // @synthesize storeDialogResponseHandler=_storeDialogResponseHandler;
@property(readonly, nonatomic) ICUserIdentityStore *identityStore; // @synthesize identityStore=_identityStore;
@property(readonly, copy, nonatomic) ICUserIdentity *delegatedIdentity; // @synthesize delegatedIdentity=_delegatedIdentity;
@property(readonly, copy, nonatomic) ICUserIdentity *identity; // @synthesize identity=_identity;
- (void).cxx_destruct;
- (void)setPersonalizationStyle:(long long)arg1;
- (void)setAllowsExpiredBags:(_Bool)arg1;
- (void)setStoreDialogResponseHandler:(id)arg1;
- (void)setIdentityStore:(id)arg1;
- (void)setIdentity:(id)arg1;
- (void)setDelegatedIdentity:(id)arg1;
- (id)copyWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithIdentity:(id)arg1 identityStore:(id)arg2 clientInfo:(id)arg3 authenticationProvider:(id)arg4;
- (id)initWithIdentity:(id)arg1 identityStore:(id)arg2 clientInfo:(id)arg3;
- (id)initWithIdentity:(id)arg1 clientInfo:(id)arg2;
- (id)initWithIdentity:(id)arg1;

@end

