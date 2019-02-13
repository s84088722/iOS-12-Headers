//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSArray;

@interface AFSpeechRecognition : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_phrases;
    NSArray *_utterances;
}

+ (id)fakeOneBestFromPhrases:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *utterances; // @synthesize utterances=_utterances;
@property(readonly, copy, nonatomic) NSArray *phrases; // @synthesize phrases=_phrases;
- (void).cxx_destruct;
- (id)aceRecognition;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPhrases:(id)arg1 utterances:(id)arg2;
- (id)initWithPhrases:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

