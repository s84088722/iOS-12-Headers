//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface StoreDownloadQueueRequest : NSObject <NSCopying>
{
    NSNumber *_accountIdentifier;
    _Bool _cancelsDuplicateDownloads;
    long long _purchaseIdentifier;
    NSString *_queueIdentifier;
    NSString *_reason;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *queueIdentifier; // @synthesize queueIdentifier=_queueIdentifier;
@property(nonatomic) long long purchaseIdentifier; // @synthesize purchaseIdentifier=_purchaseIdentifier;
@property(nonatomic) _Bool cancelsDuplicateDownloads; // @synthesize cancelsDuplicateDownloads=_cancelsDuplicateDownloads;
@property(retain, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, nonatomic) NSString *queueCountURLBagKey;
@property(readonly, nonatomic) NSString *queueContentsURLBagKey;
- (void)dealloc;

@end

