//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIInterfaceActionGroupView.h>

#import <ChatKit/UIInterfaceActionHandlerInvocationDelegate-Protocol.h>

@class CKActionSheetMenuTitleView, NSString;
@protocol CKActionSheetMenuViewDelegate;

@interface CKActionSheetMenuView : UIInterfaceActionGroupView <UIInterfaceActionHandlerInvocationDelegate>
{
    CKActionSheetMenuTitleView *_titleView;
    id <CKActionSheetMenuViewDelegate> _delegate;
}

@property(nonatomic) __weak id <CKActionSheetMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateTitleConstraintsForBoundingRect:(struct CGRect)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 interfaceActions:(id)arg2;
- (void)dismissSelf;
- (void)interfaceAction:(id)arg1 invokeActionHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

