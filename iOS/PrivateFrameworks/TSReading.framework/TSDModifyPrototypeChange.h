//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSDPrototypeChange-Protocol.h>

@class NSString, TSDPropertySourceForModifyPrototypeChange, TSSMutablePropertySet, TSSPropertyMap;
@protocol TSSPropertySource;

@interface TSDModifyPrototypeChange : NSObject <TSDPrototypeChange>
{
    id mPrototype;
    TSSMutablePropertySet *mChangedPropertySet;
    TSSPropertyMap *mChangedPropertyMapBeforeChange;
    TSSPropertyMap *mChangedPropertyMapAfterChange;
    TSDPropertySourceForModifyPrototypeChange *mPropertySourceBeforeChange;
    TSDPropertySourceForModifyPrototypeChange *mPropertySourceAfterChange;
    TSSMutablePropertySet *mPropertiesWithOldValuesRecordedButNotNewValues;
}

@property(readonly, retain) TSSMutablePropertySet *i_propertiesWithOldValuesRecordedButNotNewValues; // @synthesize i_propertiesWithOldValuesRecordedButNotNewValues=mPropertiesWithOldValuesRecordedButNotNewValues;
@property(readonly, retain) TSSPropertyMap *changedPropertyMapAfterChange; // @synthesize changedPropertyMapAfterChange=mChangedPropertyMapAfterChange;
@property(readonly, retain) TSSPropertyMap *changedPropertyMapBeforeChange; // @synthesize changedPropertyMapBeforeChange=mChangedPropertyMapBeforeChange;
@property(readonly, retain) TSSMutablePropertySet *changedPropertySet; // @synthesize changedPropertySet=mChangedPropertySet;
@property(readonly, retain) id prototype; // @synthesize prototype=mPrototype;
- (_Bool)propertiesAreChanging:(id)arg1;
- (_Bool)propertyIsChanging:(int)arg1;
@property(readonly, retain) id <TSSPropertySource> propertiesAfterChange;
@property(readonly, retain) id <TSSPropertySource> propertiesBeforeChange;
@property(readonly, retain) id replacement;
@property(readonly) _Bool prototypeIsBeingDeleted;
@property(readonly) _Bool prototypeIsBeingReplaced;
@property(readonly) _Bool prototypeIsBeingModified;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initModifyPrototypeChangeForPrototype:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

