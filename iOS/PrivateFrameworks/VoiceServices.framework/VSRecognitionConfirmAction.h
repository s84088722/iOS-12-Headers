//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VoiceServices/VSRecognitionRecognizeAction.h>

@class VSRecognitionAction;

@interface VSRecognitionConfirmAction : VSRecognitionRecognizeAction
{
    VSRecognitionAction *_confirmedAction;
    VSRecognitionAction *_deniedAction;
    struct {
        unsigned int initializing:1;
        unsigned int confirmed:1;
    } _confirmFlags;
}

- (id)deniedAction;
- (void)setDeniedAction:(id)arg1;
- (id)confirmedAction;
- (void)setConfirmedAction:(id)arg1;
- (void)_setConfirmed:(_Bool)arg1;
- (int)completionType;
- (void)dealloc;
- (id)initWithModelIdentifier:(id)arg1;
- (id)init;

@end

