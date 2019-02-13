//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NRTermsEvent, UIToolbar, UIWebView;
@protocol BuddyTCSubControllerDelegate;

@interface BuddySimpleTCController : UIViewController
{
    UIToolbar *_toolbar;
    UIWebView *_webView;
    id <BuddyTCSubControllerDelegate> _delegate;
    NRTermsEvent *_content;
}

@property(retain, nonatomic) NRTermsEvent *content; // @synthesize content=_content;
@property(nonatomic) __weak id <BuddyTCSubControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)disagree:(id)arg1;
- (void)agree:(id)arg1;
- (void)updateLayout;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithTitle:(id)arg1 content:(id)arg2;

@end
