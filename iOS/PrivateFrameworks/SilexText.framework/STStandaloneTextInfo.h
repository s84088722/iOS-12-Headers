//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexText/TSDContainerInfo-Protocol.h>

@class NSString, STTextTangierStorage, TSDInfoGeometry, TSPObject;
@protocol TSDContainerInfo, TSDOwningAttachment;

@interface STStandaloneTextInfo : NSObject <TSDContainerInfo>
{
    _Bool floatingAboveText;
    _Bool anchoredToText;
    _Bool inlineWithText;
    _Bool attachedToBodyText;
    TSDInfoGeometry *geometry;
    TSPObject<TSDOwningAttachment> *owningAttachment;
    NSObject<TSDContainerInfo> *parentInfo;
    STTextTangierStorage *_storage;
}

@property(readonly, nonatomic) STTextTangierStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText; // @synthesize attachedToBodyText;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText; // @synthesize inlineWithText;
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText; // @synthesize anchoredToText;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText; // @synthesize floatingAboveText;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @synthesize parentInfo;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // @synthesize owningAttachment;
@property(copy, nonatomic) TSDInfoGeometry *geometry; // @synthesize geometry;
- (void).cxx_destruct;
- (id)copyWithContext:(id)arg1;
- (id)childInfos;
- (_Bool)isThemeContent;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (Class)repClass;
- (Class)layoutClass;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
- (_Bool)inlineWithText;
- (_Bool)floatingAboveText;
- (_Bool)attachedToBodyText;
- (_Bool)anchoredToText;
- (void)dealloc;
- (id)initWithStorage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property(readonly) Class superclass;

@end

