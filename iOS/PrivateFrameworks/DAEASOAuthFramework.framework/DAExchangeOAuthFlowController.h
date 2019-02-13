//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DAEASOAuthFramework/DAEASOAuthFlowController.h>

@class NSString;

@interface DAExchangeOAuthFlowController : DAEASOAuthFlowController
{
    NSString *_redirectURI;
    NSString *_easEndPoint;
}

@property(copy, nonatomic) NSString *easEndPoint; // @synthesize easEndPoint=_easEndPoint;
@property(copy, nonatomic) NSString *redirectURI; // @synthesize redirectURI=_redirectURI;
- (void).cxx_destruct;
- (id)_urlRequestForOAuthTokenFromAuthCode:(id)arg1;
- (void)exchangeAuthCode:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_exchangeAuthCode:(id)arg1 forTokensAndUsernameWithCompletion:(CDUnknownBlockType)arg2;
- (id)authURLForUsername:(id)arg1;
- (id)_accountDescription;
- (id)initialRedirectURL;
- (id)initWithAuthURI:(id)arg1 easEndPoint:(id)arg2 username:(id)arg3;

@end

