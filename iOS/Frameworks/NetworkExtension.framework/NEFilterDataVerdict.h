//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEFilterVerdict.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSURL;

@interface NEFilterDataVerdict : NEFilterVerdict <NSSecureCoding, NSCopying>
{
    unsigned long long _passBytes;
    unsigned long long _peekBytes;
    NSURL *_url;
}

+ (id)dataVerdictWithPassBytes:(unsigned long long)arg1 peekBytes:(unsigned long long)arg2;
+ (id)remediateVerdictWithRemediationURLMapKey:(id)arg1 remediationButtonTextMapKey:(id)arg2;
+ (id)dropVerdict;
+ (id)allowVerdict;
+ (id)needRulesVerdict;
+ (_Bool)supportsSecureCoding;
@property(retain) NSURL *url; // @synthesize url=_url;
@property unsigned long long peekBytes; // @synthesize peekBytes=_peekBytes;
@property unsigned long long passBytes; // @synthesize passBytes=_passBytes;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

