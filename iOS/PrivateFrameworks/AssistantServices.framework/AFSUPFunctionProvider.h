//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/AFSpeakableUtteranceParser.h>

#import <AssistantServices/AFSpeakableNamespaceProvider-Protocol.h>

@class NSDateFormatter, NSString;

@interface AFSUPFunctionProvider : AFSpeakableUtteranceParser <AFSpeakableNamespaceProvider>
{
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_timeFormatter;
}

+ (_Bool)_shouldAutomaticallyProvideFunctions;
- (void).cxx_destruct;
- (id)stringForExpression:(id)arg1 containsPrivacySensitiveContents:(_Bool *)arg2;
- (id)_callFunction:(id)arg1 withArguments:(id)arg2;
- (id)_speechRecognitionUsageDescription:(id)arg1;
- (id)_siriUsageDescription:(id)arg1;
- (id)_deviceModel;
- (id)_lowercaseString:(id)arg1;
- (id)_tempInWeatherUnits:(id)arg1;
- (id)_currentWeekday:(id)arg1;
- (id)_currentShortDate:(id)arg1;
- (id)_currentLongDate:(id)arg1;
- (id)_currentTime:(id)arg1;
- (id)_dateFormattedWithFormatter:(id)arg1 arguments:(id)arg2;
- (id)initWithLocale:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

