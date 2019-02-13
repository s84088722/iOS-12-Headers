//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@interface CTIMSRegistrationTransportInfo : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isRegistered;
    int _contextType;
    int _transportType;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(nonatomic) int contextType; // @synthesize contextType=_contextType;
@property(nonatomic) _Bool isRegistered; // @synthesize isRegistered=_isRegistered;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end
