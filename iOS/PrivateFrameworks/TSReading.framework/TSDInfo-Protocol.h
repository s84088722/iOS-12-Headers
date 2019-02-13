//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>
#import <TSReading/TSDInfoUsingObjectPlaceholderGeometry-Protocol.h>
#import <TSReading/TSKModel-Protocol.h>
#import <TSReading/TSPCopying-Protocol.h>

@class NSObject, TSDInfoGeometry, TSPObject;
@protocol TSDContainerInfo, TSDOwningAttachment;

@protocol TSDInfo <NSObject, TSKModel, TSPCopying, TSDInfoUsingObjectPlaceholderGeometry>
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText;
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (_Bool)isThemeContent;
- (Class)repClass;
- (Class)layoutClass;
- (void)clearBackPointerToParentInfoIfNeeded:(NSObject<TSDContainerInfo> *)arg1;
@end
