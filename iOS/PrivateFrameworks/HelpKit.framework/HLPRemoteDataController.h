//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL, TPSURLSessionItem;

@interface HLPRemoteDataController : NSObject
{
    _Bool _loading;
    _Bool _hasLoaded;
    NSURL *_URL;
    NSDictionary *_headerFields;
    TPSURLSessionItem *_URLSessionItem;
}

@property(retain, nonatomic) TPSURLSessionItem *URLSessionItem; // @synthesize URLSessionItem=_URLSessionItem;
@property(retain, nonatomic) NSDictionary *headerFields; // @synthesize headerFields=_headerFields;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) _Bool hasLoaded; // @synthesize hasLoaded=_hasLoaded;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
- (void).cxx_destruct;
- (void)processData:(id)arg1 formattedData:(id)arg2;
- (void)clearData;
- (void)cancel;
- (void)processFileURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchDataWithDataType:(long long)arg1 identifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithURL:(id)arg1;
- (void)dealloc;

@end

