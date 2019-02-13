//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INIntentDescriptionExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface INIntentDescription : NSObject <INIntentDescriptionExport, NSCopying>
{
    _Bool _isPrivate;
    NSString *_name;
    NSString *_responseName;
    Class _facadeClass;
    Class _dataClass;
    NSString *_type;
    SEL _handleSelector;
    SEL _confirmSelector;
    NSDictionary *_slotsByName;
}

@property(readonly, copy, nonatomic) NSDictionary *slotsByName; // @synthesize slotsByName=_slotsByName;
@property(readonly, nonatomic) SEL confirmSelector; // @synthesize confirmSelector=_confirmSelector;
@property(readonly, nonatomic) SEL handleSelector; // @synthesize handleSelector=_handleSelector;
@property(readonly, nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) Class dataClass; // @synthesize dataClass=_dataClass;
@property(readonly, nonatomic) Class facadeClass; // @synthesize facadeClass=_facadeClass;
@property(readonly, copy, nonatomic) NSString *responseName; // @synthesize responseName=_responseName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithName:(id)arg1 responseName:(id)arg2 facadeClass:(Class)arg3 dataClass:(Class)arg4 type:(id)arg5 isPrivate:(_Bool)arg6 handleSelector:(SEL)arg7 confirmSelector:(SEL)arg8 slotsByName:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

