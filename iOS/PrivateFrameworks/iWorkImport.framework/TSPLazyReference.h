//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/TSPReferenceItem-Protocol.h>

@class NSString, NSUUID, TSPComponent, TSPObject;
@protocol TSPLazyReferenceDelegate;

__attribute__((visibility("hidden")))
@interface TSPLazyReference : NSObject <TSPReferenceItem, NSCopying>
{
    TSPObject *_strongObject;
    TSPObject *_weakObject;
    struct {
        unsigned int ownershipMode:2;
        unsigned int isExternal:1;
        unsigned int allowUnknownObject:1;
        unsigned int keepObjectInMemory:1;
    } _flags;
    long long _identifier;
    id <TSPLazyReferenceDelegate> _delegate;
    TSPComponent *_component;
    Class _objectClass;
}

+ (id)weakReferenceForObject:(id)arg1 retainedUntilArchived:(_Bool)arg2;
+ (id)weakReferenceForObject:(id)arg1;
+ (id)referenceForObject:(id)arg1;
@property(nonatomic) Class objectClass; // @synthesize objectClass=_objectClass;
@property(nonatomic) __weak TSPComponent *component; // @synthesize component=_component;
@property(nonatomic) __weak id <TSPLazyReferenceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long tsp_identifier; // @synthesize tsp_identifier=_identifier;
- (void).cxx_destruct;
- (id)additionalDescription;
@property(readonly, copy) NSString *description;
- (void)resetToIdentifier:(long long)arg1;
- (void)resetIdentifierFromCopy:(_Bool)arg1;
@property(nonatomic) _Bool isExternal;
@property(readonly, nonatomic) _Bool allowUnknownObject;
@property(readonly, nonatomic) long long ownershipMode;
- (long long)releaseObjectIfPossible;
- (void)retainObject:(id)arg1;
@property(readonly, nonatomic) TSPObject *strongObject;
@property(readonly, nonatomic) TSPObject *weakObject;
@property(readonly, nonatomic) NSUUID *objectUUID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2;
- (_Bool)referencesObject:(id)arg1;
- (_Bool)isEqualToLazyReference:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool keepObjectInMemory;
@property(readonly, nonatomic) id objectIfLoaded;
- (id)objectAndReturnError:(id *)arg1;
@property(readonly, nonatomic) _Bool tsp_isLazyReference;
- (id)initWithObject:(id)arg1 ownershipMode:(long long)arg2;
- (id)initWeakReferenceWithObject:(id)arg1 retainedUntilArchived:(_Bool)arg2;
- (id)initWeakReferenceWithObject:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithDelegate:(id)arg1 identifier:(long long)arg2 ownershipMode:(long long)arg3 allowUnknownObject:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

