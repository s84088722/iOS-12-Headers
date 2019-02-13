//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIFeedback.h>

#import <UIKitCore/_UIFeedbackDiscretePlayable-Protocol.h>

@class NSString;

@interface _UIDiscreteFeedback : _UIFeedback <_UIFeedbackDiscretePlayable>
{
    _Bool _highPriority;
    long long _type;
}

+ (id)discreteFeedbackForType:(long long)arg1;
+ (id)type;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic, getter=isHighPriority) _Bool highPriority; // @synthesize highPriority=_highPriority;
- (id)_debugDictionary;
- (_Bool)isPlaying;
- (unsigned int)_effectiveSystemSoundID;
- (unsigned long long)_effectiveEventType;
- (id)_playableProtocol;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

