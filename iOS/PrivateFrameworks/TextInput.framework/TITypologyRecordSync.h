//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardConfiguration, TIKeyboardState;

@interface TITypologyRecordSync : TITypologyRecord
{
    TIKeyboardState *_keyboardState;
    TIKeyboardConfiguration *_keyboardConfig;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) TIKeyboardConfiguration *keyboardConfig; // @synthesize keyboardConfig=_keyboardConfig;
@property(retain, nonatomic) TIKeyboardState *keyboardState; // @synthesize keyboardState=_keyboardState;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)textSummary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applyToStatistic:(id)arg1;

@end

