//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSConnection, NSSet;

__attribute__((visibility("hidden")))
@interface NSConnectionHelper : NSObject
{
    double reqLim;
    double repLim;
    _Bool remoteUsesKeyedDO;
    NSSet *whitelist;
    _Bool useKeyedDO;
    NSConnection *parent;
}

- (void)setWhitelist:(id)arg1;
- (void)dealloc;
- (id)init;

@end
