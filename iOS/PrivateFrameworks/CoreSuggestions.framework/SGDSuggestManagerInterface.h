//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGDSuggestManagerInterface : NSObject
{
}

+ (void)interface:(id)arg1 returnsArrayOf:(Class)arg2 forSelector:(SEL)arg3;
+ (void)interface:(id)arg1 returns:(Class)arg2 forSelector:(SEL)arg3;
+ (void)_whitelistXPCInterface:(id)arg1 forProtocol:(id)arg2 alreadyWhitelisted:(id)arg3;
+ (void)_addSGXPCResponseToReplyWhitelistForProtocol:(id)arg1 interface:(id)arg2;
+ (void)_addSGXPCResponseToReplyWhitelistForMethods:(struct objc_method_description *)arg1 count:(unsigned int)arg2 interface:(id)arg3;
+ (id)xpcInterfaceForProtocol:(id)arg1;
+ (void)_registerWhitelistBlock:(CDUnknownBlockType)arg1 forProtocol:(id)arg2;
+ (void)initialize;
+ (id)xpcInterface;

@end

