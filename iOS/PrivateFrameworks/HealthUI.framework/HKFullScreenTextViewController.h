//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UITextView;

@interface HKFullScreenTextViewController : UIViewController
{
    NSString *_detailText;
}

@property(retain, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
- (void).cxx_destruct;
- (id)description;
- (void)createTextView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly) UITextView *textView;

@end

