//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSNumber, NSString, RestoreItem;

@interface DemotedApplication : NSObject <NSCopying>
{
    NSString *_bundleID;
    NSNumber *_externalVersionID;
    NSNumber *_itemID;
    NSNumber *_storeFrontID;
    NSString *_vendorID;
    NSString *_accountID;
    NSNumber *_downloaderID;
    NSNumber *_familyID;
    NSNumber *_purchaserID;
    NSNumber *_failureReason;
}

@property(copy, nonatomic) NSNumber *failureReason; // @synthesize failureReason=_failureReason;
@property(copy, nonatomic) NSNumber *purchaserID; // @synthesize purchaserID=_purchaserID;
@property(copy, nonatomic) NSNumber *familyID; // @synthesize familyID=_familyID;
@property(copy, nonatomic) NSNumber *downloaderID; // @synthesize downloaderID=_downloaderID;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(copy, nonatomic) NSString *vendorID; // @synthesize vendorID=_vendorID;
@property(copy, nonatomic) NSNumber *storeFrontID; // @synthesize storeFrontID=_storeFrontID;
@property(copy, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(copy, nonatomic) NSNumber *externalVersionID; // @synthesize externalVersionID=_externalVersionID;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) RestoreItem *restoreItem;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithApplication:(id)arg1;

@end
