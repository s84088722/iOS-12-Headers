//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameController/_GCExtendedGamepad.h>

#import <GameController/_GCACHomeButtonDelegate-Protocol.h>

@class GCMotion, NSString, _GCACHomeButton;

@interface _GCMFiExtendedGamepadControllerProfile : _GCExtendedGamepad <_GCACHomeButtonDelegate>
{
    _GCACHomeButton *_acHome;
    GCMotion *_motion;
}

- (void).cxx_destruct;
- (id)menuButton;
- (void)toggleSuspendResume;
- (void)set_motion:(id)arg1;
- (id)motion;
- (void)setPlayerIndex:(long long)arg1;
- (id)name;
- (id)initWithController:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

