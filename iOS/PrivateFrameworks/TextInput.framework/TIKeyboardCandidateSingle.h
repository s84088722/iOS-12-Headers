//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInput/TIKeyboardCandidate.h>

@class NSString;

@interface TIKeyboardCandidateSingle : TIKeyboardCandidate
{
    _Bool _extensionCandidate;
    NSString *_candidate;
    NSString *_input;
}

+ (int)type;
+ (id)secureCandidateForInput:(id)arg1 slotID:(unsigned int)arg2 customInfoType:(unsigned long long)arg3;
+ (id)secureCandidateForInput:(id)arg1 slotID:(unsigned int)arg2;
+ (id)candidateWithUnchangedInput:(id)arg1;
+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2 customInfoType:(unsigned long long)arg3;
+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2;
+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2 extensionCandidate:(_Bool)arg3;
+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isExtensionCandidate) _Bool extensionCandidate; // @synthesize extensionCandidate=_extensionCandidate;
@property(copy, nonatomic) NSString *input; // @synthesize input=_input;
@property(copy, nonatomic) NSString *candidate; // @synthesize candidate=_candidate;
- (void).cxx_destruct;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)candidateByReplacingWithCandidate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResponseCandidate:(id)arg1;
- (id)initWithUnchangedInput:(id)arg1;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 extensionCandidate:(_Bool)arg3;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2;
- (id)initWithCandidate:(id)arg1;

@end

