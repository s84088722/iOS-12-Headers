//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AvatarUI/NSObject-Protocol.h>

@protocol AVTAvatarAttributeEditorSectionController, AVTAvatarAttributeEditorSectionItem;

@protocol AVTAvatarAttributeEditorControllerSubSelectionDelegate <NSObject>
- (void)attributeEditorSectionControllerNeedsLayoutUpdate:(id <AVTAvatarAttributeEditorSectionController>)arg1;
- (void)attributeEditorSectionController:(id <AVTAvatarAttributeEditorSectionController>)arg1 didUpdateSectionItem:(id <AVTAvatarAttributeEditorSectionItem>)arg2;
- (void)attributeEditorSectionController:(id <AVTAvatarAttributeEditorSectionController>)arg1 didSelectSectionItem:(id <AVTAvatarAttributeEditorSectionItem>)arg2;
@end

