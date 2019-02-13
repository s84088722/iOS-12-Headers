//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COSOptinViewController.h"

#import "COSUnifiedFYIOptinController-Protocol.h"
#import "PBAutomationDocumentation-Protocol.h"

@class NSString;

@interface COSSiriOptinViewController : COSOptinViewController <COSUnifiedFYIOptinController, PBAutomationDocumentation>
{
    _Bool _languageSupported;
}

+ (_Bool)controllerNeedsToRun;
+ (_Bool)wantsUnifiedFYI;
+ (id)radarComponent;
+ (id)documentationDescription;
+ (id)subViews;
+ (id)viewsAndActions;
@property(nonatomic) _Bool languageSupported; // @synthesize languageSupported=_languageSupported;
- (id)detailTitleString;
- (id)learnMoreButtonTitle;
- (id)alternateButtonTitle;
- (id)okayButtonTitle;
- (id)suggestedButtonTitle;
- (void)applyConfirmedOptin:(_Bool)arg1;
- (void)learnMoreButtonPressed:(id)arg1;
- (void)okayButtonPressed:(id)arg1;
- (void)alternateButtonPressed:(id)arg1;
- (void)suggestedButtonPressed:(id)arg1;
- (id)imageResource;
- (id)detailString;
- (id)titleString;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

