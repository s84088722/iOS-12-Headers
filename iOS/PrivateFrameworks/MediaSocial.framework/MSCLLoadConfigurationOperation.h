//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSLock, SKUIClientContext;

@interface MSCLLoadConfigurationOperation : NSOperation
{
    SKUIClientContext *_clientContext;
    CDUnknownBlockType _configurationBlock;
    NSLock *_lock;
}

- (void).cxx_destruct;
- (id)_loadAuthorWithAccount:(id)arg1 clientContext:(id)arg2;
- (id)_configurationWithAccount:(id)arg1 clientContext:(id)arg2 error:(id *)arg3;
- (id)_authenticateAccount:(id)arg1 error:(id *)arg2;
- (void)main;
@property(copy) CDUnknownBlockType configurationBlock;
@property(retain) SKUIClientContext *clientContext;
- (id)init;

@end

