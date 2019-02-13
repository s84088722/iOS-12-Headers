//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIDropInteraction.h>

#import "UIDropInteractionDelegate-Protocol.h"
#import "UIDropInteractionDelegate_Private-Protocol.h"

@class NSString;

@interface UserNavigationDropInteraction : UIDropInteraction <UIDropInteractionDelegate, UIDropInteractionDelegate_Private>
{
    CDUnknownBlockType _navigationHandler;
    _Bool _opensNewTab;
    long long _tabOrder;
}

- (void).cxx_destruct;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (id)initWithOpensNewTab:(_Bool)arg1 tabOrder:(long long)arg2 navigationHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

