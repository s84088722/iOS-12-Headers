//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSRestrictionsPINController.h>

@protocol STRestrictionsPINControllerDelegate;

@interface STRestrictionsPINController : PSRestrictionsPINController
{
}

- (void)setPIN:(id)arg1;
- (_Bool)validatePIN:(id)arg1;
- (id)pinInstructionsPrompt;

// Remaining properties
@property(nonatomic) __weak id <STRestrictionsPINControllerDelegate> pinDelegate; // @dynamic pinDelegate;

@end

