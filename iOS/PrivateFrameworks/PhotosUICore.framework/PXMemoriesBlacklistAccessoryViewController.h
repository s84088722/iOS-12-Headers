//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, PXMemoriesBlacklistAccessoryViewSpec, UIView;

@interface PXMemoriesBlacklistAccessoryViewController : UIViewController
{
    UIView *_accessoryView;
    PXMemoriesBlacklistAccessoryViewSpec *_viewSpec;
    NSArray *_constraints;
}

@property(copy, nonatomic, setter=_setConstraints:) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) PXMemoriesBlacklistAccessoryViewSpec *viewSpec; // @synthesize viewSpec=_viewSpec;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
- (void).cxx_destruct;
- (void)updateViewConstraints;
- (struct CGSize)preferredContentSize;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithAccessoryView:(id)arg1 viewSpec:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

