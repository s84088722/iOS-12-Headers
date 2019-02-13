//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSIndexPath;

__attribute__((visibility("hidden")))
@interface UIDictationSerializableResults : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _fromKeyboard;
    _Bool _useServerCapitalization;
    _Bool _addTrailingSpace;
    _Bool _allowsAlternatives;
    NSArray *_phrases;
    const struct __CFString *_transform;
    NSIndexPath *_indexPathOfInterpretations;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool allowsAlternatives; // @synthesize allowsAlternatives=_allowsAlternatives;
@property(retain, nonatomic) NSIndexPath *indexPathOfInterpretations; // @synthesize indexPathOfInterpretations=_indexPathOfInterpretations;
@property(nonatomic) _Bool addTrailingSpace; // @synthesize addTrailingSpace=_addTrailingSpace;
@property(nonatomic) _Bool useServerCapitalization; // @synthesize useServerCapitalization=_useServerCapitalization;
@property(nonatomic) const struct __CFString *transform; // @synthesize transform=_transform;
@property(nonatomic) _Bool fromKeyboard; // @synthesize fromKeyboard=_fromKeyboard;
@property(copy, nonatomic) NSArray *phrases; // @synthesize phrases=_phrases;
- (void).cxx_destruct;
- (id)description;
- (id)singleLineResult;
- (id)bestResults;
- (id)dictationPhraseArray;
- (id)bestTextArray;
- (id)textArray;
- (id)bestText;
- (id)text;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithArrayOfArrayOfStrings:(id)arg1;
- (id)initWithPhrases:(id)arg1;
- (id)init;

@end

