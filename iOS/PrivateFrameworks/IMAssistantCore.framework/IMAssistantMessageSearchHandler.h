//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMAssistantCore/IMAssistantMessageQueryHandler.h>

#import <IMAssistantCore/INSearchForMessagesIntentHandling-Protocol.h>

@class NSString;
@protocol IMAssistantMessageAttributeSanitizer;

@interface IMAssistantMessageSearchHandler : IMAssistantMessageQueryHandler <INSearchForMessagesIntentHandling>
{
    id <IMAssistantMessageAttributeSanitizer> _attributeSanitizer;
}

@property(retain, nonatomic) id <IMAssistantMessageAttributeSanitizer> attributeSanitizer; // @synthesize attributeSanitizer=_attributeSanitizer;
- (void).cxx_destruct;
- (id)resolveSpeakableGroupNames:(id)arg1 forIntent:(id)arg2;
- (void)resolveRecipientsAndSender:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)handleSearchForMessages:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveDateTimeRangeForSearchForMessages:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveSpeakableGroupNamesForSearchForMessages:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveAttributesForSearchForMessages:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveSendersForSearchForMessages:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveRecipientsForSearchForMessages:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithAttributeSanitizer:(id)arg1 intentIdentifier:(id)arg2;
- (id)initWithIntentIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
