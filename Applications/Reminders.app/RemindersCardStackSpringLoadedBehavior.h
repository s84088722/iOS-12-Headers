//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UISpringLoadedInteractionBehavior-Protocol.h"

@class NSString, RemindersCardStackViewController;
@protocol UISpringLoadedInteractionBehavior;

@interface RemindersCardStackSpringLoadedBehavior : NSObject <UISpringLoadedInteractionBehavior>
{
    RemindersCardStackViewController *_cardStackViewController;
    id <UISpringLoadedInteractionBehavior> _hysteresisBehavior;
}

- (void).cxx_destruct;
- (_Bool)shouldRecognizeInteraction:(id)arg1 withContext:(id)arg2;
- (_Bool)shouldAllowInteraction:(id)arg1 withContext:(id)arg2;
- (id)initWithCardStackViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
