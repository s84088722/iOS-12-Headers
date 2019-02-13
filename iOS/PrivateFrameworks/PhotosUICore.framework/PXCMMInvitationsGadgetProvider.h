//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/PXCMMInvitationGadgetDelegate-Protocol.h>
#import <PhotosUICore/PXCMMWorkflowCoordinatorDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>

@class NSString, PXCMMInvitationsDataSource, PXCMMInvitationsDataSourceManager, PXCMMWorkflowCoordinator, UIColor;

@interface PXCMMInvitationsGadgetProvider : PXGadgetProvider <PXCMMWorkflowCoordinatorDelegate, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXCMMInvitationGadgetDelegate>
{
    PXCMMInvitationsDataSource *_dataSource;
    _Bool _didGenerateGadgets;
    PXCMMWorkflowCoordinator *_workflowCoordinator;
    PXCMMInvitationsDataSourceManager *_dataSourceManager;
    UIColor *_backgroundColor;
}

+ (id)new;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) PXCMMInvitationsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)invitationForGadget:(id)arg1;
- (void)workflowCoordinator:(id)arg1 workflowViewController:(id)arg2 didFinishSession:(id)arg3 withActivityState:(unsigned long long)arg4;
- (void)_reportFailureWithTitle:(id)arg1 message:(id)arg2 invitationGadget:(id)arg3;
- (void)_presentInvitationGadget:(id)arg1 forActivityType:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)_performReviewForInvitationGadget:(id)arg1 animated:(_Bool)arg2;
- (void)_performReceiveForInvitationGadget:(id)arg1 animated:(_Bool)arg2;
- (id)_workflowCoordinator;
- (void)_performAcceptForInvitationGadget:(id)arg1 animated:(_Bool)arg2;
- (void)_setDataSource:(id)arg1 changes:(id)arg2;
- (id)_newGadgetForObjectID:(id)arg1;
- (void)generateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)presentQuickActionsForInvitationGadget:(id)arg1;
- (void)presentInvitationGadget:(id)arg1 animated:(_Bool)arg2;
- (id)initWithDataSourceManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

