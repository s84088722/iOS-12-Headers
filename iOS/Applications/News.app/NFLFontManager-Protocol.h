//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSSet;
@protocol OS_dispatch_queue;

@protocol NFLFontManager <NSObject>
- (void)loadFontsAsync:(NSSet *)arg1 relativePriority:(long long)arg2 callbackQueue:(NSObject<OS_dispatch_queue> *)arg3 completion:(void (^)(void))arg4;
@end

