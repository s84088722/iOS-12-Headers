//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/TIKeyboardActivityObserving-Protocol.h>

@class NSCache, NSString, TIInputMode, TIMecabraEnvironment, TIMecabraWrapper, TIWordSearchOperationGetCandidates;

@interface TIWordSearch : NSObject <TIKeyboardActivityObserving>
{
    id _userDictionaryObserver;
    _Bool _autoCorrects;
    _Bool _shouldLearnAcceptedCandidate;
    TIInputMode *_inputMode;
    TIMecabraEnvironment *_mecabraEnvironment;
    TIMecabraWrapper *_mecabraWrapper;
    TIWordSearchOperationGetCandidates *_operation;
    NSCache *_candidatesCache;
}

+ (id)recipientRecords;
+ (id)sharedOperationQueue;
+ (id)mecabraLearningDictionaryDirectory;
+ (id)configureUserDictionaryObserver:(id)arg1 previousObserver:(id)arg2;
@property(retain, nonatomic) NSCache *candidatesCache; // @synthesize candidatesCache=_candidatesCache;
@property _Bool shouldLearnAcceptedCandidate; // @synthesize shouldLearnAcceptedCandidate=_shouldLearnAcceptedCandidate;
@property _Bool autoCorrects; // @synthesize autoCorrects=_autoCorrects;
@property(retain) TIWordSearchOperationGetCandidates *operation; // @synthesize operation=_operation;
@property(retain, nonatomic) TIMecabraEnvironment *mecabraEnvironment; // @synthesize mecabraEnvironment=_mecabraEnvironment;
@property(readonly) TIInputMode *inputMode; // @synthesize inputMode=_inputMode;
- (void).cxx_destruct;
- (void)resetMecabraEnvironment;
- (void)commitPunctuationSurface:(id)arg1;
- (void)commitSurface:(id)arg1;
- (void)declareEndOfSentence;
- (void)adjustEnvironmentOnAction:(long long)arg1;
- (void)clearLeftDocumentContext;
- (void)setLeftDocumentContext:(id)arg1 rightDocumentContext:(id)arg2;
- (void)flushDynamicData;
- (void)adaptOfflineToParagraph:(id)arg1 adaptationContext:(id)arg2 timeStamp:(double)arg3;
- (void)updateUserWordEntries;
- (void)setLanguageModelAdaptationContext:(id)arg1;
- (void)setLanguageModelAdaptationContextWithClientIdentifier:(id)arg1 recipientIdentifier:(id)arg2;
- (void)contactStoreDidChange:(id)arg1;
- (void)dynamicDictionariesRemoved:(id)arg1;
- (void)clearObservers;
- (void)saveLearningDictionary;
- (void)completeOperationsInQueue;
- (void)lastAcceptedCandidateCorrected;
- (void)releaseBackgroundActivityAssertion;
- (void)performOperationAsync:(id)arg1 withBackgroundActivityAssertion:(_Bool)arg2;
- (void)performOperationAsync:(id)arg1;
- (void)resetPreviousWord;
- (_Bool)isCancelled;
- (void)cancel;
- (void)performAccept:(void *)arg1 isPartial:(_Bool)arg2;
- (_Bool)addFacemarkCandidatesToResultSet:(id)arg1 forInput:(id)arg2;
- (void)_addFacemarkCandidatesToResultSet:(id)arg1 forInput:(id)arg2;
- (id)cachedCandidatesForOperation:(id)arg1;
- (id)uncachedCandidatesForOperation:(id)arg1;
- (id)candidatesForOperation:(id)arg1;
- (id)candidatesCacheKeyForOperation:(id)arg1;
- (void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2;
- (void)keyboardActivityDidTransition:(id)arg1;
- (void)dealloc;
- (id)initTIWordSearchWithInputMode:(id)arg1 mecabraWrapper:(id)arg2;
- (id)initTIWordSearchWithInputMode:(id)arg1;
- (unsigned long long)mecabraCreationOptions;
@property(readonly, nonatomic) int mecabraLanguage;
- (int)mecabraInputMethodType;
@property(readonly) struct __Mecabra *mecabra;
@property(retain) TIMecabraWrapper *mecabraWrapper; // @synthesize mecabraWrapper=_mecabraWrapper;
- (void)clearLearningDictionary;
- (void)updateMecabraState;
- (void)clearCache;
- (void)endInputSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

