//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIVisualEffectViewEntry.h>

__attribute__((visibility("hidden")))
@interface _UIVisualEffectViewReversingEntry : _UIVisualEffectViewEntry
{
    _UIVisualEffectViewEntry *_sourceEntry;
}

- (void).cxx_destruct;
- (id)description;
- (id)copyForTransitionOut;
- (id)copyForTransitionToEffect:(id)arg1;
- (_Bool)canTransitionToEffect:(id)arg1;
- (_Bool)isSameTypeOfEffect:(id)arg1;
- (void)removeEffectFromView:(id)arg1;
- (void)applyIdentityEffectToView:(id)arg1;
- (void)applyRequestedEffectToView:(id)arg1;
- (void)addEffectToView:(id)arg1;
- (_Bool)hasTransform;
- (_Bool)shouldManageCornerRadius;
- (_Bool)shouldAnimateProperty:(id)arg1;
- (id)initWithViewEntry:(id)arg1;

@end

