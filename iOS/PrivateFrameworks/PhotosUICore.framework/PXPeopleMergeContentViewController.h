//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@protocol PXPerson;

@interface PXPeopleMergeContentViewController : UIViewController
{
    id <PXPerson> _targetPerson;
    id <PXPerson> _draggedPerson;
}

@property(retain, nonatomic) id <PXPerson> draggedPerson; // @synthesize draggedPerson=_draggedPerson;
@property(retain, nonatomic) id <PXPerson> targetPerson; // @synthesize targetPerson=_targetPerson;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (struct CGSize)preferredContentSize;
- (id)initWithTargetPerson:(id)arg1 draggedPerson:(id)arg2;

@end

