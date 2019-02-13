//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SXWebContentViewController;
@protocol SXWebContentConfigurationManager, SXWebContentErrorProvider, SXWebContentInteractionProvider, SXWebContentPresentationManager;

@interface SXWebContentContainerViewController : UIViewController
{
    id <SXWebContentInteractionProvider> _interactionProvider;
    id <SXWebContentErrorProvider> _errorProvider;
    id <SXWebContentConfigurationManager> _configurationManager;
    id <SXWebContentPresentationManager> _presentationManager;
    SXWebContentViewController *_webContentViewController;
}

@property(readonly, nonatomic) SXWebContentViewController *webContentViewController; // @synthesize webContentViewController=_webContentViewController;
@property(readonly, nonatomic) id <SXWebContentPresentationManager> presentationManager; // @synthesize presentationManager=_presentationManager;
@property(readonly, nonatomic) id <SXWebContentConfigurationManager> configurationManager; // @synthesize configurationManager=_configurationManager;
@property(readonly, nonatomic) id <SXWebContentErrorProvider> errorProvider; // @synthesize errorProvider=_errorProvider;
@property(readonly, nonatomic) id <SXWebContentInteractionProvider> interactionProvider; // @synthesize interactionProvider=_interactionProvider;
- (void).cxx_destruct;
- (_Bool)allowUserInteractionForInteractionType:(unsigned long long)arg1;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadURL:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithWebContentViewController:(id)arg1 interactionProvider:(id)arg2 errorProvider:(id)arg3 configurationManager:(id)arg4 presentationManager:(id)arg5;

@end

