//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface AFPeerInfo : NSObject <NSSecureCoding>
{
    NSString *_idsIdentifier;
    NSString *_idsFirstRoutableInternetDestination;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *idsFirstRoutableInternetDestination; // @synthesize idsFirstRoutableInternetDestination=_idsFirstRoutableInternetDestination;
@property(copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)_init;

@end

