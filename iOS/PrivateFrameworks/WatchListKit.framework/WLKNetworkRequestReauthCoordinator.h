//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchListKit/NSLocking-Protocol.h>

@class NSLock;

@interface WLKNetworkRequestReauthCoordinator : NSObject <NSLocking>
{
    NSLock *_lock;
    _Bool _sessionPrompt;
}

+ (id)coordinator;
@property _Bool sessionPrompt; // @synthesize sessionPrompt=_sessionPrompt;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unlock;
- (void)lock;
- (_Bool)didPrompt;
- (void)markPrompt;
- (void)dealloc;
- (id)_init;

@end

