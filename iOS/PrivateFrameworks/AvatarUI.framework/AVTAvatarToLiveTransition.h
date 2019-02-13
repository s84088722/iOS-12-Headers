//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AvatarUI/AVTTransition.h>

@protocol AVTAvatarTransitionModel;

@interface AVTAvatarToLiveTransition : AVTTransition
{
    id <AVTAvatarTransitionModel> _avatarTransitionModel;
}

@property(readonly, nonatomic) id <AVTAvatarTransitionModel> avatarTransitionModel; // @synthesize avatarTransitionModel=_avatarTransitionModel;
- (void).cxx_destruct;
- (void)performTransition;
- (id)model;
- (id)initWithModel:(id)arg1 animated:(_Bool)arg2 setupHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4 logger:(id)arg5;

@end

