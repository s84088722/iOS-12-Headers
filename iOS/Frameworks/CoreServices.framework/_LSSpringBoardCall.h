//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreServices/NSCopying-Protocol.h>

@class NSDictionary, NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface _LSSpringBoardCall : NSObject <NSCopying>
{
    NSString *_schemeIfNotFileURL;
    _Bool _callCompletionHandlerWhenFullyComplete;
    NSDictionary *_launchOptions;
    NSString *_applicationIdentifier;
    NSXPCConnection *_clientXPCConnection;
}

+ (id)springBoardQueue;
@property _Bool callCompletionHandlerWhenFullyComplete; // @synthesize callCompletionHandlerWhenFullyComplete=_callCompletionHandlerWhenFullyComplete;
@property(retain) NSXPCConnection *clientXPCConnection; // @synthesize clientXPCConnection=_clientXPCConnection;
@property(copy) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (void)callWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(copy) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
- (void)dealloc;
- (void)promptAndCallSpringBoardWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)lieWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)callSpringBoardWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

