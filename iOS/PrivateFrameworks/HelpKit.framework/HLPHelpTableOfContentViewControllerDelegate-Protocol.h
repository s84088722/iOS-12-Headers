//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HelpKit/NSObject-Protocol.h>

@class HLPHelpTableOfContentViewController, HLPHelpTopicItem;

@protocol HLPHelpTableOfContentViewControllerDelegate <NSObject>
- (HLPHelpTopicItem *)currentHelpTopicItemForTableOfContentViewController:(HLPHelpTableOfContentViewController *)arg1;
- (void)tableOfContentViewController:(HLPHelpTableOfContentViewController *)arg1 showHelpTopicItem:(HLPHelpTopicItem *)arg2;
- (void)tableOfContentViewControllerShowHelpBookInfo:(HLPHelpTableOfContentViewController *)arg1;
@end

