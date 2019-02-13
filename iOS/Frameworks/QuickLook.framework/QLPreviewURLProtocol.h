//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

__attribute__((visibility("hidden")))
@interface QLPreviewURLProtocol : NSURLProtocol
{
}

+ (id)mimeTypeForAttachmentURL:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (void)stopLoadingProtocol:(id)arg1;
+ (void)startLoadingProtocol:(id)arg1;
+ (id)errorForURL:(id)arg1;
+ (void)setError:(id)arg1 forURL:(id)arg2;
+ (void)appendData:(id)arg1 forURL:(id)arg2 lastChunk:(_Bool)arg3;
+ (void)unregisterURLs:(id)arg1 andPreview:(id)arg2;
+ (void)_unregisterURL:(id)arg1;
+ (id)_errorForNoPreview;
+ (id)_errorForCancel;
+ (id)_errorForAbort;
+ (void)registerURL:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
+ (void)registerPreview:(id)arg1;
+ (id)newURLWithContentID:(id)arg1 baseURL:(id)arg2;
+ (id)newUniqueURLWithName:(id)arg1;
+ (void)initialize;
- (void)stopLoading;
- (void)startLoading;

@end

