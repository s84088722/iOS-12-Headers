//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOXPCUtil : NSObject
{
}

+ (id)createServerConnectionWithPort:(const char *)arg1 queue:(id)arg2 debugIdentifier:(id)arg3 eventHandler:(CDUnknownBlockType)arg4;
+ (id)createServerConnectionWithQueue:(id)arg1 debugIdentifier:(id)arg2 eventHandler:(CDUnknownBlockType)arg3;
+ (void)setDaemonXPCConnectionCreationBlock:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)daemonXPCConnectionCreationBlock;

@end
