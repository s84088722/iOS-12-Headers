//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSPObject.h>

#import <TSReading/TSDOwningAttachment-Protocol.h>
#import <TSReading/TSKDocumentObject-Protocol.h>
#import <TSReading/TSPCopying-Protocol.h>

@class NSString, TSWPStorage;

@interface TSWPAttachment : TSPObject <TSKDocumentObject, TSDOwningAttachment, TSPCopying>
{
    TSWPStorage *_parentStorage;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (unsigned int)attributeArrayKind;
@property(nonatomic) TSWPStorage *parentStorage; // @synthesize parentStorage=_parentStorage;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)infoChanged;
@property(readonly, nonatomic) unsigned long long enabledKnobMask;
@property(readonly, nonatomic) _Bool specifiesEnabledKnobMask;
@property(readonly, nonatomic) _Bool isSearchable;
@property(readonly, nonatomic) Class positionerClass;
@property(readonly, nonatomic) _Bool isAttachedToBodyText;
@property(readonly, nonatomic) _Bool isPartitioned;
@property(readonly, nonatomic) _Bool isAnchored;
@property(readonly, nonatomic) _Bool isDrawable;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (unsigned long long)findCharIndex;
- (id)topLevelAttachment;
- (_Bool)changesWithPageCount;
- (int)elementKind;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;
- (_Bool)changesWithPageNumber;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

