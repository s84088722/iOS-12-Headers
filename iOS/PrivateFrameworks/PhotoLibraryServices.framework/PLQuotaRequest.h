//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class NSString;

@interface PLQuotaRequest : AARequest
{
    NSString *_authToken;
    NSString *_personID;
}

- (void).cxx_destruct;
- (id)urlRequest;
- (id)initWithURLString:(id)arg1 authToken:(id)arg2 personID:(id)arg3;

@end

