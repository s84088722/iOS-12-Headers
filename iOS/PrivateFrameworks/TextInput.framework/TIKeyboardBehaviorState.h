//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TIKeyboardBehaviorState : NSObject
{
    _Bool hasInput;
    _Bool hasCandidates;
    _Bool hasCandidateSelected;
    _Bool hasNextPage;
    _Bool showsExtendedList;
    _Bool followsZhuyin;
    _Bool spaceConfirmation;
    _Bool hardwareKeyboardMode;
    _Bool _hasAutocorrection;
    _Bool _userSelectedCurrentCandidate;
    _Bool _showsCandidatesInLayout;
}

@property(nonatomic) _Bool showsCandidatesInLayout; // @synthesize showsCandidatesInLayout=_showsCandidatesInLayout;
@property(nonatomic) _Bool userSelectedCurrentCandidate; // @synthesize userSelectedCurrentCandidate=_userSelectedCurrentCandidate;
@property(nonatomic) _Bool hasAutocorrection; // @synthesize hasAutocorrection=_hasAutocorrection;
@property(nonatomic) _Bool hardwareKeyboardMode; // @synthesize hardwareKeyboardMode;
@property(nonatomic) _Bool spaceConfirmation; // @synthesize spaceConfirmation;
@property(nonatomic) _Bool followsZhuyin; // @synthesize followsZhuyin;
@property(nonatomic) _Bool showsExtendedList; // @synthesize showsExtendedList;
@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage;
@property(nonatomic) _Bool hasCandidateSelected; // @synthesize hasCandidateSelected;
@property(nonatomic) _Bool hasCandidates; // @synthesize hasCandidates;
@property(nonatomic) _Bool hasInput; // @synthesize hasInput;

@end

