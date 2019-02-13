//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKEditItemViewController, EKEvent;

@protocol EKEditItemViewControllerDelegate <NSObject>
- (_Bool)editItemViewControllerShouldShowDetachAlert;
- (void)editItemViewController:(EKEditItemViewController *)arg1 didCompleteWithAction:(int)arg2;

@optional
- (EKEvent *)editItemEventToDetach;
- (void)editItemViewControllerWantsKeyboardPinned:(_Bool)arg1;
- (_Bool)editItemViewControllerSave:(EKEditItemViewController *)arg1;
@end
