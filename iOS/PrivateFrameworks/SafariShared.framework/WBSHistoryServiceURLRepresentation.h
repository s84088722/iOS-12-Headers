//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSCopying-Protocol.h>
#import <SafariShared/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface WBSHistoryServiceURLRepresentation : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_urlString;
    NSData *_urlHash;
    NSData *_urlSalt;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSData *urlSalt; // @synthesize urlSalt=_urlSalt;
@property(readonly, copy, nonatomic) NSData *urlHash; // @synthesize urlHash=_urlHash;
@property(readonly, copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURLHash:(id)arg1 salt:(id)arg2;
- (id)initWithURLString:(id)arg1;
- (id)init;

@end

