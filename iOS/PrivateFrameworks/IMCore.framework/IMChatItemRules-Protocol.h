//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMCore/NSObject-Protocol.h>

@class IMChat, IMChatItem, IMItem, NSArray, NSMutableArray;

@protocol IMChatItemRules <NSObject>
- (IMItem *)_itemWithChatItemsDeleted:(NSArray *)arg1 fromItem:(IMItem *)arg2;
- (_Bool)_shouldReloadChatItemWithAssociatedChatItems:(NSArray *)arg1 oldAssociatedChatItems:(NSArray *)arg2;
- (_Bool)_shouldReloadChatItem:(IMChatItem *)arg1 oldChatItem:(IMChatItem *)arg2;
- (void)_didProcessChatItems:(NSMutableArray *)arg1;
- (_Bool)_shouldRegenerateChatItemsForItem:(IMItem *)arg1 previousItem:(IMItem *)arg2 oldPreviousItem:(IMItem *)arg3;
- (NSArray *)_chatItemsForItem:(IMItem *)arg1 previousItem:(IMItem *)arg2;
- (IMChatItem *)_nextStaleChatItem;
- (void)_setNextStaleChatItem:(IMChatItem *)arg1;
- (NSMutableArray *)_chatItems;
- (void)_setItems:(NSArray *)arg1;
- (NSArray *)_items;
- (id)_initWithChat:(IMChat *)arg1;
@end

