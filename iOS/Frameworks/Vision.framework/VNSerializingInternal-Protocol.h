//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSMutableData;

@protocol VNSerializingInternal
@property(readonly, nonatomic) unsigned long long serializedLength;
- (id)initWithState:(NSData *)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;
- (unsigned long long)serializeStateIntoData:(NSMutableData *)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;
@end
