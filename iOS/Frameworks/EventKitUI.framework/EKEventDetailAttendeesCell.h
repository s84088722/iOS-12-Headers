//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailCell.h>

@class EKEventDetailAttendeesListView, NSArray, NSLayoutConstraint, NSObject, UIImageView, UILabel, UIViewController;
@protocol EKEventDetailAttendeeCellDelegate;

__attribute__((visibility("hidden")))
@interface EKEventDetailAttendeesCell : EKEventDetailCell
{
    UILabel *_titleLabel;
    UILabel *_countLabel;
    UIImageView *_disclosure;
    NSLayoutConstraint *_listHeight;
    EKEventDetailAttendeesListView *_attendeesListView;
    NSArray *_cachedAttendeesWithoutOrganizerAndLocations;
    UIViewController *_viewController;
    NSObject<EKEventDetailAttendeeCellDelegate> *_attendeeCellDelegate;
}

+ (_Bool)requiresConstraintBasedLayout;
@property __weak NSObject<EKEventDetailAttendeeCellDelegate> *attendeeCellDelegate; // @synthesize attendeeCellDelegate=_attendeeCellDelegate;
@property __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (id)_attendeesListView;
- (void)_setAttendees:(id)arg1;
- (void)_attendeesDidFinishLoadingForTest;
- (id)_attendeesWithoutOrganizerAndLocations;
- (_Bool)update;
- (double)displayHeight;
- (double)footerInset;
- (double)listToTitle;
- (double)headerInset;
- (id)initWithEvent:(id)arg1 editable:(_Bool)arg2;

@end

