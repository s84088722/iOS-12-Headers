//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"
#import "NSXMLParserDelegate-Protocol.h"

@class NSString, NSURL;

@interface FRCheckPodcastURLTask : NSObject <NSURLSessionDelegate, NSXMLParserDelegate>
{
    CDUnknownBlockType _completion;
    NSURL *_url;
    _Bool _isPodcast;
    NSString *_title;
    NSURL *_completionURL;
}

+ (void)checkURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 didStartMappingPrefix:(id)arg2 toURI:(id)arg3;
- (void)_resume;
- (id)getURLForFeedURL:(id)arg1;
- (id)initWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
