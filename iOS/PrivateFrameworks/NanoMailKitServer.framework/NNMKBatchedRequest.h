//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NNMKProtoFetchRequest, NSMutableDictionary;

@interface NNMKBatchedRequest : NSObject
{
    NSMutableDictionary *_messagesToBeSentInBatch;
    NNMKProtoFetchRequest *_latestFetchRequest;
}

@property(retain, nonatomic) NNMKProtoFetchRequest *latestFetchRequest; // @synthesize latestFetchRequest=_latestFetchRequest;
@property(retain, nonatomic) NSMutableDictionary *messagesToBeSentInBatch; // @synthesize messagesToBeSentInBatch=_messagesToBeSentInBatch;
- (void).cxx_destruct;
- (id)diffFromMessages:(id)arg1 maxMessagesToAdd:(unsigned long long)arg2;
- (id)init;

@end

