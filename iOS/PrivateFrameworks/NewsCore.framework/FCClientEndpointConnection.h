//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCEndpointConnection.h>

@interface FCClientEndpointConnection : FCEndpointConnection
{
}

- (void)submitWebAccessWithTagID:(id)arg1 purchaseID:(id)arg2 emailAddress:(id)arg3 purchaseReceipt:(id)arg4 countryCode:(id)arg5 languageCode:(id)arg6 callbackQueue:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)subscribeToEmailNewsLetterForUserWithDSID:(id)arg1 storeFrontID:(id)arg2 primaryLanguage:(id)arg3 callbackQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)reportConcern:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)openArticleOrFeedWithArticleURL:(id)arg1 feedURL:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithConfigurationManager:(id)arg1;

@end

