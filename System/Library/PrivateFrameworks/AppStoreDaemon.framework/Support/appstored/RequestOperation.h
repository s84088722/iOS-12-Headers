//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class ASDRequestOptions, ASDRequestResponse, XPCClient;

@interface RequestOperation : ISOperation
{
    ASDRequestResponse *_response;
    XPCClient *_client;
    ASDRequestOptions *_options;
}

@property(readonly, nonatomic) ASDRequestOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) XPCClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)_setResponse:(id)arg1;
@property(readonly) ASDRequestResponse *response; // @synthesize response=_response;
- (id)initForClient:(id)arg1 withOptions:(id)arg2;

@end

