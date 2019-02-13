//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCRCComposedCharacter : NSObject
{
    unsigned long long _originalRepresentationLength;
    unsigned long long _normalFormDRepresentationLength;
    unsigned long long _normalFormKCRepresentationLength;
    int *_originalRepresentation;
    int *_normalFormDRepresentation;
    int *_normalFormKCRepresentation;
    long long _originalCombinedCharacterLength;
    struct __CFString *_originalCombinedCharacter;
}

- (unsigned long long)formKCLength;
- (unsigned long long)formDLength;
- (unsigned long long)originalLength;
- (unsigned long long)length;
- (_Bool)containsUpperCase;
- (_Bool)_formKCContaintsUpperCase;
- (int)originalFromCharAtIndex:(unsigned long long)arg1;
- (int)formKCCharAtIndex:(unsigned long long)arg1;
- (int)formDCharAtIndex:(unsigned long long)arg1;
- (int)charAtIndex:(unsigned long long)arg1;
- (void)_buildFormKC;
- (void)_buildFormD;
- (struct __CFString *)copyUnicodeDescriptionString;
- (struct __CFString *)originalString;
- (_Bool)isEqualToUChar32:(int)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithComposedCharacter:(struct __CFString *)arg1;
- (id)_initWithComposedCharacter:(struct __CFString *)arg1;
- (id)initWithCharacter:(int)arg1;
- (id)_initWithSimpleCharacter:(int)arg1;
- (id)_initWithCharacter:(int)arg1;

@end

