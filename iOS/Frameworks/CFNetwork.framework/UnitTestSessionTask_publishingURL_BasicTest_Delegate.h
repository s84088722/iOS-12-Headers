//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSURLSessionTaskDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UnitTestSessionTask_publishingURL_BasicTest_Delegate : NSObject <NSURLSessionTaskDelegate>
{
    SmartBlockWithArgs_343a5e9e _didDidCompleteWithErrorCompletionBlock;
}

@property(nonatomic) SmartBlockWithArgs_343a5e9e didDidCompleteWithErrorCompletionBlock; // @synthesize didDidCompleteWithErrorCompletionBlock=_didDidCompleteWithErrorCompletionBlock;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

