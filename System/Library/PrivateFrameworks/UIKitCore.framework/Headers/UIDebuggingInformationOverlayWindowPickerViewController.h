/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:15 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, NSArray, NSString;

@interface UIDebuggingInformationOverlayWindowPickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	NSArray* _windows;

}

@property (nonatomic,retain) UITableView * tableView;               //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSArray * windows;                     //@synthesize windows=_windows - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITableView *)tableView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(NSArray *)windows;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)loadData;
-(void)setWindows:(NSArray *)arg1 ;
@end
