//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/TKProtocolTokenWatcher-Protocol.h>

@class TKTokenWatcher;

__attribute__((visibility("hidden")))
@interface TKTokenWatcherProxy : NSObject <TKProtocolTokenWatcher>
{
    TKTokenWatcher *_watcher;
}

- (void).cxx_destruct;
- (void)removedToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)insertedToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)initWithWatcher:(id)arg1;

@end

