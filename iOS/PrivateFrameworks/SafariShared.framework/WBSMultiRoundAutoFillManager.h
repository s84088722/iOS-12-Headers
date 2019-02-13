//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString, NSTimer, WBSFormMetadata;

@interface WBSMultiRoundAutoFillManager : NSObject
{
    unsigned long long _autoFillAttemptTrigger;
    WBSFormMetadata *_formMetadataFromPreviousAutoFillAttempt;
    _Bool _userDidInteractWithForm;
    unsigned long long _numberOfFollowUpAutoFillAttempts;
    NSTimer *_timerForFollowUpAutoFill;
    NSMutableSet *_controlUniqueIDToBeIgnoredByFollowUpAutoFill;
    NSString *_addressSetLabelUsedDuringFirstAutoFillPass;
    NSSet *_addressBookPropertiesThatCanBeFilled;
}

@property(copy, nonatomic) NSSet *addressBookPropertiesThatCanBeFilled; // @synthesize addressBookPropertiesThatCanBeFilled=_addressBookPropertiesThatCanBeFilled;
@property(copy, nonatomic) NSString *addressSetLabelUsedDuringFirstAutoFillPass; // @synthesize addressSetLabelUsedDuringFirstAutoFillPass=_addressSetLabelUsedDuringFirstAutoFillPass;
- (void).cxx_destruct;
- (_Bool)shouldControlBeIgnoredByFollowUpAutoFill:(id)arg1;
- (void)addControlUniqueIDsIgnoredByFollowUpAutoFill:(id)arg1;
- (void)addControlUniqueIDIgnoredByFollowUpAutoFill:(id)arg1;
- (unsigned long long)currentAutoFillAttemptTrigger;
- (_Bool)shouldAttemptFollowUpAutoFillInFormWithMetadata:(id)arg1 requestType:(unsigned long long)arg2;
- (id)init;
- (void)dealloc;
- (void)didEditFormText;
- (void)dispatchFollowUpAutoFillOfFormWithMetdata:(id)arg1 autoFillBlock:(CDUnknownBlockType)arg2;

@end

