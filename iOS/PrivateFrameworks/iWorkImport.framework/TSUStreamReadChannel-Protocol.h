//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@protocol TSUStreamReadChannel <NSObject>
- (void)close;
- (void)readWithHandler:(void (^)(_Bool, NSObject<OS_dispatch_data> *, NSError *))arg1;
@end

