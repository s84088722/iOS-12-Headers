//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSString, SSAuthenticationContext;

@interface CloudServiceAPITokenOperation : ISOperation
{
    NSString *_clientToken;
    NSString *_requestingBundleID;
    NSString *_requestingBundleVersion;
    SSAuthenticationContext *_authenticationContext;
    CDUnknownBlockType _responseBlock;
}

- (void).cxx_destruct;
- (void)run;
@property(copy) CDUnknownBlockType responseBlock;
@property(copy) SSAuthenticationContext *authenticationContext;
@property(copy) NSString *requestingBundleVersion;
@property(copy) NSString *requestingBundleID;
@property(copy) NSString *clientToken;

@end

