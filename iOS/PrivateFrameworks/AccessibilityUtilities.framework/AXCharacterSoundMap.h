//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AXCharacterSoundMap : NSObject
{
    NSMutableDictionary *_phDictionaries;
}

@property(retain, nonatomic) NSMutableDictionary *phDictionaries; // @synthesize phDictionaries=_phDictionaries;
- (void).cxx_destruct;
- (id)_linguisticStringForCharacter:(id)arg1 language:(id)arg2 linguisticType:(long long)arg3 andVoiceIdentifier:(id)arg4;
- (id)phoneticStringForCharacter:(id)arg1 forLanguage:(id)arg2 andVoiceIdentifier:(id)arg3;
- (id)phonemeStringForCharacter:(id)arg1 forLanguage:(id)arg2 andVoiceIdentifier:(id)arg3;
- (id)init;

@end

