//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFConversationStorable-Protocol.h>
#import <AssistantServices/NSCopying-Protocol.h>

@class AFMutableConversationItem, NSString;

@interface AFConversationItem : NSObject <AFConversationStorable, NSCopying>
{
    AFMutableConversationItem *_delegateItem;
}

- (void).cxx_destruct;
- (id)associatedDataStore;
- (_Bool)isVirgin;
- (long long)presentationState;
- (id)aceCommandIdentifier;
- (id)dialogPhase;
- (id)aceObject;
- (long long)type;
- (id)revisionIdentifier;
- (id)identifier;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(long long)arg1 aceObject:(id)arg2 dialogPhase:(id)arg3 presentationState:(long long)arg4 aceCommandIdentifier:(id)arg5 virgin:(_Bool)arg6 associatedDataStore:(id)arg7;
- (id)initWithIdentifier:(id)arg1 revisionIdentifier:(id)arg2 type:(long long)arg3 aceObject:(id)arg4 dialogPhase:(id)arg5 presentationState:(long long)arg6 aceCommandIdentifier:(id)arg7 virgin:(_Bool)arg8 associatedDataStore:(id)arg9;
- (id)initWithDelegateItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

