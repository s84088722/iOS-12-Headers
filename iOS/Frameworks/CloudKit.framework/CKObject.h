//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/CKPropertyCoding-Protocol.h>

@class CKObjCClass, NSSet, NSString;

@interface CKObject : NSObject <CKPropertyCoding>
{
}

@property(readonly, copy) NSString *description;
- (id)dictionaryPropertyEncoding;
@property(readonly, nonatomic) NSSet *propertyNamesNotToEncode;
@property(readonly, nonatomic) CKObjCClass *objcClass;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithPropertyDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

