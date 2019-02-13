//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

#import "FRViewControllerOperation-Protocol.h"

@class FCCloudContext, NSArray, NSString, SVVideoViewController;

@interface FRVideoViewControllerOperation : FCOperation <FRViewControllerOperation>
{
    CDUnknownBlockType _viewControllerCompletion;
    NSArray *_articleIDs;
    FCCloudContext *_cloudContext;
    CDUnknownBlockType _viewControllerGenerator;
    SVVideoViewController *_resultVideoViewController;
}

@property(retain, nonatomic) SVVideoViewController *resultVideoViewController; // @synthesize resultVideoViewController=_resultVideoViewController;
@property(copy, nonatomic) CDUnknownBlockType viewControllerGenerator; // @synthesize viewControllerGenerator=_viewControllerGenerator;
@property(retain, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
@property(copy, nonatomic) NSArray *articleIDs; // @synthesize articleIDs=_articleIDs;
@property(copy, nonatomic) CDUnknownBlockType viewControllerCompletion; // @synthesize viewControllerCompletion=_viewControllerCompletion;
- (void).cxx_destruct;
- (void)_fetchHeadlinesWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchOnboardingVersionNumberWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchAppConfigurationWithCompletion:(CDUnknownBlockType)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

