//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StreamingZip/NSObject-Protocol.h>
#import <StreamingZip/NSSecureCoding-Protocol.h>

@class NSData, NSError, NSString;
@protocol SZExtractorDelegate;

@protocol SZExtractor <NSObject, NSSecureCoding>
@property(nonatomic) __weak id <SZExtractorDelegate> extractorDelegate;
- (void)terminateStreamWithError:(NSError *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)finishStreamWithCompletionBlock:(void (^)(NSError *))arg1;
- (void)suspendStreamWithCompletionBlock:(void (^)(unsigned long long, NSError *))arg1;
- (void)supplyBytes:(NSData *)arg1 withCompletionBlock:(void (^)(NSError *, _Bool))arg2;
- (void)prepareForExtraction:(void (^)(unsigned long long, NSError *))arg1;

@optional
@property(readonly, nonatomic) _Bool doesConsumeExtractedData;
- (void)prepareForExtractionToPath:(NSString *)arg1 completionBlock:(void (^)(unsigned long long, NSError *))arg2;
- (_Bool)consumeExtractedDataIfNeeded;
@end

