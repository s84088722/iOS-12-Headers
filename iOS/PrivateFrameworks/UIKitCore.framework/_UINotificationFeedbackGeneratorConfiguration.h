//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIFeedbackGeneratorConfiguration.h>

@class NSDictionary;

@interface _UINotificationFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration
{
    _Bool _includePrivateEvents;
    NSDictionary *_feedbacks;
}

+ (id)privateConfiguration;
+ (id)defaultConfiguration;
@property(nonatomic) _Bool includePrivateEvents; // @synthesize includePrivateEvents=_includePrivateEvents;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *feedbacks; // @synthesize feedbacks=_feedbacks;
- (id)feedbackKeyPaths;
- (_Bool)defaultEnabled;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

