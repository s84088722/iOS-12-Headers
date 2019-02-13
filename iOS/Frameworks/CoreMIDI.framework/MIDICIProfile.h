//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMIDI/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface MIDICIProfile : NSObject <NSSecureCoding>
{
    NSString *name;
    NSData *profileID;
}

+ (_Bool)supportsSecureCoding;
+ (id)description;
@property(readonly, nonatomic) NSData *profileID; // @synthesize profileID;
@property(readonly, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (_Bool)isEqualTo:(id)arg1;
- (const void *)rawData;
- (id)description;
- (id)initWithData:(id)arg1 name:(id)arg2;
- (id)init;

@end

