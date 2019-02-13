//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iAdServices/NSSecureCoding-Protocol.h>

@interface ADAdSpaceEventInfo : NSObject <NSSecureCoding>
{
    unsigned long long _screenfuls;
    unsigned long long _slotPosition;
    unsigned long long _reuseCount;
    long long _lastErrorCode;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long lastErrorCode; // @synthesize lastErrorCode=_lastErrorCode;
@property(nonatomic) unsigned long long reuseCount; // @synthesize reuseCount=_reuseCount;
@property(nonatomic) unsigned long long slotPosition; // @synthesize slotPosition=_slotPosition;
@property(nonatomic) unsigned long long screenfuls; // @synthesize screenfuls=_screenfuls;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecipientInfo:(id)arg1 reuseCount:(unsigned long long)arg2;

@end

