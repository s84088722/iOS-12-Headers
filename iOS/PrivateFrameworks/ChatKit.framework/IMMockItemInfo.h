//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/NSSecureCoding-Protocol.h>

@interface IMMockItemInfo : NSObject <NSSecureCoding>
{
    _Bool _outgoing;
    long long _type;
}

+ (_Bool)supportsSecureCoding;
+ (id)decodedMockItemInfoArray:(id)arg1;
+ (id)encodedMockItemInfoArray:(id)arg1;
+ (id)defaultMockInfoArray;
@property(readonly, nonatomic) _Bool outgoing; // @synthesize outgoing=_outgoing;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithMockItemType:(long long)arg1 outgoing:(_Bool)arg2;

@end

