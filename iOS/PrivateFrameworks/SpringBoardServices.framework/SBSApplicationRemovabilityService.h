//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardServices/SBSAbstractApplicationService.h>

@interface SBSApplicationRemovabilityService : SBSAbstractApplicationService
{
}

- (void)setRemovalAllowed:(_Bool)arg1 forBundleIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setRemovalAllowed:(_Bool)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)fetchRemovabilityForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end

