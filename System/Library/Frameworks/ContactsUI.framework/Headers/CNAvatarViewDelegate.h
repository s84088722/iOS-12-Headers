/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:44 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNAvatarViewDelegate <NSObject>
@optional
-(BOOL)shouldShowActionsForAvatarView:(id)arg1;
-(id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
-(BOOL)avatarView:(id)arg1 shouldShowContact:(id)arg2;
-(void)willBeginPreviewInteractionForAvatarView:(id)arg1;
-(void)willDismissActionsForAvatarView:(id)arg1;
-(void)didDismissActionsForAvatarView:(id)arg1;
-(void)didUpdateContentForAvatarView:(id)arg1;

@required
-(id)presentingViewControllerForAvatarView:(id)arg1;

@end
