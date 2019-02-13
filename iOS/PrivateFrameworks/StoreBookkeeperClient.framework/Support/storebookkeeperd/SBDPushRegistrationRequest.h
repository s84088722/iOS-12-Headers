//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSURLConnectionRequest.h>

@class NSNumber, NSString;

@interface SBDPushRegistrationRequest : SSURLConnectionRequest
{
    _Bool _optIn;
    NSNumber *_storeAccountID;
    NSString *_domain;
}

+ (id)requestForDomain:(id)arg1 optIn:(_Bool)arg2 accountID:(id)arg3 typeRegistrationURL:(id)arg4;
@property(readonly) _Bool optIn; // @synthesize optIn=_optIn;
@property(readonly, copy) NSString *domain; // @synthesize domain=_domain;
@property(readonly) NSNumber *storeAccountID; // @synthesize storeAccountID=_storeAccountID;
- (void).cxx_destruct;
- (_Bool)isEqualToRegistrationRequest:(id)arg1;
- (id)_requestPropertiesForDomain:(id)arg1 optIn:(_Bool)arg2 typeRegistrationURL:(id)arg3;
- (id)initWithDomain:(id)arg1 optIn:(_Bool)arg2 accountID:(id)arg3 typeRegistrationURL:(id)arg4;

@end

