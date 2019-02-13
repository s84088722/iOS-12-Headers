//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COSSetupPageViewController.h"

#import "PBAutomationDocumentation-Protocol.h"

@class COSHealthGoalTableViewController, FIUIFormattingManager, HKHealthStore;

@interface COSHealthGoalViewController : COSSetupPageViewController <PBAutomationDocumentation>
{
    HKHealthStore *_healthStore;
    FIUIFormattingManager *_formattingManager;
    COSHealthGoalTableViewController *_tableViewController;
}

+ (id)radarComponent;
+ (id)documentationDescription;
+ (id)subViews;
+ (id)viewsAndActions;
@property(retain, nonatomic) COSHealthGoalTableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)tappedContinue:(id)arg1;
- (id)healthStore;
- (id)_formattingManager;
- (void)_storeMoveGoal:(id)arg1;
- (id)viewController;

@end

