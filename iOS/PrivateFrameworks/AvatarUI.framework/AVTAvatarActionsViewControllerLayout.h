//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarActionsViewControllerLayout-Protocol.h>

@protocol AVTViewLayoutInfo;

@interface AVTAvatarActionsViewControllerLayout : NSObject <AVTAvatarActionsViewControllerLayout>
{
    long long _buttonCount;
    id <AVTViewLayoutInfo> _avtViewLayout;
    struct CGSize _containerSize;
    struct UIEdgeInsets _edgeInsets;
}

+ (double)heightForButtonsViewWithButtonCount:(long long)arg1;
+ (double)buttonHeight;
@property(readonly, nonatomic) id <AVTViewLayoutInfo> avtViewLayout; // @synthesize avtViewLayout=_avtViewLayout;
@property(readonly, nonatomic) long long buttonCount; // @synthesize buttonCount=_buttonCount;
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(readonly, nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect userInfoFrame;
@property(readonly, nonatomic) struct CGRect avatarContainerViewFrame;
@property(readonly, nonatomic) struct CGRect actionButtonsViewFrame;
- (struct CGRect)actionButtonsViewFrameForButtonCount:(long long)arg1;
@property(readonly, nonatomic) double actionButtonsViewAlpha;
- (id)initWithContainerSize:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2 buttonCount:(long long)arg3 avtViewLayoutInfo:(id)arg4;

@end

