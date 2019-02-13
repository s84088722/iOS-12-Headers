//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "PQLInjecting-Protocol.h"

@class CPLPrequeliteTable, CPLPrequeliteType, NSData, NSString, PQLNameInjection;
@protocol PQLBindable, PQLInjecting;

@interface CPLPrequeliteVariable : NSObject <PQLInjecting, NSCopying>
{
    PQLNameInjection *_injection;
    id _cachedValue;
    id _cachedValueIdentifier;
    _Bool _shouldNotCacheValue;
    _Bool _allowsNull;
    _Bool _unique;
    NSString *_variableName;
    CPLPrequeliteTable *_table;
    CPLPrequeliteType *_type;
    id <PQLBindable> _bindableValueForDefaultValue;
    id _defaultValue;
}

+ (id)variableWithName:(id)arg1 forTable:(id)arg2 type:(id)arg3;
+ (id)variableWithName:(id)arg1 type:(id)arg2;
+ (id)indexVariableForVariableWithName:(id)arg1 forTable:(id)arg2;
+ (id)variableWithName:(id)arg1 defaultValue:(id)arg2 forTable:(id)arg3 type:(id)arg4;
+ (id)variableWithName:(id)arg1 defaultValue:(id)arg2 type:(id)arg3;
@property(nonatomic, getter=isUnique) _Bool unique; // @synthesize unique=_unique;
@property(nonatomic) _Bool allowsNull; // @synthesize allowsNull=_allowsNull;
@property(retain, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(retain, nonatomic) id <PQLBindable> bindableValueForDefaultValue; // @synthesize bindableValueForDefaultValue=_bindableValueForDefaultValue;
@property(nonatomic) _Bool shouldNotCacheValue; // @synthesize shouldNotCacheValue=_shouldNotCacheValue;
@property(readonly, nonatomic) CPLPrequeliteType *type; // @synthesize type=_type;
@property(readonly, nonatomic) CPLPrequeliteTable *table; // @synthesize table=_table;
@property(readonly, nonatomic) NSString *variableName; // @synthesize variableName=_variableName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)columnDefinitionWithDefaultValue:(id)arg1;
@property(readonly, nonatomic) id <PQLInjecting> columnDefinition;
- (id)valueFromSet:(id)arg1 atIndex:(int)arg2;
- (id)bindableValueForValue:(id)arg1;
- (void)discardCachedValue;
- (void)setCachedValue:(id)arg1 forIdentifier:(id)arg2;
- (id)cachedValueForIdentifier:(id)arg1;
- (_Bool)hasCachedValueForIdentifier:(id)arg1;
@property(readonly, copy) NSString *description;
- (int)bindWithStatement:(struct sqlite3_stmt *)arg1 startingAtIndex:(int)arg2;
@property(readonly, nonatomic) NSData *sql;
- (id)initWithName:(id)arg1 defaultValue:(id)arg2 table:(id)arg3 type:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
