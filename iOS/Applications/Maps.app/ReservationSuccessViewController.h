//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface ReservationSuccessViewController : UIViewController
{
    UILabel *_mainLabel;
    UILabel *_subLabel;
    UIButton *_editButton;
}

@property(readonly, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(readonly, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(copy, nonatomic) NSString *subText;
@property(copy, nonatomic) NSString *mainText;
- (void)viewDidLoad;

@end

