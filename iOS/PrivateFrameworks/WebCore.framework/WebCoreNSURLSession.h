//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString, NSURLSessionConfiguration;
@protocol NSURLSessionTaskDelegate;

@interface WebCoreNSURLSession : NSObject
{
    struct RefPtr<WebCore::PlatformMediaResourceLoader, WTF::DumbPtrTraits<WebCore::PlatformMediaResourceLoader>> _loader;
    struct RetainPtr<id<NSURLSessionDelegate>> _delegate;
    struct RetainPtr<NSOperationQueue> _queue;
    NSString *_sessionDescription;
    struct HashSet<WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::PtrHash<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>> _dataTasks;
    struct HashSet<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin>>, WTF::PtrHash<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin>>>, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin>>>> _origins;
    // Error parsing type: {Lock="m_byte"{Atomic<unsigned char>="value"{atomic<unsigned char>="__a_"AC}}}, name: _dataTasksLock
    _Bool _invalidated;
    unsigned long long _nextTaskIdentifier;
    struct OSObjectPtr<NSObject<OS_dispatch_queue>*> _internalQueue;
    int _corsResults;
}

@property(copy) NSString *sessionDescription; // @synthesize sessionDescription=_sessionDescription;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isKindOfClass:(Class)arg1;
- (id)streamTaskWithNetService:(id)arg1;
- (id)streamTaskWithHostName:(id)arg1 port:(long long)arg2;
- (id)downloadTaskWithResumeData:(id)arg1;
- (id)downloadTaskWithURL:(id)arg1;
- (id)downloadTaskWithRequest:(id)arg1;
- (id)uploadTaskWithStreamedRequest:(id)arg1;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2;
- (id)dataTaskWithURL:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1;
- (void)getAllTasksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getTasksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)invalidateAndCancel;
- (void)finishTasksAndInvalidate;
-     // Error parsing type: B24@0:8r^{SecurityOrigin={atomic<unsigned int>=AI}{SecurityOriginData={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}{optional<unsigned short>=B(constexpr_storage_t<unsigned short>=CS)}}{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}BBBBiBBBB}16, name: wouldTaintOrigin:
@property(readonly) _Bool didPassCORSAccessChecks; // @dynamic didPassCORSAccessChecks;
// Error parsing type for property loader:
// Property attributes: T^{PlatformMediaResourceLoader=^^?{atomic<unsigned int>=AI}},R,D

@property(readonly, copy) NSURLSessionConfiguration *configuration; // @dynamic configuration;
@property(readonly, retain) NSOperationQueue *delegateQueue; // @dynamic delegateQueue;
@property(retain) id <NSURLSessionTaskDelegate> delegate; // @dynamic delegate;
- (void)task:(id)arg1 didReceiveResponseFromOrigin:(Ref_4cc64869 *)arg2;
- (void)task:(id)arg1 didReceiveCORSAccessCheckResult:(_Bool)arg2;
- (void)addDelegateOperation:(Function_89d21b48 *)arg1;
- (void)taskCompleted:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
-     // Error parsing type: @40@0:8^{PlatformMediaResourceLoader=^^?{atomic<unsigned int>=AI}}16@24@32, name: initWithResourceLoader:delegate:delegateQueue:

@end

