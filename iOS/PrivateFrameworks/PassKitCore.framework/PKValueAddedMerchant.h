//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData;

@interface PKValueAddedMerchant : NSObject <NSSecureCoding>
{
    NSData *_identifier;
    long long _timesPresented;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long timesPresented; // @synthesize timesPresented=_timesPresented;
@property(retain, nonatomic) NSData *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

