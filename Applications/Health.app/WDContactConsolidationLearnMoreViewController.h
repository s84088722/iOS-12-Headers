//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKViewController.h>

@class UITextView;

@interface WDContactConsolidationLearnMoreViewController : HKViewController
{
    UITextView *_textView;
    CDUnknownBlockType _dismissHandler;
}

@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)createTextView;
- (void)dismissButtonPressed:(id)arg1;
- (void)createDismissButton;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
