//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@class NSError;

@interface SGXPCResponse : NSObject <NSSecureCoding>
{
    NSError *_error;
}

+ (id)responseWithError:(id)arg1;
+ (id)response;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;

@end

