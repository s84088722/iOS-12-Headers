//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol NSObject;

@interface IDSSocketPairMessage : NSObject
{
    NSData *_underlyingData;
    unsigned char _command;
    id <NSObject> _context;
    NSString *_topic;
    _Bool _useDynamicServiceName;
    _Bool _cancelled;
}

+ (id)messageWithCommand:(unsigned char)arg1 data:(id)arg2;
+ (id)messageWithHeaderData:(id)arg1 data:(id)arg2;
+ (id)messageWithData:(id)arg1;
+ (unsigned int)dataLengthFromHeaderData:(id)arg1;
+ (unsigned int)headerDataSize;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) _Bool useDynamicServiceName; // @synthesize useDynamicServiceName=_useDynamicServiceName;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(retain, nonatomic) id <NSObject> context; // @synthesize context=_context;
@property(readonly, nonatomic) unsigned char command; // @synthesize command=_command;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *underlyingData; // @synthesize underlyingData=_underlyingData;
- (id)_existingUnderlyingData;
@property(readonly, nonatomic) unsigned long long underlyingDataLength;
- (id)_nonHeaderData;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

@end

