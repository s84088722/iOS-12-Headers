//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKEventViewController.h>

#import <EventKitUI/EKEditItemViewControllerProtocol-Protocol.h>
#import <EventKitUI/EKEventTitleDetailItemDelegate-Protocol.h>

@class EKEvent, NSMutableArray;
@protocol EKEditItemViewControllerDelegate;

@interface EKUIEventDiffViewController : EKEventViewController <EKEventTitleDetailItemDelegate, EKEditItemViewControllerProtocol>
{
    NSMutableArray *_items;
    id <EKEditItemViewControllerDelegate> _editDelegate;
    EKEvent *_originalEvent;
}

@property(retain) EKEvent *originalEvent; // @synthesize originalEvent=_originalEvent;
@property(nonatomic) __weak id <EKEditItemViewControllerDelegate> editDelegate; // @synthesize editDelegate=_editDelegate;
- (void).cxx_destruct;
- (id)title;
- (void)editButtonPressed;
- (_Bool)shouldShowEditButtonInline;
- (void)apply;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_updateNavBarAnimated:(_Bool)arg1;
- (id)_items;
- (id)_statusButtons;
@property(nonatomic) _Bool useCustomBackButton;
@property(nonatomic) _Bool editItemShouldBeAskedForInjectableViewController;
@property(nonatomic) _Bool presentModally;
- (id)initWithOriginalEvent:(id)arg1 newEvent:(id)arg2;

@end

